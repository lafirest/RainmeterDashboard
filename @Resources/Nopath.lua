PROPERTIES ={

}
function Initialize()
   MeasureImageName = SKIN:GetMeasure('Random')
end

function Update()
   local FullImageName = MeasureImageName:GetStringValue()
   local Path, ImageName, Extension = string.match(FullImageName, '(.-)([^\\]-([^%.]+))$')
   
   SKIN:Bang('!SetOption', 'MeterImageName', 'Text', ImageName)
   return ImageName
end