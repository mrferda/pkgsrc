# $NetBSD: Makefile,v 1.16 2019/08/11 13:19:19 wiz Exp $

DISTNAME=	Devel-StackTrace-AsHTML-0.15
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	4
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Devel/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://metacpan.org/release/Devel-StackTrace-AsHTML
COMMENT=	Perl5 module to displays stack trace in HTML
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Devel-StackTrace-[0-9]*:../../devel/p5-Devel-StackTrace

PERL5_PACKLIST=		auto/Devel/StackTrace/AsHTML/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
