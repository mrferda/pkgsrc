# $NetBSD: Makefile,v 1.42 2018/07/18 00:06:23 joerg Exp $

DISTNAME=	xnc-5.0.4.src
PKGNAME=	xnc-5.0.4
PKGREVISION=	12
CATEGORIES=	sysutils x11
MASTER_SITES=	http://www.xnc.dubna.su/src-5/

MAINTAINER=	pkgsrc-users@NetBSD.org
#HOMEPAGE=	http://xnc.dubna.su/
COMMENT=	File manager for X Window
LICENSE=	gnu-gpl-v2

MAKE_JOBS_SAFE=		no

WRKSRC=		${WRKDIR}/${PKGNAME_NOREV}
USE_LANGUAGES=	c c++03
USE_LIBTOOL=	yes
USE_TOOLS+=	msgfmt
GNU_CONFIGURE=	yes

BUILDLINK_DEPMETHOD.libXt?=	build

.include "../../graphics/tiff/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../x11/libSM/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
