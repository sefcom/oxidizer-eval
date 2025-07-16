fn uu_base64::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v1: Result<struct42, struct24>;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v5: u64;  // [bp-0x30]
    let v7: u64;  // [bp-0x18]

    v1 = uu_base32::base_common::parse_base_cmd_args(a0, a1, "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base64 alphabet in RFC 3548.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base64 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream.", "{} [OPTION]... [FILE]");
    match v1 {
        Err(_) => {
            return v2;
        },
        Ok(_) => {
            v7 = *((&v1 as &char + 40) as &i64);
            memcpy(&v1 as u8, &v1 as u128, 16);
            v3 = v1 as i64;
            v4 = v2;
            v5 = *((&v1 as &char + 16) as &i64);
            uu_base32::base_common::get_input(&v1, &v3);
            if let Ok(_) = v1 {
                return v2;
            }
        },
    }
}
