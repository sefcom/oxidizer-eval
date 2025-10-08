long long fish::wutil::wcstoi::fish_wcstol_radix(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    void* v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x64]
    unsigned int v2;  // [bp-0x60]
    char v3;  // [bp-0x5c]
    char v4;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x48]
    uint128_t v7;  // [bp-0x40]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    char v11;  // bpl
    unsigned long long v12;  // r15
    unsigned long long v13;  // r15
    unsigned int v14;  // eax
    char v15;  // al

    if (!a3)
    {
        v4 = &g_14c1470;
        v5 = 1;
        v6 = 8;
        v7 = 0;
        core::panicking::panic_fmt(&v4, &g_14c1480); /* do not return */
    }
    v3 = 0;
    v1 = 1;
    v2 = a3;
    v0 = 0;
    fish::wutil::wcstoi::wcstoi_impl(&v4, a1, a1 + a2 * 4, &v1, &v0);
    if (v4 == 1)
    {
        goto LABEL_12ecf0b;
    }
    else
    {
        v9 = a1.slice_from(a2, v0);
        if (v10)
        {
            v11 = 2;
            while (true)
            {
                v13 = v12;
                v14 = v9.char_at(v13, 0);
                if (v14 - 9 >= 5 && v14 != 32 && (v14 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v14)))
                    break;
                v9 = v9.slice_from(v13, 1);
                v12 = v10;
                if (!v12)
                    goto LABEL_12ecf8c;
            }
LABEL_12ecf0b:
            a0->field_1 = v11;
            v15 = 1;
        }
        else
        {
LABEL_12ecf8c:
            a0->field_8 = v5;
        }
    }
    a0->field_0 = v15;
    return a0;
}
