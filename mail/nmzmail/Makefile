# $NetBSD: Makefile,v 1.3 2017/09/16 19:26:59 wiz Exp $
#

DISTNAME=	nmzmail-1.1
CATEGORIES=	mail
MASTER_SITES=	http://www.ecademix.com/JohannesHofmann/

MAINTAINER=	pkgsrc-users@NetBSD.org
#HOMEPAGE=	http://www.ecademix.com/JohannesHofmann/nmzmail.html
COMMENT=	Fast mail searching for mutt
LICENSE=	gnu-gpl-v3

GNU_CONFIGURE=		yes

SUBST_CLASSES+=		mknmz
SUBST_FILES.mknmz=	src/nmzmail.c
SUBST_MESSAGE.mknmz=	Fixing mknmz executable path.
SUBST_STAGE.mknmz=	post-configure
SUBST_SED.mknmz=	-e "s|mknmz|${PREFIX}/bin/mknmz|"

DEPENDS+=	namazu>=2.0.20:../../textproc/namazu

.include "../../devel/readline/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
