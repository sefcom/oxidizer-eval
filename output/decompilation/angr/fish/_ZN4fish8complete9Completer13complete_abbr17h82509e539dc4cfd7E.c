void fish::complete::Completer::complete_abbr(void* a0, unsigned long long a1[3])
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    int v5;  // [bp-0x88]
    int v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    int v9;  // [bp-0x58]
    int v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v13 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v6) = g_14bd820;
    *((uint128_t *)&v5) = g_14bd810;
    v7 = v13;
    v8 = v14;
    fish::abbrs::with_abbrs(&v0, &v5);
    memcpy(&v11, &v7, 16);
    v10 = v6;
    v9 = v5;
    *((double *)&v3) = v9.new();
    v4 = &g_14d5dd8;
    a0.complete_strings(a1[1], a1[2], &v3, 8, 0, 1, 0);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::ops::function::Fn<(&widestring::utfstr::Utf32Str,)>+Output = widestring::utfstring::Utf32String>>(&v3);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v0);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    return;
}
