# transform-the-school-schedule-on-4m3.tongji.edu.cn-into-access-readable-txt

for example:
  transform "
              	<tr>
                  <td>00200402</td>
                  <td style="text-align:left">成功心理训练</td>
                  <td>2</td>
                  <td>1.5</td>
                  <td>考查</td>
                  <td>1-17</td>
                  <td>陈增堂</td>
                  <td>教授</td>
                  <td>120</td>
                  <td>117</td>
                  <td style="text-align:left">一:9-10(北301)</td>
                  <td style="text-align:left"></td>
                  <td style="text-align:left">类别:自然 </td>
                </tr>
             "
   into "
            00200402,成功心理训练,2,1.5,考查,1-17,陈增堂,教授,120,117,一:9-10(北301),,类别:自然 ,
        ".
