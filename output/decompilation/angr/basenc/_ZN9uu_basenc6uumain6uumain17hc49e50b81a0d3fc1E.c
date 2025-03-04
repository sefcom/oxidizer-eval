long long uu_basenc::uumain::uumain::hc49e50b81a0d3fc1(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x90]
    int v2;  // [bp-0x88], Other Possible Types: char
    char v3;  // [bp-0x80]
    int v4;  // [sp-0x78], Other Possible Types: char
    char v5;  // [bp-0x70]
    int v6;  // [sp-0x68]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    unsigned long v9;  // [sp-0x48]
    unsigned long long v10;  // [sp-0x40]
    unsigned long v11;  // [sp-0x38]
    int v12;  // [sp-0x30]
    unsigned long long v13;  // [sp-0x20]
    unsigned long long v16;  // rbx

    uu_basenc::parse_cmd_args::haa59f9e932579024(&v2, a0, a1);
    v16 = *((long long *)&v3);
    if (v9 == 2)
        return v16;
    v13 = *((long long *)&v7);
    *((int128_t *)&v12) = *((int128_t *)&v5);
    v9 = *((long long *)&v2);
    v10 = v16;
    v11 = *((long long *)&v4);
    uu_base32::base_common::get_input::h0f77b7573e033d64(&v2, &v9);
    v16 = *((long long *)&v3);
    if (*((long long *)&v2))
    {
        ::0x47b680::core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h700cc0223f36aeb6(&v9);
        return v16;
    }
    v0 = v16;
    v1 = *((long long *)&v4);
    *((int128_t *)&v6) = (int128_t)(&v12)[8];
    *((int128_t *)&v4) = *((int128_t *)&v11);
    *((int128_t *)&v2) = *((int128_t *)&v9);
    v16 = uu_base32::base_common::handle_input::hb7a3beef6816c6b6(&v0, v8, &v2);
    ::0x47b470::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h96419b3cbf10967f(v0, v1);
    return v16;
}
