long long uu_sort::numeric_str_cmp::numeric_str_cmp::h525b5c98b6b0704a(struct_3 *a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long v2;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x28]
    struct_0 *v5;  // rax
    struct_2 *v6;  // r9
    char v7;  // r15b
    char v8;  // cl
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    struct_0 *v13;  // rax
    char v15;  // al
    struct_0 *v16;  // rax
    unsigned int v17;  // ebp
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    struct_0 *v20;  // rax
    char v21;  // al

    v5 = a0->field_10;
    v6 = a1->field_10;
    v7 = v5->field_8;
    v8 = v6->field_8;
    if (v7 != v8)
    {
        v13 = -(v7 < v8) | -0x100 | (char)-(v7 < v8) | 1;
        return v13;
    }
    v10 = a0->field_8;
    v11 = a1->field_0;
    v12 = a1->field_8;
    if (!v12 || !v10 || !((a1 = v6->field_0, v5->field_0 != a1)))
    {
        v0 = a0->field_0;
        v1 = v10 + v0;
        v2 = v11;
        v3 = v12 + v11;
        do
        {
            v17 = ::0x55ddb0::core::iter::traits::iterator::Iterator::try_fold::h5dc447fc794c1e5d(&v0, a1, v12 + v11);
            v20 = ::0x55ddb0::core::iter::traits::iterator::Iterator::try_fold::h5dc447fc794c1e5d(&v2, v18, v19);
            if (v17 == 0x110000)
            {
                switch ((unsigned int)v20)
                {
                case 48:
                    v20 = ::0x55f9e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0b7269eb4ca3906d((unsigned int)::0x55dd70::core::iter::traits::iterator::Iterator::try_fold::h3ee4e536ce6d4a7f(&v2, v18, v19));
                    if (!(v20 & 255 & 255))
                        goto LABEL_560888;
                    else
                        goto LABEL_560884;
                case 1114112:
LABEL_560884:
                    return 0;
                default:
LABEL_560888:
                    v13 = v20 | -0x100 | 255;
                    if (!v7)
                        return v13;
                    return v13;
                }
            }
            if ((unsigned int)v20 == 0x110000)
            {
                if (v17 == 48)
                {
                    v20 = ::0x55f9e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0b7269eb4ca3906d((unsigned int)::0x55ddf0::core::iter::traits::iterator::Iterator::try_fold::h6571f758cf6e6316(&v0, v18, v19));
                    if (!(v20 & 255 & 255))
                        goto LABEL_560863;
                    else
                        goto LABEL_560884;
                }
LABEL_560863:
                v13 = v20 | -0x100 | 1;
                if (!v7)
                    return v13;
                return v13;
            }
        } while (v17 == (unsigned int)v20);
        v16 = -(v17 < (unsigned int)v20);
    }
    else
    {
        v15 = -(v5->field_0 < a1);
        v16 = v5 | -0x100 | v15;
    }
    v21 = v15 | 1;
    v13 = v16 | -0x100 | v21;
    if (v7)
    {
        return v13;
    }
    else if (v21 == 255)
    {
        v13 = v13 | -0x100 | 1;
        return v13;
    }
    else
    {
        v13 = v13 | -0x100 | 255;
        return v13;
    }
}
