long long uu_base64::uumain::uumain::h57e935c2e33c3c1b(unsigned long long a0, unsigned long long a1)
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

    uu_base32::base_common::parse_base_cmd_args::hebf5c3bfe7660b5f(&v2, a0, a1, "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base64 alphabet in RFC 3548.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base64 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream.", 375, "{} [OPTION]... [FILE]", 21);
    v15 = *((long long *)&v3);
    if (v8 == 2)
        return v15;
    v12 = *((long long *)&v7);
    *((int128_t *)&v11) = *((int128_t *)&v5);
    v8 = *((long long *)&v2);
    v9 = v15;
    v10 = *((long long *)&v4);
    uu_base32::base_common::get_input::h0f77b7573e033d64(&v2, &v8);
    v15 = *((long long *)&v3);
    if (*((long long *)&v2))
    {
        ::0x472c00::core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h99d51649836290b4(&v8);
        return v15;
    }
    v0 = v15;
    v1 = *((long long *)&v4);
    *((int128_t *)&v6) = (int128_t)(&v11)[8];
    *((int128_t *)&v4) = *((int128_t *)&v10);
    *((int128_t *)&v2) = *((int128_t *)&v8);
    v15 = uu_base32::base_common::handle_input::h3e33950ee952075b(&v0, 0, &v2);
    ::0x472b00::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h7155bfd3c4b56ec3(v0, v1);
    return v15;
}
