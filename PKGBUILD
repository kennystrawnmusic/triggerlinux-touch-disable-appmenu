pkgname=triggerbox-touch-disable-appmenu
pkgver=1.0
pkgrel=1
pkgsrcroot=$srcdir/$pkgname-pkgver
pkgdesc="Triggerbox Touch Detection: Disable AppMenu"
arch=('x86_64')
url="https://github.com/realKennyStrawn93/triggerbox-touch-disable-appmenu"
license=('GPL')
depends=('qtcreator')
source=("git+https://github.com/realKennyStrawn93/triggerbox-touch-disable-appmenu#branch=master")
cpucores="$(cat /proc/cpuinfo | grep cores | head -n1 | tail -c2)"
md5sums=('SKIP')

package() {
  qmake -o $pkgsrcroot/Makefile $pkgsrcroot/touch-disable-appmenu.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
  make -j$cpucores
  make DESTDIR=$pkgdir install
}
