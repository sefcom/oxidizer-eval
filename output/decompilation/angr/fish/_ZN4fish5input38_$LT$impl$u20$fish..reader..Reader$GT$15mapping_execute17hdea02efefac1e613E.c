long long fish::input::<impl fish::reader::Reader>::mapping_execute(unsigned long long *a0, unsigned long long a1[6])
{
    unsigned long long v0[12];  // [bp-0xd8]
    char v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0x98]
    int v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x90]
    int v9;  // [bp-0x88]
    void* v10;  // [bp-0x80], Other Possible Types: unsigned long long
    char v11;  // [bp-0x78]
    int v12;  // [bp-0x70]
    void* v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    void* v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    unsigned long v17;  // [bp-0x38]
    unsigned long long v18;  // [bp-0x18]
    unsigned long long v19;  // [bp-0x10]
    unsigned long long v21;  // r15
    unsigned long long v22;  // r14
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v25[3];  // rax
    unsigned long long v26[3];  // r13
    unsigned long long v27;  // rax
    unsigned long v28;  // rax
    int v29;  // xmm0

    v19 = v21;
    v18 = v22;
    v23 = a1[4];
    v24 = v23 + a1[5] * 24;
    v6 = v23;
    v8 = v24;
    if (v6.any())
    {
        v8 = 1;
        v6 = 9223372036854775810;
        *(a0).push_front(&v6);
    }
    v4 = v23;
    v5 = v24;
    v25 = v4.next_back();
    if (v25)
    {
        v26 = v25;
        v17 = a1[1];
        v16 = a1[1] + a1[2] * 8;
        do
        {
            v27 = fish::input::input_function_get_code(v26[1], v26[2]);
            if ((char)v27 == 95)
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v1, v26[1], v26[2]);
                v28 = 9223372036854775809;
            }
            else
            {
                a0.function_push_args(v27);
                v1.collect(v17, v16);
                v24 = v27 & 4294967295;
                v28 = 0x8000000000000000;
            }
            v6 = v28;
            v10 = v3;
            *((int128_t *)&v7) = *((int128_t *)&v1);
            v11 = v24;
            *(a0).push_front(&v6);
            v26 = v4.next_back();
        } while (v26);
    }
    if (v0[9] == 0x8000000000000000)
        return 0x8000000000000000;
    v13 = 0;
    v14 = 4;
    v15 = 0;
    v2 = "f";
    v3 = 14;
    v1 = 1;
    fish::common::escape(&v4, v0[10], v0[11]);
    v29 = *((int128_t *)&v5);
    memcpy(&v6, &v1, 16);
    *((int128_t *)&v9) = *((int128_t *)&v3);
    v11 = 1;
    v12 = v29;
    fish_printf::printf_impl::sprintf_locale(&v1, &v13, "set --global %s %ssrc/input_common.rsInvalid in fd", 18, &v6, 2);
    v1.unwrap(&g_14daec0);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    memcpy(&v8, &v13, 16);
    v10 = 0;
    v6 = 9223372036854775809;
    return *(a0).push_front(&v6);
}
