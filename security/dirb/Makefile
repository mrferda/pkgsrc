# $NetBSD: Makefile,v 1.34 2020/05/06 14:05:00 adam Exp $
#

PKGNAME=	dirb-1.9
DISTNAME=	dirb19
PKGREVISION=	24
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=dirb/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://dirb.sourceforge.net/
COMMENT=	Web Content Scanner

WRKSRC=	${WRKDIR}/dirb

USE_PKGLOCALEDIR=	yes
GNU_CONFIGURE=		yes

BUILDLINK_API_DEPENDS.curl+=	curl>=7.15.0nb1

.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
