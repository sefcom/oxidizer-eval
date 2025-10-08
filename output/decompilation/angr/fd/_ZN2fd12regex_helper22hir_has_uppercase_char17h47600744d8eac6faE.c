long long fd::regex_helper::hir_has_uppercase_char(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x18]
    unsigned long v6;  // r8
    struct_0 *v7;  // rsi
    unsigned long v8;  // rbx
    char v9;  // al

    while (true)
    {
        v6 = (char *)&a0->field_0->field_0 + 2;
        if (8 <= v6)
            v6 = 2;
        switch (v6)
        {
        case 1:
            v8 = a0->field_8;
            core::str::converts::from_utf8(&(char)v0, v8, a0->field_10);
            if (((char)v0 & 1))
            {
                v3 = v8;
                v4 = a0->field_10 + v8;
                return v3.any();
            }
            v3 = v1;
            v4 = v2 + v1;
            v9 = v3.try_fold();
            break;
        case 2:
            if (((char)a0->field_0 & 1))
            {
                v0 = a0->field_10;
                v1 = a0->field_10 + a0->field_18 * 2;
                v9 = v0.try_fold();
                break;
            }
            else
            {
                v0 = a0->field_10;
                v1 = a0->field_10 + a0->field_18 * 8;
                v9 = v0.try_fold();
                break;
            }
        case 6: case 7:
            v0 = a0->field_10;
            v1 = a0->field_18 * 48 + a0->field_10;
            return v0.any();
        case 5:
            v7 = 8;
        case 4:
            a0 = *((long long *)(a0 + v7));
            continue;
        default:
            return 0;
        }
    }
    return v9.eq();
}
