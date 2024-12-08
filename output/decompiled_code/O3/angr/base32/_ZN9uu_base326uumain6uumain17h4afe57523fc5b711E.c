long long uu_base32::uumain::uumain::h4afe57523fc5b711(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x80]
    int v2;  // [bp-0x78], Other Possible Types: char
    char v3;  // [bp-0x70]
    int v4;  // [bp-0x68], Other Possible Types: char
    char v5;  // [bp-0x60]
    int v6;  // [sp-0x58]
    char v7;  // [bp-0x50]
    unsigned long v8;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    unsigned long v10;  // [sp-0x30], Other Possible Types: unsigned long long
    int v11;  // [sp-0x28]
    unsigned long long v12;  // [sp-0x18]
    unsigned long long v15;  // rbx
    unsigned long long v17;  // rdx

    uu_base32::base_common::parse_base_cmd_args::h75fa4f825e0eaa27(&v2, a0, a1, "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base32 alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base32 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream.{} [OPTION]... [FILE]", 375, "{} [OPTION]... [FILE]", 21);
    v15 = *((long long *)&v3);
    if (v8 == 2)
        return v15;
    v12 = *((long long *)&v7);
    *((int128_t *)&v11) = *((int128_t *)&v5);
    v8 = *((long long *)&v2);
    v9 = v15;
    v10 = *((long long *)&v4);
    uu_base32::base_common::get_input::hb2a47e87ab1f4903(&v2, &v8, v17);
    v15 = *((long long *)&v3);
    if (*((long long *)&v2))
    {
        ::0x472f60::core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::hb58b4ed88d502bc3(&v8);
        return v15;
    }
    v0 = v15;
    v1 = *((long long *)&v4);
    *((int128_t *)&v6) = (int128_t)(&v11)[8];
    *((int128_t *)&v4) = *((int128_t *)&v10);
    *((int128_t *)&v2) = *((int128_t *)&v8);
    v15 = uu_base32::base_common::handle_input::h3a6e58b783660d49(&v0, 2, &v2);
    ::0x472e60::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h4cd7dd816a80c2d7(v0, v1);
    return v15;
}
