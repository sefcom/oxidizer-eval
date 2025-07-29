long long uu_dircolors::append_entry(unsigned long long *a0, unsigned long long a1, char *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned int a7)
{
    char *v0;  // [sp-0x200], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1f8]
    char *v2;  // [sp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x1e8]
    char *v4;  // [sp-0x1e0]
    unsigned long long v5;  // [sp-0x1d8]
    char v6;  // [bp-0x1d0]
    unsigned long long v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c0]
    struct struct_0 v9[8];  // [bp-0x1b0]
    unsigned int v10;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    char *v13;  // [sp-0x198], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x190]
    void* v15;  // [sp-0x188]
    unsigned long long v16;  // [sp-0x180]
    char v17;  // [sp-0x178]
    unsigned long long v18;  // [sp-0x170]
    unsigned long long v19;  // [sp-0x160]
    unsigned long long v20;  // [sp-0x150]
    unsigned long long v21;  // [sp-0x148]
    char v22;  // [sp-0x140]
    unsigned long long v23;  // [sp-0x138]
    unsigned long long v24;  // [sp-0x128]
    void* v25;  // [sp-0x118]
    unsigned long long v26;  // [sp-0x110]
    char v27;  // [sp-0x108]
    char v28;  // [bp-0xf8]
    char *v29;  // [bp-0xe8]
    unsigned long long v30;  // [sp-0xe0]
    char *v31;  // [sp-0xd8]
    unsigned long long v32;  // [sp-0xd0]
    unsigned long long v33;  // [bp-0xc8]
    unsigned long long v34;  // [bp-0xc0]
    unsigned long long v35;  // [bp-0xb8]
    unsigned long long v36;  // [bp-0xb0]
    unsigned long v37;  // [bp-0xa8]
    unsigned long long v38;  // [bp-0xa0]
    char v39;  // [bp-0x98]
    unsigned long long v40;  // [bp-0x88]
    char v41;  // [bp-0x80]
    unsigned long long v42;  // [bp-0x70]
    char v43;  // [bp-0x60]
    char v44;  // [bp-0x48]
    unsigned long long v45;  // [bp-0x18]
    unsigned long long v46;  // r14
    unsigned long long v47;  // rdx
    struct_1 *v48;  // r14
    unsigned long long v49;  // rax
    char *v50;  // rdi
    char *v51;  // rsi

    v45 = v46;
    v33 = a3;
    v34 = a4;
    v35 = a5;
    v36 = a6;
    memcpy(&v28, &a7, 16);
    if ((char)a3.is_prefix_of(a4))
    {
        v10 = 0;
        if ((char)core::slice::<impl [T]>::starts_with(a3, a4, ::0x4ae1d0::core::char::methods::encode_utf8_raw(46, &v10), v47))
        {
            v0 = &v33;
            v1 = <&T as core::fmt::Display>::fmt;
            v10 = &g_589fa0;
            v12 = 1;
            v15 = 0;
            v13 = &v0;
            v14 = 1;
            v6.map_or_else(&v10);
            if (*(a2) == 2)
                goto LABEL_4b0137;
LABEL_4b0039:
            v0 = &v6;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &v28;
            v3 = <&T as core::fmt::Display>::fmt;
            v10 = &g_589fb0;
            v12 = 3;
            v15 = 0;
            v13 = &v0;
            v14 = 2;
            v48 = &v44;
            v44.map_or_else(&v10);
        }
        else
        {
            v6.to_vec(a3, a4);
            if (!(*(a2) == 2))
                goto LABEL_4b0039;
LABEL_4b0137:
            v29 = &v28;
            v30 = <&T as core::fmt::Display>::fmt;
            v31 = &v6;
            v32 = <alloc::string::String as core::fmt::Display>::fmt;
            v10 = 2;
            v13 = 2;
            v15 = 0;
            v16 = 32;
            v17 = 3;
            v18 = 2;
            v19 = 2;
            v20 = 1;
            v21 = 32;
            v22 = 3;
            v23 = 2;
            v24 = 2;
            v25 = 0;
            v26 = 32;
            v27 = 3;
            v0 = &g_589fe0;
            v1 = 4;
            v4 = &v10;
            v5 = 3;
            v2 = &v29;
            v3 = 2;
            v48 = &v43;
            v43.map_or_else(&v0);
        }
        *((char [16])&v11) = v48->field_0;
        v13 = v48->field_10;
        a1.append_elements(v12, v48->field_10, &g_589d88);
        *(a0) = 0x8000000000000000;
        ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(&v10);
    }
    else
    {
        if ((char)a5.equal(a6, "optionscolor", 7) || (char)a5.equal(a6, "color", 5) || (char)a5.equal(a6, "eightbitESTRPIPE", 8))
        {
            *(a0) = 0x8000000000000000;
            return a0;
        }
        v37 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4de27f2b56271631E;
        v38 = g_58d030 * 32 + _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4de27f2b56271631E;
        v49 = v37.find(&v35);
        if (!v49)
        {
            (char)v0.to_vec(&g_4335a2, 7);
            (char)v10.to_vec(a3, a4);
            v42 = v13;
            memcpy(&v41, &v10, 16);
            memcpy(&v39, &(char)v0, 16);
            v40 = v2;
            (char)v10.from_iter(&v39);
            uucore::mods::locale::get_message_with_args(a0, "dircolors-error-unrecognized-keyword\\:# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version", 36, &(char)v10);
            return a0;
        }
        *((unsigned long long *)&v9[0]) = v49 + 16;
        if (*(a2) == 2)
        {
            v29 = &v28;
            v30 = <&T as core::fmt::Display>::fmt;
            v31 = &v9[0].field_0;
            v32 = <&T as core::fmt::Display>::fmt;
            v10 = 2;
            v13 = 2;
            v15 = 0;
            v16 = 32;
            v17 = 3;
            v18 = 2;
            v19 = 2;
            v20 = 1;
            v21 = 32;
            v22 = 3;
            v23 = 2;
            v24 = 2;
            v25 = 0;
            v26 = 32;
            v27 = 3;
            v0 = &g_589fe0;
            v1 = 4;
            v4 = &v10;
            v5 = 3;
            v2 = &v29;
            v3 = 2;
            v50 = &v6;
            v51 = &v0;
        }
        else
        {
            v0 = &v9[0].field_0;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &v28;
            v3 = <&T as core::fmt::Display>::fmt;
            v10 = &g_589fb0;
            v12 = 3;
            v15 = 0;
            v13 = &v0;
            v14 = 2;
            v50 = &v6;
            v51 = &v10;
        }
        v50.map_or_else(v51);
        a1.append_elements(v7, v8, &g_589d88);
        *(a0) = 0x8000000000000000;
    }
    ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(&v6);
    return a0;
}
