#!/usr/bin/env python

PROGRAM = "./problem_cf"
input_data = "10 6\n"
expected_output = "2\n"

input_data = [
  "1 3\n", "43 19\n", "345 678\n",
  "0 0\n", "1 125\n"
]
expected_output = [
  "0 3\n", "2 3 1 4\n", "0 1 1 27 1 3\n",
  "", "0 125\n"
]




from subprocess import run


i = 0
while i < len(input_data):
  result = run([PROGRAM],
                          input=input_data[i],
                          text=True,
                          capture_output=True)

  if result.stdout != expected_output[i]:
    print(f"Test {i} failed: Expected '{expected_output[i].strip()}"
            f" but got '{result.stdout.strip()}'")
    exit(0)

  i += 1

print(f"All tests passed! ({i} total tests)")

