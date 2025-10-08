fn forc_crypto::args::read_content_filepath_or_stdin(a0: i64, a1: i64) -> long long {
    let v0: std::io::stdio::Stdin;  // [bp-0x48]
    let v1: Option<struct24>;  // [bp-0x40]
    let v2: u64;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]
    let v6: u8;  // dl
    let v7: iNone;  // xmm0
    let v8: u128;  // xmm0
    let v9: iNone;  // xmm0

    v1 = forc_crypto::args::checked_read_file(a1);
    if !((((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char) {
        *((a0 + 16) as &u64) = v2;
        v9 = v1 as i128;
    }
    v0 = std::io::stdio::stdin();
    v3 = forc_crypto::args::checked_read_stdin(a1, std::io::stdio::Stdin::lock(&v0), v6 & 1);
    if v3.field_0 != 0x8000000000000000 {
        v7 = *(&v3.field_0 as &i128);
        return struct24 {
            field_0: v8
            field_16: v3.field_16
        };
    }
    forc_crypto::args::read_as_binary(a0, a1);
}
