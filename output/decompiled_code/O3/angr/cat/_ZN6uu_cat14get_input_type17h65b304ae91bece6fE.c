long long uu_cat::get_input_type::h65b304ae91bece6f(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0xe4]
    char v1;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xd8]
    unsigned long long v3;  // [sp-0xd0]
    char v4;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xb8]
    unsigned long long v7;  // [sp-0xb0]
    void* v8;  // [sp-0xa8]
    char v9;  // [bp-0x90]

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h74d9ef0fe8636efb(a1, a2, "-src/uu/cat/src/cat.rs", 1))
    {
        a0->field_8 = 2;
    }
    else
    {
        std::fs::metadata::h640d219305c1f707(&v4, a1, a2);
        if (*((int *)&v4) == 2)
        {
            v3 = v5;
            std::io::error::repr_bitpacked::decode_repr::h4b0f39b41613c65d(&v1, v3);
            goto *((int *)(4274100 + v1 * 4)) + 4274100;
        }
        else
        {
            v0 = *((int *)&v9);
            switch ((v0 & 0xf000) - 0x1000 >> 12)
            {
            case 0:
                a0->field_8 = 6;
                break;
            case 1:
                a0->field_8 = 5;
                break;
            case 3:
                a0->field_8 = 0;
                break;
            case 5:
                a0->field_8 = 4;
                break;
            case 7:
                a0->field_8 = 1;
                break;
            case 9:
                a0->field_8 = 3;
                break;
            case 11:
                a0->field_8 = 7;
                break;
            default:
                v1 = &v0;
                v2 = _$LT$std..fs..FileType$u20$as$u20$core..fmt..Debug$GT$::fmt::h1f46686f72d55e02;
                v4 = &g_40b1c0;
                v5 = 1;
                v8 = 0;
                v6 = &v1;
                v7 = 1;
                return core::option::Option$LT$T$GT$::map_or_else::h24d68d39ebdd82bc(a0, &v4);
            }
        }
    }
    a0->field_0 = 9223372036854775814;
    return 9223372036854775814;
}
