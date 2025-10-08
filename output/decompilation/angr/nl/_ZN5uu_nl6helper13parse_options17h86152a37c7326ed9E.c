long long uu_nl::helper::parse_options(struct_2 *a0, struct_0 *a1, unsigned long long a2)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8]
    void* v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    void* v8;  // [bp-0xb0]
    int v9;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v10;  // [bp-0x98]
    struct_1 *v11;  // [bp-0x88]
    char *v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long long v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    unsigned long long v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x40]
    unsigned long long v21;  // [bp-0x38]
    unsigned long long v22;  // [bp-0x30]
    struct_1 *v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    char v27;  // al
    unsigned long long v28[3];  // rax
    unsigned long long v29[3];  // rax
    unsigned long long v30[3];  // rax
    unsigned long long *v31;  // rax
    unsigned long long *v32;  // rax
    unsigned long long *v33;  // rax
    unsigned long long *v34;  // rax

    v6 = 0;
    v7 = 8;
    v8 = 0;
    a1->field_80 = a2.get_flag("no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 11);
    v0.try_get_one(a2, "section-delimiternumber-formatsrc/uu/nl/src/helper.rs", 17);
    v24 = "section-delimiternumber-formatsrc/uu/nl/src/helper.rs".unwrap(17, &v0);
    if (v24)
    {
        v11 = v24;
        if (v24->field_10 == 1)
        {
            v12 = &v11;
            v13 = <&T as core::fmt::Display>::fmt;
            v1 = &g_63a158;
            v2 = 2;
            v5 = 0;
            v3 = &v12;
            v4 = 1;
            v9.map_or_else(&v1);
            v0 = v9;
            v3 = v10;
        }
        else
        {
            v0.clone(v24);
        }
        core::ptr::drop_in_place<alloc::string::String>(&a1->field_30);
        a1->field_40 = v3;
        a1->field_30 = *((int128_t *)&v1);
    }
    v0.try_get_one(a2, "number-separator", 16);
    v25 = "number-separator".unwrap(16, &v0);
    if (v25)
        a1->padding_48.clone_from(v25);
    v0.try_get_one(a2, "number-formatsrc/uu/nl/src/helper.rs", 13);
    v26 = "number-formatsrc/uu/nl/src/helper.rs".unwrap(13, &v0);
    if (v26)
        v26.from();
    else
        v27 = 1;
    a1->field_81 = v27;
    v0.try_get_one(a2, "header-numbering", 16);
    v28 = "header-numbering".unwrap(16, &v0);
    if (v28)
    {
        v0.try_from(v28[1], v28[2]);
        if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        {
            core::ptr::drop_in_place<uu_nl::NumberingStyle>(a1->field_0, a1->field_8);
            a1->field_0 = v2;
            a1->field_8 = v3;
        }
        else if (v1 != 9223372036854775809)
        {
            v14 = v1;
            v15 = v2;
            v16 = v3;
            v6.push(&v14, &g_63a178);
        }
    }
    v0.try_get_one(a2, "body-numberingnumber-widthline-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 14);
    v29 = "body-numberingnumber-widthline-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs".unwrap(14, &v0);
    if (v29)
    {
        v0.try_from(v29[1], v29[2]);
        if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        {
            core::ptr::drop_in_place<uu_nl::NumberingStyle>(a1->field_10, a1->field_18);
            a1->field_10 = v2;
            a1->field_18 = v3;
        }
        else if (v1 != 9223372036854775809)
        {
            v17 = v1;
            v18 = v2;
            v19 = v3;
            v6.push(&v17, &g_63a190);
        }
    }
    v0.try_get_one(a2, &g_44e410, 16);
    v30 = g_44e410.unwrap(16, &v0);
    if (v30)
    {
        v0.try_from(v30[1], v30[2]);
        if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        {
            core::ptr::drop_in_place<uu_nl::NumberingStyle>(a1->field_20, a1->field_28);
            a1->field_20 = v2;
            a1->field_28 = v3;
        }
        else if (v1 != 9223372036854775809)
        {
            v20 = v1;
            v21 = v2;
            v22 = v3;
            v6.push(&v20, &g_63a1a8);
        }
    }
    v0.try_get_one(a2);
    v31 = v0.unwrap();
    if (v31)
    {
        if (*(v31))
        {
            a1->field_78 = *(v31);
        }
        else
        {
            v0.to_vec(&g_453cc2, 71);
            v10 = v3;
            memcpy(&v9, &v1, 16);
            v6.push(&v9, &g_63a1c0);
        }
    }
    v0.try_get_one(a2);
    v32 = v0.unwrap();
    if (v32)
    {
        if (*(v32))
        {
            a1->field_70 = *(v32);
        }
        else
        {
            v0.to_vec(&g_453d09, 74);
            v10 = v3;
            memcpy(&v9, &v1, 16);
            v6.push(&v9, &g_63a1d8);
        }
    }
    v0.try_get_one(a2, "line-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 14);
    v33 = "line-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs".unwrap(14, &v0);
    if (v33)
        a1->field_68 = *(v33);
    v0.try_get_one(a2, "starting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 20);
    v34 = "starting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs".unwrap(20, &v0);
    if (v34)
        a1->field_60 = *(v34);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v6);
    return a0;
}
