# $NetBSD: Makefile,v 1.16 2020/03/10 22:11:22 wiz Exp $

PKGREVISION= 13
.include "../../meta-pkgs/xfce4/Makefile.common"

DISTNAME=	xfce4-kbdleds-plugin-0.0.6
CATEGORIES=	x11
MASTER_SITES=	http://archive.xfce.org/src/panel-plugins/xfce4-kbdleds-plugin/0.0/

HOMEPAGE=	https://goodies.xfce.org/projects/panel-plugins/xfce4-kbdleds-plugin
COMMENT=	This plugin shows the state of your keyboard LED

.include "../../x11/gtk2/buildlink3.mk"
.include "../../x11/xfce4-panel/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
