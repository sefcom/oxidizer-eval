long long uu_dd::progress::ProgUpdate::write_prog_line(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    void* v0;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x170]
    void* v2;  // [sp-0x168], Other Possible Types: char *
    unsigned int v3;  // [sp-0x160], Other Possible Types: unsigned long long
    char v4;  // [bp-0x15c]
    void* v5;  // [sp-0x158]
    char *v6;  // [sp-0x148], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [sp-0x140]
    char *v8;  // [sp-0x138]
    unsigned long long v9;  // [sp-0x130]
    char *v10;  // [sp-0x128]
    unsigned long long v11;  // [sp-0x120]
    char *v12;  // [sp-0x118]
    unsigned long long v13;  // [sp-0x110]
    char *v14;  // [sp-0x108]
    unsigned long long v15;  // [sp-0x100]
    char *v16;  // [sp-0xf8]
    unsigned long long v17;  // [sp-0xf0]
    char *v18;  // [bp-0xe8]
    unsigned long long v19;  // [bp-0xe0]
    void* v20;  // [bp-0xd0]
    unsigned long long v21;  // [bp-0xc8]
    void* v22;  // [bp-0xc0]
    unsigned long v23;  // [bp-0xb8]
    unsigned long v24;  // [bp-0xb0]
    unsigned long v25;  // [bp-0xa8]
    unsigned long long v26;  // [bp-0xa0]
    unsigned long v27;  // [bp-0x98]
    unsigned long v28;  // [bp-0x90]
    unsigned long long v29;  // [bp-0x88]
    unsigned long long v30;  // [bp-0x80]
    char v31;  // [bp-0x78], Other Possible Types: unsigned long long
    char v32;  // [bp-0x70]
    char v33;  // [bp-0x60], Other Possible Types: unsigned long long
    char v34;  // [bp-0x58]
    char v35;  // [bp-0x48], Other Possible Types: unsigned long long
    char v36;  // [bp-0x40]
    unsigned long long v37;  // [bp-0x28]
    unsigned long long v38;  // [bp-0x20]
    unsigned long long v40;  // r13
    unsigned long long v41;  // r12
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // r8
    unsigned long long v45;  // r9
    unsigned long long v48;  // rax
    void* v49;  // rbx
    unsigned long long v50;  // rax
    void* v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax

    v38 = v40;
    v37 = v41;
    v23 = a0->field_30;
    v24 = a0->field_38;
    uu_dd::numbers::to_magnitude_and_suffix(&v31, v23, v24, 1);
    uu_dd::numbers::to_magnitude_and_suffix(&v33, v23, v24, 0);
    v42 = (a0->field_8 * 1125899907 >> 50) + a0->field_0 * 1000.max(a0->field_0 / 18446744073709552 + (((a0->field_8 * 1125899907 >> 50) + a0->field_0 * 1000 <= a0->field_8 * 1125899907 >> 50 ? 1 : 0) & 1));
    if (!v42 && !v43)
        core::panicking::panic_const::panic_const_div_by_zero(&g_53db00); /* do not return */
    uu_dd::numbers::to_magnitude_and_suffix(&v35, __udivti3(v23, v24, v42, v43, v44, v45) * 1000, __udivti3(v23, v24, v42, v43, v44, v45) / 18446744073709552 + v43 * 1000, 1);
    *((int *)&v25) = (!(a2 & 255) ? 1 : "\r+ records in\n records out\nfailed to spawn thread: 'standard input': cannot skip: Invalid argument\n'standard input': cannot skip to specified offset\nsrc/uu/dd/src/dd.rs");
    v26 = a2;
    *((int *)&v27) = ((char)a2 ? 1 : "\n\r+ records in\n records out\nfailed to spawn thread: 'standard input': cannot skip: Invalid argument\n'standard input': cannot skip to specified offset\nsrc/uu/dd/src/dd.rs");
    v28 = (char)v26 ^ 1;
    v20 = 0;
    v21 = 1;
    v22 = 0;
    v4 = 2;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v6.from();
    v48 = (unsigned long long)v0.fmt(&v20, &v6);
    if (v48)
    {
        v49 = v48.from();
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v6, v7);
    }
    else
    {
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v6, v7);
        core::str::converts::from_utf8(&v6, v21, 0);
        v29 = v6.unwrap();
        v30 = v43;
        if (v23 == 1 && !v24)
        {
            v6 = &v25;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = &v23;
            v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v10 = &v29;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v35;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &v27;
            v15 = <&T as core::fmt::Display>::fmt;
            v0 = &g_53d990;
            v1 = 5;
            v5 = 0;
            v2 = &v6;
            v3 = 5;
            v50 = a1.write_fmt(&v0);
            if (!v50)
                goto LABEL_48ed53;
            v51 = v50.from();
            goto LABEL_48ed4b;
        }
        if ((char)_ccall(2, 16, v24, (unsigned long long)(char)(v23 < 1000), (unsigned long long)(char)(v23 < 1000)))
        {
            v6 = &v25;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = &v23;
            v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v10 = &v29;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v35;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &v27;
            v15 = <&T as core::fmt::Display>::fmt;
            v0 = &g_53d9e0;
            v1 = 5;
            v5 = 0;
            v2 = &v6;
            v3 = 5;
            v52 = a1.write_fmt(&v0);
            if (!v52)
                goto LABEL_48ed53;
            v51 = v52.from();
            goto LABEL_48ed4b;
        }
        if ((char)_ccall(2, 16, v24, (unsigned long long)(char)(v23 < 0x400), (unsigned long long)(char)(v23 < 0x400)))
        {
            v6 = &v25;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = &v23;
            v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v10 = &v31;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v12 = &v29;
            v13 = <&T as core::fmt::Display>::fmt;
            v14 = &v35;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v16 = &v27;
            v17 = <&T as core::fmt::Display>::fmt;
            v0 = &g_53da30;
            v1 = 6;
            v5 = 0;
            v2 = &v6;
            v3 = 6;
            v53 = a1.write_fmt(&v0);
            if (!v53)
                goto LABEL_48ed53;
            v51 = v53.from();
            goto LABEL_48ed4b;
        }
        else
        {
            v6 = &v25;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = &v23;
            v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v10 = &v31;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v12 = &v33;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &v29;
            v15 = <&T as core::fmt::Display>::fmt;
            v16 = &v35;
            v17 = <alloc::string::String as core::fmt::Display>::fmt;
            v18 = &v27;
            v19 = <&T as core::fmt::Display>::fmt;
            v0 = &g_53da90;
            v1 = 7;
            v5 = 0;
            v2 = &v6;
            v3 = 7;
            v54 = a1.write_fmt(&v0);
            if (v54)
            {
                v51 = v54.from();
LABEL_48ed4b:
                v49 = v51;
            }
            else
            {
LABEL_48ed53:
                v49 = 0;
            }
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v20, v21);
    core::ptr::drop_in_place<alloc::string::String>(v35, *((long long *)&v36));
    core::ptr::drop_in_place<alloc::string::String>(v33, *((long long *)&v34));
    core::ptr::drop_in_place<alloc::string::String>(v31, *((long long *)&v32));
    return v49;
}
