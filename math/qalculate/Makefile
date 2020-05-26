# $NetBSD: Makefile,v 1.58 2020/05/06 14:04:11 adam Exp $

DISTNAME=	libqalculate-3.10.0
PKGNAME=	qalculate-3.10.0
PKGREVISION=	1
CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_GITHUB:=Qalculate/}
GITHUB_PROJECT=	libqalculate
GITHUB_RELEASE=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://qalculate.github.io/
COMMENT=	Modern multi-purpose desktop calculator (console version)
LICENSE=	gnu-gpl-v2

WRKSRC=		${WRKDIR}/libqalculate-${PKGVERSION_NOREV}

USE_LANGUAGES=		c c++11
USE_LIBTOOL=		yes
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		autoconf automake
USE_TOOLS+=		gmake intltool msgfmt msgmerge xgettext pkg-config
BUILD_DEPENDS+=       doxygen-[0-9]*:../../devel/doxygen
GNU_CONFIGURE=		yes
PKGCONFIG_OVERRIDE=	${WRKSRC}/libqalculate.pc.in

UNLIMIT_RESOURCES=	datasize

CFLAGS.SunOS+=		-D_LCONV_C99

pre-configure:
	${RUN} cd ${WRKSRC} && autoreconf

.include "../../devel/readline/buildlink3.mk"
.include "../../math/mpfr/buildlink3.mk"
.include "../../textproc/icu/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
