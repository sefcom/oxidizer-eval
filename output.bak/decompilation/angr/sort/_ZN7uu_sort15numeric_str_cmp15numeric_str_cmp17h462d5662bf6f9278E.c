long long uu_sort::numeric_str_cmp::numeric_str_cmp::h462d5662bf6f9278(struct_1 *a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long v2;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x28]
    char v7;  // r15b
    char v8;  // cl
    unsigned int v14;  // ebp
    unsigned int v15;  // eax

    v7 = a0->field_10->field_8;
    v8 = a1->field_10->field_8;
    if (v7 != v8)
        return -(v7 < v8) | -0x100 | (char)-(v7 < v8) | 1;
    v0 = a0->field_0;
    v1 = a0->field_8 + v0;
    v2 = a1->field_0;
    v3 = a1->field_8 + v2;
    do
    {
        v14 = ::0x56e8f0::core::iter::traits::iterator::Iterator::try_fold::h31e394c0050656fe(&v0);
        v15 = ::0x56e8f0::core::iter::traits::iterator::Iterator::try_fold::h31e394c0050656fe(&v2);
        if (v14 == 0x110000)
        {
            if (v15 != 48)
            {
                if (!(v15 == 0x110000))
                    goto LABEL_570ebb;
            }
            else
            {
                if (!::0x570440::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h197dcbabd20ebd5c(::0x56e8b0::core::iter::traits::iterator::Iterator::try_fold::h06b3cdfc65d0e745(&v2)))
LABEL_570ebb:
            }
        }
        if (v15 == 0x110000 && v14 == 48)
            ::0x570440::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h197dcbabd20ebd5c(::0x56e930::core::iter::traits::iterator::Iterator::try_fold::h38cf5fff87cdbaf2(&v0));
    } while (v14 == v15);
}
