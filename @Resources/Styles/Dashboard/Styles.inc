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
FontFace=Planer
FontColor=#Colour2#
SolidColor=0,0,0,125
FontSize=11
stringAlign=CenterCenter
AntiAlias=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)

[LblCurrSty]
StringStyle=Bold

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontFace=Planer
FontSize=11
FontColor=#Colour2#
stringAlign=center
AntiAlias=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
StringStyle=Bold

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=128,192,255,255

[NextMonth]
FontColor=128,192,255,160

[HolidayStyle]
FontColor=#Colour3#

[WeekendStyle]

;========== METERS ==========
;These are not required.
[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+#Bumper.x#)
Y=#Bumper.top#
H=#C.h#
FontFace=Planer
FontSize=11
FontColor=#Colour2#
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
X=((#C.w#*6+#Space.x#*6)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=#Bumper.x#
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
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#-3)
Y=(#Bumper.top#+(#C.h#+#Space.y#)*(#ThisWeek#+1)+#C.h#-15)
H=15
W=(#C.w#+6)
SolidColor=0,0,0,75
Hidden=#NotCurrentMonth#
DynamicVariables=1

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)

;-----------------------------------------------------------------------------------------------
;Graphics
;-----------------------------------------------------------------------------------------------

[MeterTopLine1]
Meter=IMAGE
SolidColor=#Colour1#
X=0
Y=0
W=66
H=1
Antialias=1

[MeterTopLineMarker1]
Meter=IMAGE
SolidColor=#Colour1#
X=66
Y=0
W=4
H=3
Antialias=1

[MeterMidLine1]
Meter=IMAGE
SolidColor=#Colour1#
X=66
Y=3
W=72
H=1
Antialias=1

[MeterTopLineMarker2]
Meter=IMAGE
SolidColor=#Colour1#
X=134
Y=0
W=4
H=3
Antialias=1

[MeterTopLine2]
Meter=IMAGE
SolidColor=#Colour1#
X=134
Y=0
W=66
H=1
Antialias=1

[MeterTopLineMarker3]
Meter=IMAGE
SolidColor=#Colour1#
X=200
Y=0
W=4
H=3
Antialias=1

[MeterMidLine2]
Meter=IMAGE
SolidColor=#Colour1#
X=200
Y=3
W=65
H=1
Antialias=1

[MeterLeftLineHigh]
Meter=IMAGE
SolidColor=#Colour1#
X=0
Y=0
W=1
H=120
Antialias=1

[MeterBarLeftLine]
Meter=IMAGE
SolidColor=#Colour1#
X=0
Y=R
W=3
H=30
Antialias=1

[MeterLeftLineLow]
Meter=IMAGE
SolidColor=#Colour1#
X=2
Y=R
W=1
H=15
Antialias=1

[MeterRightLineLineHigh]
Meter=IMAGE
SolidColor=#Colour1#
X=265
Y=4
W=1
H=117
Antialias=1

[MeterBarRightLineLine]
Meter=IMAGE
SolidColor=#Colour1#
X=262
Y=R
W=3
H=30
Antialias=1

[MeterRightLineLineLow]
Meter=IMAGE
SolidColor=#Colour1#
X=261
Y=R
W=1
H=14
Antialias=1

[MeterBarTopLine]
Meter=IMAGE
SolidColor=#Colour1#
X=3
Y=-4R
W=258
H=1
Antialias=1

[MeterBarTopLineMarker1]
Meter=IMAGE
SolidColor=#Colour1#
X=66
Y=r
W=4
H=3
Antialias=1

[MeterBarTopLineMarker2]
Meter=IMAGE
SolidColor=#Colour1#
X=134
Y=r
W=4
H=3
Antialias=1

[MeterBarTopLineMarker3]
Meter=IMAGE
SolidColor=#Colour1#
X=200
Y=r
W=4
H=3
Antialias=1

[MeterBarMidLine]
Meter=IMAGE
SolidColor=#Colour1#
X=3
Y=3r
W=258
H=1
Antialias=1