# $NetBSD: Makefile,v 1.23 2020/05/17 18:39:29 adam Exp $

DISTNAME=	uncompyle6-3.6.7
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	lang python
MASTER_SITES=	${MASTER_SITE_PYPI:=u/uncompyle6/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/rocky/python-uncompyle6
COMMENT=	Python cross-version byte-code decompiler
LICENSE=	gnu-gpl-v3

DEPENDS+=	${PYPKGPREFIX}-spark-parser>=1.8.9:../../lang/py-spark-parser
DEPENDS+=	${PYPKGPREFIX}-xdis>=4.5.1:../../devel/py-xdis

PYTHON_VERSIONED_DEPENDENCIES=	test:test

USE_LANGUAGES=	# none

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
	${MV} pydisassemble pydisassemble-${PYVERSSUFFIX} && \
	${MV} uncompyle6 uncompyle6-${PYVERSSUFFIX} || ${TRUE}

do-test:
	cd ${WRKSRC}/pytest && pytest-${PYVERSSUFFIX}

.include "../../lang/python/egg.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
