# HRLib
1、设置repo

pod repo add libaibo git@github.com:libaibo/Specs.git

2、Podfile中设置

source 'https://github.com/libaibo/Specs.git'  #我们自己的私有spec仓库的地址

source 'https://github.com/CocoaPods/Specs.git'  #官方仓库的地址

pod 'HRLib'

3、创建或者更新

pod install 或 pod update

