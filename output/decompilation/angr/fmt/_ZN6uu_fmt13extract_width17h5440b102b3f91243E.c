long long uu_fmt::extract_width(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned int
    char v1;  // [bp-0x40]
    unsigned long long v3[3];  // rax
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8[3];  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx

    v0.try_get_one(a1, "widthsrc/uu/fmt/src/fmt.rs", 5);
    v3 = "widthsrc/uu/fmt/src/fmt.rs".unwrap(5, &v0);
    if (v3)
    {
        ::0x4a0cb0::core::num::<impl u64>::from_str_radix(&v0, v3[1], v3[2]);
        if (v0)
        {
            v1.clone(v3);
            v0 = 2;
            a0->field_8 = v0.from();
            a0->field_10 = v4;
            v5 = 1;
        }
        else
        {
            v6 = *((long long *)&v1);
            a0->field_8 = 1;
            a0->field_10 = v6;
LABEL_4a2c1f:
            v5 = 0;
        }
        a0->field_0 = v5;
        return v5;
    }
    if (v7 == 1 && a1.index_of("fileswidthsrc/uu/fmt/src/fmt.rs", 5) == 1)
    {
        v0.try_get_one(a1, "fileswidthsrc/uu/fmt/src/fmt.rs", 5);
        v8 = "fileswidthsrc/uu/fmt/src/fmt.rs".unwrap(5, &v0);
        if (!v8)
            core::option::unwrap_failed(&g_583b48); /* do not return */
        v0 = 0;
        v9 = ::0x4a1b00::core::char::methods::encode_utf8_raw(45, &v0).strip_prefix_of(v7, v8[1], v8[2]);
        if (!v9)
            goto LABEL_4a2c03;
        ::0x4a0cb0::core::num::<impl u64>::from_str_radix(&v0, v9, v7);
        if ((char)v0)
        {
            v10 = 0;
        }
        else
        {
            v11 = *((long long *)&v1);
            v10 = 1;
        }
        a0->field_8 = v10;
        a0->field_10 = v11;
        goto LABEL_4a2c1f;
    }
    else
    {
LABEL_4a2c03:
        a0->field_8 = 0;
        goto LABEL_4a2c1f;
    }
}
