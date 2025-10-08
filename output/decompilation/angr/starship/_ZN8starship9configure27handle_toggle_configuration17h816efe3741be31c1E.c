long long starship::configure::handle_toggle_configuration(struct_3 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x270]
    unsigned long long v1;  // [bp-0x260]
    struct_6 *v2;  // [bp-0x259]
    unsigned long long v3;  // [bp-0x250]
    unsigned long long v4;  // [bp-0x248]
    unsigned long long v5;  // [bp-0x240]
    unsigned long long v7;  // [bp-0x238]
    char *v8;  // [bp-0x230]
    unsigned long long v10;  // [bp-0x228]
    void* v11;  // [bp-0x220]
    char *v13;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x188]
    unsigned long long v15;  // [bp-0x170]
    unsigned long long v16;  // [bp-0x158]
    char v17;  // [bp-0x140]
    char v18;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v19;  // [bp-0xd8]
    int v20;  // [bp-0xd7]
    char v21;  // [bp-0xd0]
    void* v23;  // rax
    struct_6 *v24;  // rcx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v28;  // rcx
    struct_6 *v29;  // r12
    unsigned long long v30;  // 4096
    unsigned long long v31;  // 4096
    void* v33;  // rax
    struct_6 *v34;  // rdx
    char v35;  // cl
    unsigned long long v36;  // rdx
    uint128_t v38[3];  // r15
    int v39;  // xmm0
    int v40;  // xmm1
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx

    v3 = a2;
    v4 = a3;
    v0 = a4;
    if (!(a5 & a3))
        return a0.to_vec("Empty table keys are not supportedThis command can only index into TOML tables# Warning: This config does not include keys that have an unset value\n\n# $all is shorthand for # $custom (excluding any modules already listed in `format`) is shorthand for ", 34);
    v23 = a1.as_table_mut().get_mut(a2, a3, a3);
    if (!v23)
    {
        v13 = &v3;
        v14 = <&T as core::fmt::Display>::fmt;
        v5 = &g_11f32b8;
        v7 = 2;
        v11 = 0;
        v8 = &v13;
        v10 = 1;
        v18.map_or_else(0, a2, &v5);
        v23 = *((long long *)&v19);
        if (v18 != 0x8000000000000000)
        {
            v24 = *((long long *)&v21);
            a0->field_0 = v18;
            a0->field_8 = v23;
            a0->field_9 = v24;
            return v18;
        }
    }
    v25 = *((long long *)v23) - 8;
    if (v25 < 4)
        v26 = v25;
    else
        v26 = 1;
    v28 = v26;
    if (v28 == 2)
    {
        v23 += 8;
        v29 = &g_11f2aa0.padding_0[0];
        v30 = a4;
        v31 = a5;
    }
    else if (v28 == 1 && v25 < -6)
    {
        v29 = &g_11f29e0.padding_0[0];
        v30 = a4;
        v31 = a5;
    }
    else
    {
        v13 = &v0;
        v14 = <&T as core::fmt::Display>::fmt;
        v5 = &g_11f32d8;
        v7 = 2;
        v11 = 0;
        v8 = &v13;
        v10 = 1;
        v18.map_or_else(0, a2, &v5);
        v23 = *((long long *)&v19);
        v29 = *((long long *)&v21);
        if (v18 != 0x8000000000000000)
        {
            a0->field_0 = v18;
            a0->field_8 = v23;
            a0->field_9 = v29;
            return v18;
        }
        v30 = v0;
        v31 = a5;
    }
    v33 = v29->field_50(v23, v30, v31);
    if (!v33)
    {
        v13 = &v0;
        v14 = <&T as core::fmt::Display>::fmt;
        v5 = &g_11f32f8;
        v7 = 2;
        v11 = 0;
        v8 = &v13;
        v10 = 1;
        v18.map_or_else(0, a2, &v5);
        v33 = *((long long *)&v19);
        if (v18 != 0x8000000000000000)
        {
            v34 = *((long long *)&v21);
            a0->field_0 = v18;
            a0->field_8 = v33;
            a0->field_9 = v34;
            return v33;
        }
    }
    if (*((int *)v33) == 5)
    {
        v35 = (char)v33[80];
        v36 = 18446744073709551613;
    }
    else
    {
        v13 = &v0;
        v14 = <&T as core::fmt::Display>::fmt;
        v5 = &g_11f3318;
        v7 = 2;
        v11 = 0;
        v8 = &v13;
        v10 = 1;
        v18.map_or_else(0, a2, &v5);
        v35 = v19;
        v1 = (long long)v20;
        v2 = *((long long *)&v21);
        if (v18 != 0x8000000000000000)
        {
            v42 = v1;
            a0->field_9 = v2;
            *((unsigned long long *)((char *)&a0->field_8 + 1)) = v42;
            a0->field_0 = v18;
            *((char *)&a0->field_8) = v19;
            return v18;
        }
        v36 = *((long long *)v33) - 8;
    }
    v13 = 5;
    v14 = 9223372036854775811;
    v15 = 9223372036854775811;
    v16 = 9223372036854775811;
    v17 = ~(v35) & 1;
    if (v36 < 4)
        core::option::unwrap_failed(&g_11f3338); /* do not return */
    v5.clone(v33.decor(), a2);
    if (v13 - 8 < 4)
        core::option::unwrap_failed(&g_11f3350); /* do not return */
    v38 = v13.decor();
    core::ptr::drop_in_place<toml_edit::repr::Decor>(v38);
    v39 = *((int128_t *)&v5);
    v40 = *((int128_t *)&v8);
    v38[2] = *((int128_t *)&v11);
    *((void*)&v38[1]) = v40;
    *((void*)&v38[0]) = v39;
    memcpy(&v5, &v13, 176);
    v29->field_78(&v18, v23, v0, a5, &v5);
    v41 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<toml_edit::item::Item>>(&v18);
    a0->field_0 = 0x8000000000000000;
    return v41;
}
