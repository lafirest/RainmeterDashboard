[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1
MouseOverAction=[!ShowMeterGroup Controls][!Redraw]
MouseLeaveAction=[!HideMeterGroup Controls][!Redraw]

;===== Meter Styles=====
;All of these meter styles are required.

;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=Trebuchet MS
FontColor=255,255,255,150
SolidColor=255,255,255,25
FontSize=8
stringAlign=CenterCenter
AntiAlias=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#*1.5+#Space.x#)
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)

[LblCurrSty]
StringStyle=Bold

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=255,255,255,160
FontFace=Trebuchet MS
FontSize=10
stringAlign=center
AntiAlias=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#*1.5+#Space.x#)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#*1.5+#Space.x#)

[CurrentDay]
StringStyle=Bold

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=128,192,255,160

[NextMonth]
FontColor=128,192,255,160

[HolidayStyle]
FontColor=170,170,170,100

[WeekendStyle]

;========== METERS ==========
;These are not required.
[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+(#C.w#+#Space.x#)+#Bumper.x#)
Y=#Bumper.top#
H=#C.h#
FontColor=255,255,255,160
FontFace=Trebuchet MS
FontSize=10
stringAlign=Center
AntiAlias=1
DynamicVariables=1

;Control Bar
[ControlForward]
Meter=String
MeterStyle=TextStyle
FontFace=Webdings
StringAlign=Left
Text="4"
Y=#Bumper.top#
X=((#C.w#*7+#Space.x#*7)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=(#Bumper.x#+#C.w#+#Space.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=R
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]

;Date Indicator
[TodayHL]
Meter=image
X=(#Bumper.x#+(#C.w#+#Space.x#)*(#Week#+1)+3)
Y=(#Bumper.top#+(#C.h#+#Space.y#)*(#ThisWeek#+1)+#C.h#-2)
H=2
W=(#C.w#-6)
SolidColor=#Clr.Hrl#
Hidden=#NotCurrentMonth#
DynamicVariables=1

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*8+#Space.x#*7+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)

;WeekNumbers
[WeekStyle]
Y=#Space.y#R
X=r
DynamicVariables=1
FontColor=#Clr.WkNum#

[Week1]
Meter=String
MeterStyle=TextStyle | WeekStyle
Text=#WeekNumber1#
Y=((#C.h#+#Space.y#)*2+#Bumper.top#)
X=(#Bumper.x#+#C.w#/2)
DynamicVariables=1

[Week2]
Meter=String
MeterStyle=TextStyle | WeekStyle
Text=#WeekNumber2#

[Week3]
Meter=String
MeterStyle=TextStyle | WeekStyle
Text=#WeekNumber3#

[Week4]
Meter=String
MeterStyle=TextStyle | WeekStyle
Text=#WeekNumber4#

[Week5]
Meter=String
MeterStyle=TextStyle | WeekStyle
Text=#WeekNumber5#

[Week6]
Meter=String
MeterStyle=TextStyle | WeekStyle
Text=#WeekNumber6#
Hidden=#LastWkHidden#