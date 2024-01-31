S = input()

former = int(S[:2])
latter = int(S[2:])

is_former_mm = (1 <= former <= 12)
is_latter_mm = (1 <= latter <= 12)

ans = ""
if is_former_mm and is_latter_mm:
    ans = "AMBIGUOUS"
elif is_former_mm:
    ans = "MMYY"
elif is_latter_mm:
    ans = "YYMM"
else:
    ans = "NA"

print(ans)
