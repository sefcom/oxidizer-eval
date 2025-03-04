fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0xa8], Other Possible Types: unsigned long, struct24
    let v1: i64;  // [sp-0x98]
    let v2: struct8;  // [bp-0x88]
    let v3: Option<struct16>;  // [sp-0x80]
    let v4: struct44;  // [sp-0x68]
    let v5: i64;  // [sp-0x38]
    let v6: i32;  // [sp-0x30]
    let v7: i8;  // [sp-0x2c]
    let v9: i64;  // rax
    let v10: i64;  // rsi
    let v11: i64;  // rdx
    let v12: iNone;  // xmm0
    let v13: iNone;  // xmm0

    v0 = 0;
    *(&v0 as &i128) = 0;
    v1 = 0;
    v4 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(a1);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v2 = struct8 {
        field_0: 0
    };
    loop {
        v3 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v4);
        v9 = v3 as i64;
        match v3 {
            None => {
                v12 = v0 as i128;
                return struct48 {
                    field_0: v12
                    field_16: v0
                    field_32: v1
                    field_40: 0
                };
            },
            Some(_) => {
                v10 = *((&v3 as &char + 8) as &i64);
                v11 = *((&v3 as &char + 16) as &i64);
                if !v9 {
                    v0 = uu_wc::process_chunk(v10, v11, &v2);
                } else if v10 {
                    v0 = v0 as i64 + v11;
                } else if v11 {
                    v13 = v0 as i128;
                    return struct48 {
                        field_0: v13
                        field_16: v0
                        field_32: v1
                        field_40: v11
                    };
                }
            },
        }
    }
}
