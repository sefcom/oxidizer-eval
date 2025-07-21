fn uu_base32::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v1: Result<struct42, struct24>;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v5: u64;  // [bp-0x30]
    let v6: u128;  // [bp-0x28]
    let v7: u64;  // [bp-0x18]
    let v9: u64;  // rax
    let v10: u64;  // r14

    v1 = uu_base32::base_common::parse_base_cmd_args(a0, a1, "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base32 alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base32 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream.", "{} [OPTION]... [FILE]");
    v9 = v1 as i64;
    v10 = *((&v1 as &char + 16) as &i64);
    if v9 == 2 {
        return v2;
    }
    v7 = *((&v1 as &char + 40) as &i64);
    v6 = *((&v1 as &char + 24) as &i128);
    v3 = v9;
    v4 = v2;
    v5 = v10;
    uu_base32::base_common::get_input(&v1, &v3);
    if let Ok(_) = v1 {
        return v2;
    }
}
