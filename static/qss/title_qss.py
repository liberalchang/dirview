def my_Qss():
    # 窗口美化
    qssStyle = '''
                
                QWidget#win_widget{
                background-color:rgb(238, 240, 246);
                border-left:0.5px solid lightgray;
                border-right:0.5px solid lightgray;
                border-top:0.5px solid lightgray;
                border-bottom:0.5px solid #e5e5e5;
                border-bottom-left-radius: 5px;
                border-bottom-right-radius: 5px;
                border-top-left-radius: 5px;
                border-top-right-radius: 5px;
                }
                
                QWidget#head_widget{
                   background-color:#ffffff;
                   border-left:0.5px solid lightgray;
                    border-right:0.5px solid lightgray;
                   border-bottom:0.5px solid #e5e5e5;
                   border-top-left-radius: 5px;
                    border-top-right-radius: 5px;
                   padding:5px 5px 5px 5px
                   }
                
                QPushButton#min_window
                {
                font-family:"Webdings";
                text-align:top;
                background:#6DDF6D;border-radius:5px;
                border:none;
               font-size:13px;
               }
               QPushButton#min_window:hover{background:green;}
               
                QPushButton#max_window
               {
               font-family:"Webdings";
               background:#F7D674;border-radius:5px;
               border:none;
                font-size:13px;
               }
               QPushButton#max_window:hover{background:yellow;}
               
               QPushButton#close_window
                {
               font-family:"Webdings";
               background:#F76677;border-radius:5px;
               border:none;
               font-size:13px;
                }
                
               QPushButton#close_window:hover{background:red;}
               
                QProgressBar 
                {   
                border: 2px solid grey;   
                border-radius: 5px;   
                background-color: #FFFFFF;
                }
                
                QProgressBar::chunk 
                {   
                background-color: #007FFF;   
                width: 10px;
                }
                
                QProgressBar 
                {   
                border: 2px solid grey;   
                border-radius: 5px;   
                text-align: center;
                }
                
                QPushButton#pushButton
                {
                background-color: #99CCFF;
                border-radius: 5px; /*圆角*/
                }
                
                QPushButton#pushButton:hover {
                background-color: #81c784;
                }
                QPushButton#pushButton:pressed {
                background-color: #c8e6c9;
                }
               '''
    return qssStyle
