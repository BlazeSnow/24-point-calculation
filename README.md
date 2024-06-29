# 写在最前

1. 此项目用于**二十四点**的计算
2. 程序开始后，直接输入```四个数字```后回车即可
3. 数字之间以```空格```隔开
4. 数字范围为```1~13```

# 更新日志

- **2024年6月29日11点04分**
	- 将程序设置为全英文，避免GBK乱码问题
	- 发布第一个release
- **2024年5月17日13点00分**
	- 拆分```class```
- **2024年4月20日15点13分**
	- 将主程序整理到```class```中
	- 优化输入，如果输入的数不在```1~13```时可以重新输入，不用重启程序了
- **2024年4月17日13点25分**
	- 将仓库从```Gitee```转移到```GitHub```
- **2024年1月28日09点00分**
	- 扩展了运算范围，从```(0,10]```优化为```(0,13]```
	- 优化运算相关程序到子函数内
	- 优化注释内容
- **2024年1月23日08点12分**
	- 将此文件从```PrimaryProjects```中分离，建立新的仓库
- **2024年1月7日17点40分**
	- ```next_permutation```从```while```改为```do while```
- **2024年1月7日17点10分**
	- 使用```algorithm头文件```中的```next_permutation```改写数字随机组合
	- 删去了减法大数减小数的规则，允许出现负数
- **2024年1月7日15点22分**
	- 使用```continue```改写数字随机排列程序
- **2024年1月4日17点43分**
	- 重新启用```using namespace std```
	- 优化加减乘除```char数组```为```常量数组```
	- 优化子函数```for循环```为```range-based for```
	- 优化范围检查函数```for循环```为```range-based for```
- **2023年11月20日22点16分**
	- 修改输入代码```scanf```为```cin```
	- 舍弃```using namespace std```
- **2023年9月19日23点19分**
	- 删除了代码中的```malloc```
	- 优化输出为```cout << endl```
- **2023年9月19日23点05分**
	- 将代码从```C```优化为```C++```
- **2023年8月20日08点47分**
	- 优化了```calloc```错误的报错与终止
	- 优化了文字说明，修改为中文文字说明
- **2023年8月18日17点00分**
	- 优化指针```NULL```检查与报错内容
- **2023年8月17日22点00分**
	- 优化了代码对指针```NULL```的检查，适用于```VisualStudio```格式检查
- **2023年8月10日08点45分**
	- 重新加入```malloc```，找到了```const```报错的问题
- **2023年8月9日17点20分**
	- 删除了```malloc```和```printf_s```
- **2023年8月8日14点30分**
	- 使用```指针```和```malloc```改写了程序
	- 优化了文字说明
- **2023年8月7日22点00分**
	- 简化代码内容
	- 优化了除以1的情况，全部修改为乘以1
- **2023年8月7日14点00分**
	- 简化了括号运算形式，从五种括号运算形式简化到两种
- **2023年8月7日09点00分**
	- 计算扑克牌的二十四点，使用遍历的方法运算
