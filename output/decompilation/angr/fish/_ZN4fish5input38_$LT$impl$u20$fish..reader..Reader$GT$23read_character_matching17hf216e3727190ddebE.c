long long fish::input::<impl fish::reader::Reader>::read_character_matching(uint128_t a0[3], void* *a1)
{
    int v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    void* v3;  // [bp-0x98]
    char v4;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78], Other Possible Types: unsigned long long
    uint128_t v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x58]
    int v9;  // [bp-0x48]
    char v10;  // [bp-0x38]
    void* v12;  // rax
    void* v13;  // r14
    int v14;  // xmm0

    v12 = *(a1);
    v2 = (long long)v12[1400];
    *((int128_t *)&v0) = (int128_t)v12[1384];
    *((unsigned long long *)&v12[1384]) = 0;
    *((unsigned long long *)&v12[1392]) = 8;
    *((unsigned long long *)&v12[1400]) = 0;
    if (v2)
    {
        v4 = &g_14dae80;
        v5 = 1;
        v6 = 8;
        v7 = 0;
        core::panicking::panic_fmt(&v4, &g_14daea8); /* do not return */
    }
    while (true)
    {
        v8.readch(a1);
        if ((char)fish::input::<impl fish::reader::Reader>::read_char::{{closure}}(v8))
            break;
        (char)v0.push(&v8, &g_14dae90);
    }
    v4.drain(&(char)v0);
    *(a1).insert_front(&v4);
    v3 = 0;
    core::ptr::drop_in_place<[fish::input_common::CharEvent]>(v1, v2);
    v6 = 0;
    memcpy(&v4, &(char)v0, 16);
    v13 = *(a1);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::input_common::CharEvent>>(v13 + 1384);
    *((unsigned long long *)&v13[1400]) = 0;
    *((int128_t *)&v13[1384]) = *((int128_t *)&v4);
    v14 = *((int128_t *)&v8);
    a0[2] = *((int128_t *)&v10);
    *((void*)&a0[1]) = v9;
    *((void*)&a0[0]) = v14;
    return 0;
}
