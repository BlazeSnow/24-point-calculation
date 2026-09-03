# 计算二十四点 (24-point-calculation)

一个用于计算二十四点的命令行小工具。输入四个数字，程序会遍历所有数字排列与加减乘除组合，列出所有能算出 24 的算式。

## 使用方法

1. 程序开始后，直接输入`四个数字`后回车即可
2. 数字之间以`空格`隔开
3. 数字范围为`1~13`
4. 输入不合法时会提示重新输入，无需重启程序

## 如何下载？

前往 [GitHub Release](https://github.com/BlazeSnow/24-point-calculation/releases/latest) 下载对应系统的可执行文件。

文件命名格式为 `24-point-calculation-<版本>-<系统>-<架构>`，各平台对应关系如下：

| 文件名后缀           | 适用平台               |
| -------------------- | ---------------------- |
| `-windows-x64.exe`   | Windows x64            |
| `-windows-arm64.exe` | Windows ARM64          |
| `-linux-x64`         | Linux x64              |
| `-linux-arm64`       | Linux ARM64            |
| `-macos-x64`         | macOS（Intel）         |
| `-macos-arm64`       | macOS（Apple Silicon） |

## Linux / macOS 额外处理

```sh
sudo chmod +x <可执行文件>
```

## 更新日志

见 [CHANGELOG.md](./CHANGELOG.md)

## 版权

Copyright © 2024-2026 BlazeSnow. 保留所有权利。
