# 微信协议

## 1. 协议简介

- 微信协议源码、SDK开发包、API接口
- 为开发者提供功能丰富、对接简单、高并发、低延时的二次开发协议技术支持
- 可用于开发各类基于微信个人号的爆粉接粉云控系统、拉群炒群客服系统、智能回复机器人

## 2. 协议是什么?

协议是一套完整微信个人号接口，它能监测微信中的各种事件，并辅助微信执行各种操作，提供了客户与微信个人号对接的能力，技术上来讲是一款基于系统通信协议开放性API。杜绝封号，追封，批量封等封号问题，支持多种微信登入方式，完美替代工作手机、手机云控。

## 3. 为什么都在用协议技术?

### 各种技术差异

- 安卓模拟机：延迟高、消息实时到达率低、模拟人为操作效率慢、功能偏少，承担不了商业化功能。
- PC Hook：代码注入型破解，封号情况偏多，使用容易出现追封，公司大规模封号等情况，且目前在营销行业使用率较少，比较偏小团队使用。
- Xposed：在2018年6月份，微信官方在行业重点打击Xposed，自此行业内一片哀嚎遍野，陆续向苹果协议转型。
- Web协议：2017年后不再支持新号登录，仅支持老号，并且掉线严重，功能缺失严重。
- 通讯协议：安全性较好，功能也最丰富，不会出现追封、批量封的情况。但因为技术难度门槛高，行业内具有研发能力的团队非常少。

### 性能对比

![微控api技术对比表](https://github.com/Codbaby/WeChat/blob/main/Resources/%E5%8D%8F%E8%AE%AE%E6%8A%80%E6%9C%AF%E7%B1%BB%E5%9E%8B%E5%AF%B9%E6%AF%94%E8%A1%A8.jpg)

### 据2018-2020年行业数据，我们可得出以下结论：

- 稳定性：Web网页端 < Xpsoed < PC Hook <  模拟机 < 通讯协议
- 功能性：模拟机 < Web网页端 <  PC Hook < 苹果协议 <  Xpsoed技术 
- 安全性：Web网页端 <  Xpsoed < PC Hook < 模拟机 <  通讯协议

## 4. 已实现微信99%的功能

1. 登陆号：支持扫码登录、62/A16登录、注册辅助、解封辅助等
2. 改资料：设置昵称、微信号、头像、个性签名、性别、地区、朋友圈背景图等
3. 改设置：设置隐私权限、添加方式、好友验证、朋友圈权限、黑名单等
4. 发消息：发文字、图片、语音、视频、小程序、分享名片、转发、撤回、置顶、免打扰等
5. 通讯录：好友列表、 标签、联系人信息、 通过好友请求等
6. 加好友：搜索加粉、扫一扫、手机联系人、附近的人、 摇一摇
7. 群管理：微信建群、微信拉人进群、 踢群成员、邀请群成员、群管理员增减等
8. 朋友圈：支持查看和发朋友圈文字、图片、视频、点赞、 评论等
9. 公众号：公众号关注、取消关注、 阅读、投票等

## 5. 为什么选择我们？

1. 功能强大：几乎实现了微信99%的功能，可以满足各行业各领域各种场景下的各种需求。
2. 稳定性强：无需购买工作手机，也区别web、pc协议的功能少、不稳定，苹果协议功能多、性能稳。
3. 对接便捷：不限语言：PHP、java、Python、go皆可，不限终端：网页端、PC端、手机端皆可，技术门槛低。
4. 应用广泛：用户遍布各行业、各领域，已经实现的应用场景广泛。
5. 技术过硬：拥有目前国内最强的微信逆向分析技术团队，在该领域有多年的实战对抗经验和技术经验积累。
6. 服务可靠：专业技术团队12*7全天在线解答，高可靠稳定服务，业界最靠谱的微信个人号API支持伙伴。

## 6. 常见问题

### 1. 怎么保证安全性?
我们平台技术来源于腾讯研发通道，非破解性grpc、mmtls研发，我们从IP、设备、网段、地点、基站等七条加密方式杜绝封号，追封，批量封等封号问题。
### 2. 你们协议是自己研发吗？
我们是纯技术提供商，业务模式是S2B2B2C，协议技术也是公司100%自主研发。
### 3. 微信号是不是挂在COD的服务器？
COD仅处理数据的加解密，微信号是登录在用户机器与TX进行通讯的。
### 4. 登录的设备信息是否固定？
登录的设备信息默认系统随机，用户也可以指定设备信息，并在创建微信实例完成后返回设备信息。
### 5. API速度和稳定性如何？
COD使用AWS K8S 部署，并使用 cloudflare 服务，快速安全稳定。





## 联系方式

https://t.me/codxieyi



