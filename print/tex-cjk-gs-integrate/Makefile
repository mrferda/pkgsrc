# $NetBSD: Makefile,v 1.12 2020/05/01 00:15:11 markd Exp $

DISTNAME=	cjk-gs-integrate
PKGNAME=	tex-${DISTNAME}-20200307.0
TEXLIVE_REV=	54155

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://ctan.org/pkg/cjk-gs-integrate
COMMENT=	Tools to integrate CJK fonts into Ghostscript
LICENSE=	gnu-gpl-v3

USE_TOOLS+=	perl:run
REPLACE_PERL=	bin/cjk-gs-integrate

INSTALLATION_DIRS+=	bin

.include "../../print/texlive/package.mk"

post-extract:
	${MKDIR} ${WRKSRC}/bin
	${MV} ${WRKSRC}/texmf-dist/scripts/cjk-gs-integrate/cjk-gs-integrate.pl \
		${WRKSRC}/bin/cjk-gs-integrate
	${RM} -rf ${WRKSRC}/texmf-dist/scripts

.include "../../mk/bsd.pkg.mk"
