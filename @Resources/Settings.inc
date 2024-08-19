[Variables]

;Radius - default size 80 means the meter starts as a 160 x 160 pixels.  This variable is the key to the size of the whole skin.  If you want the smaller, reduce the figure or if you want them bigger by default increase it.
Radius=80

;The amount clock grows or shrinks when scrolling mouse
ScrollMouseIncrement=5

;The increase/deacrease in volume level per mouse wheel 'click'
VolumeStep=5

Accuracy=2
;Amount of decimals to be displayed in tooltip.

;DO NOT CHANGE THESE VARIABLES.
IncrementAngle=(1/32)
IncrementSpace=((2*PI)*(1/27))

;-----------------------------------------------------------------------------------------------
;LuaCalendar
;-----------------------------------------------------------------------------------------------

;Name of the Style Sheet
;Style=Default
Style=Dashboard

;-----------------------------------------------------------------------------------------------
;Colours - ColourX preceded by ; are ignored
;-----------------------------------------------------------------------------------------------

;Colour1
;Black
;Colour1=0,0,0,255
;Blue
;Colour1=102,153,255,255
;Green
;Colour1=51,255,0,255
;Yellow
Colour1=255,255,0,255
;Orange
;Colour1=225,164,84,255

;Colour2
;White
Colour2=255,255,255,255

;Colour3
;Red
Colour3=255,0,51,255

;-----------------------------------------------------------------------------------------------
;Fonts
;-----------------------------------------------------------------------------------------------

[StringStyle]
FontFace=Planer
FontSize=11
FontColor=#Colour1#
StringAlign=LEFT
Antialias=1
DynamicVariables=1

[StringStylePercentageMarkers]
FontFace=Planer
FontSize=(#Radius#*0.145)
FontColor=#Colour1#
StringAlign=CenterCenter
Antialias=1
DynamicVariables=1

[StringStylePlayer]
Fontface=Guifx v2 Transports
FontSize=(#Radius#*0.1)
FontColor=#Colour1#
Antialias=1
DynamicVariables=1

[LauncherStyle]
Fontface=Unicons
FontSize=24
Fontcolor=#Colour1#
Antialias=1

;-----------------------------------------------------------------------------------------------
;Rings
;-----------------------------------------------------------------------------------------------

[RingStyle]
H=(#Radius#*2.0)
W=(#Radius#*2.0)
StartAngle=1.5707963
RotationAngle=6.7123889
LineColor=#Colour1#
Solid=1
Antialias=1
Dynamicvariables=1
MouseScrollDownAction=[!SetVariable Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!UpdateMeter *][!UpdateMeasure *][!Redraw]
MouseScrollUpAction=[!SetVariable Radius "(#Radius#+#ScrollMouseIncrement#)"] [!WriteKeyValue Variables Radius "(#Radius#+#ScrollMouseIncrement#)"][!UpdateMeasure *][!UpdateMeter *][!Redraw]

[RingStyleLeftHigh]
H=(#Radius#*2.0)
W=(#Radius#*2.0)
StartAngle=1.5907963
RotationAngle=4.7123889
LineColor=#Colour1#
Solid=1
Antialias=1
Dynamicvariables=1
MouseScrollDownAction=[!SetVariable Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!UpdateMeter *][!UpdateMeasure *][!Redraw]
MouseScrollUpAction=[!SetVariable Radius "(#Radius#+#ScrollMouseIncrement#)"] [!WriteKeyValue Variables Radius "(#Radius#+#ScrollMouseIncrement#)"][!UpdateMeasure *][!UpdateMeter *][!Redraw]

[RingStyleLeftLow]
H=(#Radius#*2.0)
W=(#Radius#*2.0)
StartAngle=6.2831853
RotationAngle=4.7123889
LineColor=#Colour1#
Solid=1
Antialias=1
Dynamicvariables=1
MouseScrollDownAction=[!SetVariable Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!UpdateMeter *][!UpdateMeasure *][!Redraw]
MouseScrollUpAction=[!SetVariable Radius "(#Radius#+#ScrollMouseIncrement#)"] [!WriteKeyValue Variables Radius "(#Radius#+#ScrollMouseIncrement#)"][!UpdateMeasure *][!UpdateMeter *][!Redraw]

[RingStyleRight]
H=(#Radius#*2.0)
W=(#Radius#*2.0)
StartAngle=4.7123889
RotationAngle=3.1297932
LineColor=#Colour1#
Solid=1
Antialias=1
Dynamicvariables=1
MouseScrollDownAction=[!SetVariable Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Radius "(#Radius#-#ScrollMouseIncrement# < 20 ? 20 : #Radius#-#ScrollMouseIncrement#)"][!UpdateMeter *][!UpdateMeasure *][!Redraw]
MouseScrollUpAction=[!SetVariable Radius "(#Radius#+#ScrollMouseIncrement#)"] [!WriteKeyValue Variables Radius "(#Radius#+#ScrollMouseIncrement#)"][!UpdateMeasure *][!UpdateMeter *][!Redraw]

[PercentMarkerStyle]
H=(#Radius#*2.0)
W=(#Radius#*2.0)
LineWidth=(#Radius#*0.04)
LineColor=#Colour1#
Solid=0
Antialias=1
Dynamicvariables=1

[LEDStyle]
H=(#Radius#*2.0)
W=(#Radius#*2.0)
Solid=1
LineLength=(#Radius#*0.80)
LineStart=(#Radius#*0.92)
LineColor=#Colour1#
AntiAlias=1
DynamicVariables=1

;-----------------------------------------------------------------------------------------------
;===== Calendar functionality Options =====
;-----------------------------------------------------------------------------------------------

;Uncomment the following settings to use.
[Lua]
;Custom text for Weekday labels. Uses the following format: Sun|Mon|Tue|Wed|Thu|Fri|Sat
;DayLabels=

;Set to 1 to disable Easter which is built into the script becasue of the need for complicated formulas.
;DisableBuiltInEvents=1

;Set to 1 to hide week 6 if not included in the current month
;HideLastWeek=1

;Holidays File names
;Note: For Holiday file names, multiple sources can be used by uisng the pipe delimiter (|).
EventFile=#@#Calendars\Holidays.xml

;Single Folder Mode
;When set to 1, the first parameter in EventFile is the folder all subsiquent files are located are in.
;SingleFolder=1

;Custom Text formatting for Month Labels. See Readme for details.
;LabelText=

;Set to 1 to add a leading zero to any number below 10.
;LeadingZeroes=1

;Custom text for Month labels. Uses the following format: Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
;MonthLabels=

;Set to 1 to have the week start on Monday
StartOnMonday=1

;Set to 1 to pull month names from the Localization Settings of your computer. Overrides Custom Month Labels.
UseLocalMonths=1

;The format for the list of upcomming events. {day} and {desc} are valid variables.
;NextFormat={day}: {desc}

;-----------------------------------------------------------------------------------------------
;Utils
;-----------------------------------------------------------------------------------------------
[LuaUtils]
Measure=Script
ScriptFile=#@#Utils.lua