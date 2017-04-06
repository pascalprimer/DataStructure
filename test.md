# 指南

### **注意**
1. 文件名与类名保持一致

### 模块
星号表示待讨论

<div>
    <table border="0">
	  <tr>
	    <th>类名</th>
	    <th>功能</th>
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
	    <td>*Log(只有一个string？？？)</td>
	    <td>日志</td>
	  </tr>
	  <tr>
	    <td>Date</td>
	    <td>时间</td>
	  </tr>
	  <tr>
	    <td>Exception</td>
	    <td>异常</td>
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
    </table>
</div>

### 具体实现

#### Log
**星号表示待讨论**

空构造，拷贝构造一定要有
*operator =

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
	    <th>类型</th>
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
    </table>
</div>

### 特色功能
