#!/usr/bin/env lua
local function adder(x)
  return function (y) return x + y end
end

local a1 = adder(9)
local a2 = adder(36)

print(a1(16)) --> 25
print(a2(64)) --> 100
