char fish::parse_util::detect_errors_in_job_conjunction(unsigned long long a0[20], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x128]
    char v1;  // [bp-0x118]
    int v2;  // [bp-0x118]
    unsigned int v3;  // [bp-0x114]
    char v4;  // [bp-0x110], Other Possible Types: unsigned long
    void* v5;  // [bp-0x108], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe8]
    void* v8;  // [bp-0xe0]
    void* v9;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0xd0]
    int v11;  // [bp-0xc8], Other Possible Types: void*
    unsigned long v12;  // [bp-0xc0]
    int v13;  // [bp-0xbf]
    unsigned long long v14;  // [bp-0xb8]
    char v15;  // [bp-0xb0]
    char v16;  // [bp-0xa0]
    char v17;  // [bp-0x90]
    char v18;  // [bp-0x70]
    unsigned long long v20;  // r15
    unsigned long long v21;  // r12
    struct_1 *v22;  // rax
    struct_0 *v23;  // rdx
    unsigned int v24;  // edi
    unsigned int v25;  // esi

    v20 = a0[18];
    v21 = a0[19] * 144 + v20;
    v17.chain(&a0[2], v20, v21);
    v18.zip(&v17, v20, v21);
    while (true)
    {
        v22 = v18.next();
        if (!v22)
            break;
        if (v22->field_10 != 2 && a1)
        {
            v9 = 0;
            v10 = 4;
            *((uint128_t *)&v11) = 0;
            *((uint128_t *)&v13) = 0;
            v1.try_source_range(v23);
            v24 = 0;
            if (v1)
                v24 = v3;
            v12 = v24.start();
            v1.try_source_range(v23);
            v25 = 0;
            if (v1)
                v25 = *((int *)&v4);
            v14 = a0.length(v25);
            v15 = 1;
            v6 = 0;
            v7 = 4;
            v8 = 0;
            g_14de118[0].localize();
            v1 = 1;
            *((int *)&v4) = (v23->field_c == 8 ? "&" : "|");
            v5 = 2;
            v0 = 1;
            fish_printf::printf_impl::sprintf_locale();
            v16.unwrap(&g_14de130);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
            *((int128_t *)&v2) = *((int128_t *)&v6);
            v5 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            v11 = 0;
            memcpy(&v9, &v1, 16);
            a1.push(&v9, &g_14de130);
            break;
        }
    }
    return v22;
}
