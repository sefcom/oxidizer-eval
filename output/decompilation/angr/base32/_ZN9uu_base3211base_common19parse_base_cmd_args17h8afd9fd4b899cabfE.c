long long uu_base32::base_common::parse_base_cmd_args(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x358]
    unsigned long long v1;  // [bp-0x350]
    int v2;  // [bp-0x348]
    char v3;  // [bp-0x338]
    unsigned long long v4;  // [bp-0x328]
    char v5;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x318]
    int v7;  // [bp-0x310]
    char v8;  // [bp-0x300]
    unsigned long long v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2e8]
    unsigned long long v12;  // rax
    unsigned long v13;  // rdx

    uu_base32::base_common::base_app(&v10, "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base32 alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base32 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream.{} [OPTION]... [FILE]Error flushing stdout: ", 375, "{} [OPTION]... [FILE]Error flushing stdout: ", 21);
    v5.try_get_matches_from(&v10, a1, a2);
    if (!((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63)))
    {
        v4 = v9;
        memcpy(&v3, &v8, 16);
        v2 = v7;
        v0 = v5;
        v1 = v6;
        a0.from(&v0);
        return (unsigned long long)core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    }
    v12 = v1.from();
    a0[1] = v12;
    a0[2] = v13;
    a0[0] = 2;
    return v12;
}
