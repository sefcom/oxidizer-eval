long long uu_timeout::Config::from(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x101]
    unsigned int v1;  // [bp-0x100]
    unsigned int v2;  // [bp-0xfc]
    int v3;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0xf0]
    int v5;  // [bp-0xe8], Other Possible Types: char *, unsigned long long
    unsigned int v6;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v7;  // [bp-0xd8], Other Possible Types: void*
    char v8;  // [bp-0xc8]
    char v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    char v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0xa0]
    unsigned int v14;  // [bp-0x98]
    int v15;  // [bp-0x90]
    char v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x68]
    char *v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    void* v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    char v24;  // [bp-0x38]
    unsigned long long v26[3];  // rax
    unsigned long long v27[3];  // r12
    unsigned long long v28[3];  // rax
    unsigned long long v29[3];  // rax
    char v30;  // al
    char v31;  // al
    int v32;  // xmm0
    unsigned long v33;  // rdx

    v3.try_get_one(a1, "signalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 6);
    v26 = "signalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs".unwrap(6, &v3);
    if (v26)
    {
        v27 = v26;
        if (!((char)uucore::features::signals::signal_by_name_or_value(v26[1], v26[2]) & 1))
        {
            v21 = 0;
            v22 = v27[1];
            v23 = v27[2];
            v24 = 1;
            v19 = &v21;
            v20 = <os_display::Quoted as core::fmt::Display>::fmt;
            v3 = &g_5126c0;
            v4 = 2;
            v7 = 0;
            v5 = &v19;
            v6 = 1;
            v9.map_or_else(&v3);
            v14 = 125;
            *((double *)&a0->field_8) = v9.new();
            a0->field_10 = &g_512700;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
    }
    else if (!((char)uucore::features::signals::signal_by_name_or_value("TERMtruemaincharSTOPTTIN", 4) & 1))
    {
        core::option::unwrap_failed(&g_512768); /* do not return */
    }
    v3.try_get_one(a1, "kill-aftersignalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 10);
    v28 = "kill-aftersignalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs".unwrap(10, &v3);
    if (v28)
    {
        uucore::features::parser::parse_time::from_str(&(char)v10, v28[1], v28[2], 1);
        if (v10 != 0x8000000000000000)
        {
            v5 = v13;
            memcpy(&v3, &(char)v10, 16);
            v6 = 125;
            *((double *)&a0->field_8) = v3.new();
            a0->field_10 = &g_512700;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v17 = v11;
        v1 = *((int *)&v12);
    }
    else
    {
        v1 = 0x3b9aca00;
    }
    v3.try_get_one(a1, "duration\n       ", 8);
    v29 = "duration\n       ".unwrap(8, &v3);
    if (!v29)
        core::option::unwrap_failed(&g_512780); /* do not return */
    uucore::features::parser::parse_time::from_str(&(char)v10, v29[1], v29[2], 1);
    if (v10 != 0x8000000000000000)
    {
        v5 = v13;
        memcpy(&v3, &(char)v10, 16);
        v6 = 125;
        *((double *)&a0->field_8) = v3.new();
        a0->field_10 = &g_512700;
        a0->field_0 = 0x8000000000000000;
        return a0;
    }
    v18 = v11;
    v2 = v13;
    v0 = a1.get_flag("preserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 15);
    v30 = a1.get_flag("foregroundkill-aftersignalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 10);
    v31 = a1.get_flag("verbosecommandsrc/uu/timeout/src/timeout.rs", 7);
    v3.try_get_many(a1);
    (char)v10.unwrap(&v3);
    if (!v10)
        core::option::unwrap_failed(&g_512798); /* do not return */
    v32 = *((int128_t *)&v10);
    memcpy(&v8, &v16, 16);
    v7 = v15;
    *((int128_t *)&v5) = *((int128_t *)&v13);
    v3 = v32;
    a0.collect(&v3);
    a0->field_18 = v18;
    a0->field_20 = v2;
    a0->field_28 = v17;
    a0->field_30 = v1;
    a0->field_38 = v33;
    a0->field_40 = v30;
    a0->field_41 = v0;
    a0->field_42 = v31;
    return a0;
}
