function EaseInQuart(measure, max)
    local x = measure / max
    return math.pow(x, 4)
end

function EaseInQuartColor(measure, max)
    return EaseInQuart(measure, max) * 255
end

function EaseInSine(measure)
    local x = measure / 100.0
    return 1 - math.cos((x * math.pi) / 2)
end

function EaseInSineColor(measure)
    return EaseInSine(measure) * 255
end

function Color(measure, max)
    local max = max or 100.0
    local r = EaseInQuartColor(measure, max)
    local g = 255 - r
    return r .. ',' .. g .. ',0,255' 
end

function Test(measure, max)
    local max = max or 100.0
    local r = EaseInQuartColor(measure, max)
    local g = 255 - r
    return measure
end