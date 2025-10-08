long long fish::builtins::set::split_var_and_indexes(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    void* v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    void* v2;  // [bp-0xe8]
    unsigned long long v3[3];  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    void* v8;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v9;  // [bp-0xa8]
    char v10;  // [bp-0xa0]
    int v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x78]
    char v13;  // [bp-0x68], Other Possible Types: unsigned long long
    char v14;  // [bp-0x60]
    char v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    int v17;  // [bp-0x48]
    int v18;  // [bp-0x38]
    char v19;  // [bp-0x28]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    int v23;  // xmm0
    int v24;  // xmm1

    fish::builtins::set::split_var_and_indexes_internal(&v13, a1, a2, a3, a4);
    if (!((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63)))
    {
        v23 = *((int128_t *)&v13);
        v24 = *((int128_t *)&v15);
        a0[48] = v18;
        a0[32] = v17;
        a0[16] = v24;
        *(a0) = v23;
        return 0;
    }
    v12 = v16;
    *((int128_t *)&v11) = *((int128_t *)&v14);
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v4 = "%";
    v5 = 37;
    *(v3) = 0x8000000000000000;
    v21 = v3.localize();
    v6 = 0;
    v7 = "setset_colorsourcestatusswitchulimitwhileP";
    v8 = 3;
    v9 = 1;
    memcpy(&v10, &v11, 16);
    fish_printf::printf_impl::sprintf_locale(&v19, &v0, v21, v22, ".", &v6, 2);
    v19.unwrap(&g_14cc9f0);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
    memcpy(&v6, &v0, 16);
    v8 = 0;
    a5.append(&v6);
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
}
