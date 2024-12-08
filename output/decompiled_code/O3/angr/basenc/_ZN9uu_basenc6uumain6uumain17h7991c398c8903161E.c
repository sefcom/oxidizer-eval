long long uu_basenc::uumain::uumain::h7991c398c8903161(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x90]
    int v2;  // [bp-0x88], Other Possible Types: char
    char v3;  // [bp-0x80]
    int v4;  // [bp-0x78], Other Possible Types: char
    char v5;  // [bp-0x70]
    int v6;  // [sp-0x68]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    unsigned long v9;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x40]
    unsigned long v11;  // [sp-0x38], Other Possible Types: unsigned long long
    int v12;  // [sp-0x30]
    unsigned long long v13;  // [sp-0x20]
    unsigned long long v16;  // rbx
    unsigned long long v19;  // rdx

    uu_basenc::parse_cmd_args::hfc9093c9740c8eed(&v2, a0, a1, a3);
    v16 = *((long long *)&v3);
    if (v9 == 2)
        return v16;
    v13 = *((long long *)&v7);
    *((int128_t *)&v12) = *((int128_t *)&v5);
    v9 = *((long long *)&v2);
    v10 = v16;
    v11 = *((long long *)&v4);
    uu_base32::base_common::get_input::hb2a47e87ab1f4903(&v2, &v9, v19);
    v16 = *((long long *)&v3);
    if (*((long long *)&v2))
    {
        ::0x47aa80::core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h1e99a26c99faea8a(&v9);
        return v16;
    }
    v0 = v16;
    v1 = *((long long *)&v4);
    *((int128_t *)&v6) = (int128_t)(&v12)[8];
    *((int128_t *)&v4) = *((int128_t *)&v11);
    *((int128_t *)&v2) = *((int128_t *)&v9);
    v16 = uu_base32::base_common::handle_input::h821865bac31fb2e9(&v0, v8, &v2);
    ::0x47a870::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hf66a6215be7e5f83(v0, v1);
    return v16;
}
