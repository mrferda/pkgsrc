# $NetBSD: Makefile,v 1.6 2020/05/19 12:09:08 nia Exp $

GITHUB_TAG=	v0.1.1
DISTNAME=	nanotodon-${GITHUB_TAG:S/v//}
PKGREVISION=	3
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_GITHUB:=taka-tuos/}

MAINTAINER=	tsutsui@NetBSD.org
HOMEPAGE=	https://github.com/taka-tuos/nanotodon
COMMENT=	CUI/C99 mastodon client
LICENSE=	mit

USE_LANGUAGES=	c99

INSTALLATION_DIRS+=	bin

BUILD_TARGET=	default

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nanotodon ${DESTDIR}${PREFIX}/bin

.include "../../devel/ncursesw/buildlink3.mk"
.include "../../textproc/json-c/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
