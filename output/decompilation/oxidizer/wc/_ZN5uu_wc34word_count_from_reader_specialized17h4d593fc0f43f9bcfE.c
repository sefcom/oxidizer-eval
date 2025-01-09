fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u32) -> u64 {
    let v0: struct1;  // [bp-0xa9]
    let v1: i64;  // [bp-0xa8], Other Possible Types: struct24
    let v2: i128;  // [sp-0x98]
    let v3: i64;  // [sp-0x88]
    let v4: Option<struct16>;  // [sp-0x80], Other Possible Types: i192
    let v5: struct44;  // [sp-0x68], Other Possible Types: i352
    let v6: i64;  // [sp-0x38]
    let v7: i32;  // [sp-0x30]
    let v8: i8;  // [sp-0x2c]
    let v10: i64;  // rax
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i128;  // xmm0
    let v14: i128;  // xmm0

    v2 = 0;
    v1 = 0;
    v3 = 0;
    v5 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(a1);
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v0 = struct1 {
        field_0: 0
    };
    loop {
        v4 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v5);
        v10 = v4;
        match v4 {
            None => {
                v13 = v1;
                return struct48 {
                    field_0: v13
                    field_16: v2
                    field_32: v3
                    field_40: 0
                };
            },
            Some(_) => {
                v11 = *((&v4 as &char + 8) as &i64);
                v12 = *((&v4 as &char + 16) as &i64);
                if !v10 {
                    v1 = uu_wc::process_chunk(v11, v12, &v0);
                } else if v11 {
                    v1 += v12;
                } else if v12 {
                    v14 = v1;
                    return struct48 {
                        field_0: v14
                        field_16: v2
                        field_32: v3
                        field_40: v12
                    };
                }
            },
        }
    }
}
