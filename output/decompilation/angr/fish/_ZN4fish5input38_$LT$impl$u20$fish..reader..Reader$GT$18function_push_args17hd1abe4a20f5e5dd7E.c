long long fish::input::<impl fish::reader::Reader>::function_push_args(void* *a0, char a1)
{
    int v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    void* v3;  // [bp-0xa8]
    char v4;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x90]
    void* v6;  // [bp-0x88], Other Possible Types: unsigned long long
    uint128_t v7;  // [bp-0x80]
    int v8;  // [bp-0x60]
    char v9;  // [bp-0x48]
    void* v11;  // r14
    unsigned int v12;  // eax
    void* v13;  // rbx

    v11 = *(a0);
    v2 = (long long)v11[1400];
    *((int128_t *)&v0) = (int128_t)v11[1384];
    *((unsigned long long *)&v11[1384]) = 0;
    *((unsigned long long *)&v11[1392]) = 8;
    *((unsigned long long *)&v11[1400]) = 0;
    if (v2)
    {
        v4 = &g_14dae80;
        v5 = 1;
        v6 = 8;
        v7 = 0;
        core::panicking::panic_fmt(&v4, &g_14daf08); /* do not return */
    }
    if (a1 - 73 <= 3)
    {
        while (true)
        {
            v8.readch(a0);
            if ((long long)v8 >= 9223372036854775812 && (int)v9.codepoint_text() != 0x110000)
                break;
            (char)v0.push(&v8, &g_14daef0);
        }
        core::ptr::drop_in_place<fish::input_common::CharEvent>(&v8);
        *(a0).function_push_arg(v12);
        v11 = *(a0);
    }
    v4.drain(&(char)v0);
    v11.insert_front(&v4);
    v3 = 0;
    core::ptr::drop_in_place<[fish::input_common::CharEvent]>(v1, v2);
    v6 = 0;
    memcpy(&v4, &(char)v0, 16);
    v13 = *(a0);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::input_common::CharEvent>>(v13 + 1384);
    *((unsigned long long *)&v13[1400]) = 0;
    *((int128_t *)&v13[1384]) = *((int128_t *)&v4);
    return 0;
}
