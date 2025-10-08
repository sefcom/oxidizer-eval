fn uu_base32::base_common::parse_base_cmd_args(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct56;  // [bp-0x358]
    let v1: u64;  // [bp-0x350]
    let v2: struct16;  // [bp-0x320]
    let v3: struct56;  // [bp-0x320], Other Possible Types: u64
    let v4: u8;  // [bp-0x2e8]
    let v7: u64;  // rdx

    uu_base32::base_common::base_app(&v4, "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base32 alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base32 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream.", "{} [OPTION]... [FILE]");
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v4, a1, a2);
    if !((((0 ^ v2.field_0) & (0 ^ -(v3))) >> 63) as char) {
        v0 = v3;
        uu_base32::base_common::Config::from(a0, &v0);
        return;
    }
    return struct24 {
        field_0: 2
        field_8: uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1)
        field_16: v7
    };
}
