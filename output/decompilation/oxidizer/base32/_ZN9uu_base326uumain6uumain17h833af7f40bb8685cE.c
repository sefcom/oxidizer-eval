fn uu_base32::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x88]
    let v1: i64;  // [sp-0x80]
    let v2: struct24;  // [sp-0x78], Other Possible Types: Result<struct34, struct16>, int
    let v3: iNone;  // [sp-0x68]
    let v4: iNone;  // [sp-0x58]
    let v5: struct48;  // [sp-0x40]
    let v10: i64;  // rbx
    let v11: i64;  // rbx
    let v13: i64;  // rbx

    v2 = uu_base32::base_common::parse_base_cmd_args(a0, a1, "encode/decode data and print to standard output
With no FILE, or when FILE is -, read standard input.

The data are encoded as described for the base32 alphabet in RFC 4648.
When decoding, the input may contain newlines in addition
to the bytes of the formal base32 alphabet. Use --ignore-garbage
to attempt to recover from any other non-alphabet bytes in the
encoded stream.", "{} [OPTION]... [FILE]");
    v10 = *((&v2 as &char + 8) as &i64);
    match v2 {
        Err(_) => {
            return v10;
        },
        Ok(_) => {
            v5 = struct48 {
                field_0: v7
                field_8: v8
                field_16: v9
                field_24: *((&v2 as &char + 24) as &i128)
                field_40: v2 as i64
            };
            v2 = uu_base32::base_common::get_input(&v5);
            v11 = v2.field_8;
            if !v2.field_0 {
                v0 = v11;
                v1 = v2.field_16;
                v4 = *((&v5.field_24 as &char + 8) as &i128);
                v3 = *(&v5.field_16 as &i128);
                v2 = *(&v5.field_0 as &i128);
                v10 = v13;
                return v10;
            }
            v10 = v11;
            return v10;
        },
    }
}
