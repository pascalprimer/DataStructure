# 指南

## 注意
1. 文件名与类名保持一致
2. 每个逻辑块都要大括号

## 模块
星号表示待讨论

<div>
    <table border="0">
	  <tr>
	    <th>类名</th>
	    <th>功能</th>
	  </tr>
	  <tr>
	    <th>*ptr</th>
	    <th>智能指针</th>
	  </tr>
	  <tr>
	    <td>*Set</td>
	    <td>lib</td>
	  </tr>
	  <tr>
	    <td>Map</td>
	    <td>lib</td>
	  </tr>
	  <tr>
	    <td>Vector</td>
	    <td>lib</td>
	  </tr>
	  <tr>
	    <td>Pair</td>
	    <td>lib</td>
	  </tr>
	  <tr>
	    <td>*File</td>
	    <td>文件</td>
	  </tr>
	  <tr>
	    <td>Log</td>
	    <td>日志</td>
	  </tr>
	  <tr>
	    <td>Date</td>
	    <td>时间</td>
	  </tr>
	  <tr>
	    <td>*Exceptions(那些要)</td>
	    <td>异常处理</td>
	  </tr>
	  <tr>
	    <td>User</td>
	    <td>关于所有用户</td>
	  </tr>
	  <tr>
	    <td>GeneralUser</td>
	    <td>一般用户</td>
	  </tr>
	  <tr>
	    <td>Admin</td>
	    <td>管理员</td>
	  </tr>
	  <tr>
	    <td>Station</td>
	    <td>火车站点</td>
	  </tr>
	  <tr>
	    <td>Train</td>
	    <td>所有火车的所有时间</td>
	  </tr>
	  <tr>
	    <td>SingleRoute</td>
	    <td>单趟单日列车</td>
	  </tr>
	  <tr>
	    <td>Ticket</td>
	    <td>哪趟火车起点终点张数</td>
	  </tr>
    </table>
</div>

## 具体实现
**星号表示待讨论**

空构造，拷贝构造一定要有
*operator =
变量注意清空
**以下所有＊均表示智能指针，禁止使用裸指针**

#### TicketLevel
枚举类型，表示一等座、二等座、无座的级别
kFirstClass, kSecondClass, kNoSeat

#### Log

<div>
    <table border="0">
	  <tr>
	    <th>类型</th>
	    <th>成员</th>
	    <th>功能</th>
	  </tr>
	  <tr>
	    <th>string</th>
	    <th>information</th>
	    <th>记录日志（每加一条信息，再其后加 \n）</th>
	  </tr>
    </table>
</div>

<div>
    <table border="0">
	  <tr>
	    <th>返回类型</th>
	    <th>成员函数</th>
	    <th>功能</th>
	  </tr>
	  <tr>
	    <th>void</th>
	    <th>add(string)</th>
	    <th>添加信息（不必是一整条）</th>
	  </tr>
	  <tr>
	    <th>void</th>
	    <th>newline()</th>
	    <th>添加一个换行</th>
	  </tr>
	  <tr>
	    <th>void</th>
	    <th>print(file_name)</th>
	    <th>输出信息</th>
	  </tr>
    </table>
</div>


#### Date

<div>
    <table border="0">
	  <tr>
	    <th>类型</th>
	    <th>成员</th>
	    <th>功能</th>
	  </tr>
	  <tr>
	    <th>int</th>
	    <th>year</th>
	    <th>年</th>
	  </tr>
	  <tr>
	    <th>int</th>
	    <th>month</th>
	    <th>月</th>
	  </tr>
	  <tr>
	    <th>int</th>
	    <th>day</th>
	    <th>日</th>
	  </tr>
	  <tr>
	    <th>int</th>
	    <th>hour</th>
	    <th><小时/th>
	  </tr>
	  <tr>
	    <th>int</th>
	    <th>minute</th>
	    <th>分钟</th>
	  </tr>
    </table>
</div>

<div>
    <table border="0">
	  <tr>
	    <th>返回类型</th>
	    <th>成员函数</th>
	    <th>功能</th>
	  </tr>
	  <tr>
	    <th>构造函数</th>
	    <th>Date(year, month, day, hour = 0, minute = 0)</th>
	    <th>构造函数</th>
	  </tr>
	  <tr>
	    <th>构造函数</th>
	    <th>Date(string)</th>
	    <th>通过字符串构造日期()</th>
	  </tr>
	  <tr>
	    <th>bool </th>
	    <th>is_same_day(Date, Date)</th>
	    <th>是否同一天</th>
	  </tr>
	  <tr>
	    <th>void </th>
	    <th>get_next_day()</th>
	    <th>下一天</th>
	  </tr>
	  <tr>
	    <th>Date</th>
	    <th>operator +(Date, int )</th>
	    <th>时间向后顺延多少分钟,考虑月份里的日子数和润年，一天一天暴力</th>
	  </tr>
	  <tr>
	    <th>int</th>
	    <th>operator -(Date, Date)</th>
	    <th>时间差(分钟)</th>
	  </tr>
	   <tr>
	    <th>bool</th>
	    <th>operator <(Date, Date)</th>
	    <th>比较小于</th>
	  </tr>
	   <tr>
	    <th>bool</th>
	    <th>operator >Date, Date)</th>
	    <th>比较大于</th>
	  </tr>
	  <tr>
	    <th>string</th>
	    <th>print()</th>
	    <th>将时间打印到字符串</th>
	  </tr>
    </table>
</div>


#### Exceptions
1. 车次不存在
2. 日期不存在
3. 站点不存在或不存在与当前车次
4. 用户不存在
5. 密码错误
6. 无管理员权限

<div>
    <table border="0">
	  <tr>
	    <th>类型</th>
	    <th>成员</th>
	    <th>功能</th>
	  </tr>
    </table>
</div>

<div>
    <table border="0">
	  <tr>
	    <th>返回类型</th>
	    <th>成员函数</th>
	    <th>功能</th>
	  </tr>
    </table>
</div>


#### GeneralUser
默认密码000000

<div>
    <table border="0">
	  <tr>
	    <th>类型</th>
	    <th>成员</th>
	    <th>功能</th>
	  </tr>
	   <tr>
	    <th>string</th>
	    <th>id</th>
	    <th>用户id</th>
	  </tr>
	   <tr>
	    <th>string</th>
	    <th>name</th>
	    <th>用户名字</th>
	  </tr>
	  
	   <tr>
	    <th>string</th>
	    <th>password</th>
	    <th>用户密码</th>
	  </tr>
	   <tr>
	    <th>bool</th>
	    <th>admin_or_not</th>
	    <th>是否是管理员</th>
	  </tr>
	   <tr>
	    <th>Log</th>
	    <th>my_log</th>
	    <th>用户日志</th>
	  </tr>
	   <tr>
	    <th>Map</th>
	    <th>my_tickets：Ticket -> int</th>
	    <th>订票信息,某趟车多少张票</th>
	  </tr>
    </table>
</div>

<div>
    <table border="0">
	  <tr>
	    <th>返回类型</th>
	    <th>成员函数</th>
	    <th>功能</th>
	  </tr>
	  <tr>
	    <th>string</th>
	    <th>query_my_info()</th>
	    <th>返回用户基本信息，包括 id， name，password </th>
	  </tr>
	  <tr>
	    <th>bool</th>
	    <th>modify_name(string)</th>
	    <th>修改用户名字, 不能长于15</th>
	  </tr>
	  <tr>
	    <th>bool</th>
	    <th>modify_password(string, string)</th>
	    <th>修改用户密码，先验证原密码，并且新密码不长于15</th>
	  </tr>
	  <tr>
	    <th>bool</th>
	    <th>is_admin()</th>
	    <th>是否是管理员</th>
	  </tr>
	  <tr>
	    <th>bool</th>
	    <th>buy_ticket(SingleRoute, Station start, Station target, TrainLevel, int)</th>
	    <th>买票或失败</th>
	  </tr>
	  <tr>
	    <th>bool</th>
	    <th>refund_ticket(SingleRoute, Station start, Station target, TrainLevel, int)</th>
	    <th>退票或失败</th>
	  </tr>
	  <tr>
	    <th>string</th>
	    <th>query_my_tickets()</th>
	    <th>返回我买的票</th>
	  </tr>
	  <tr>
	    <th>string</th>
	    <th>query_log()</th>
	    <th>返回log(注意权限)</th>
	  </tr>
    </table>
</div>


#### Admin
继承GeneralUser

|类型|成员|描述|
|:------:|:------:|:------:|
||||
 
|返回类型|成员函数|功能|
|:------:|:------:|:------:|
 |bool|add_single_route(SingleRoute)|增加单趟单日列车|
 |bool|delete_single_route(SingleRoute)|增加单趟单日列车|
 |bool|add_daily_route(SingleRoute, Date finish_time,)|增加时间段内单趟列车|
 |bool|delete_daily_route(SingleRoute, Date finish_time)|删去时间段内单趟列车|
 |bool|start_single_sale(SingleRoute)|开始发售单趟单日车车票|
 |bool|finish_single_sale(SingleRoute)|结束发售单趟单日车车票|
 |bool|start_daily_sale(SingleRoute, Date finish_time,)|开始发售时间段内单趟车车票|
 |bool|finish_daily_sale(SingleRoute, Date finish_time)|结束发售时间段内单趟列车车票|

## 特色功能