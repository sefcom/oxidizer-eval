fn uu_wc::word_count_from_reader_specialized(a0: void*, a1: u32) -> u64 {
    let v0: i128;  // [bp-0xb8], Other Possible Types: struct32
    let v1: i128;  // [sp-0xa8]
    let v2: i64;  // [sp-0x98]
    let v3: struct8;  // [bp-0x88]
    let v4: i128;  // [sp-0x80], Other Possible Types: Option<struct16>
    let v5: i8;  // [bp-0x70]
    let v6: i352;  // [sp-0x68], Other Possible Types: struct44
    let v7: i64;  // [sp-0x38]
    let v8: i32;  // [sp-0x30]
    let v9: i8;  // [sp-0x2c]
    let v11: i64;  // rax
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: i128;  // xmm0
    let v15: i128;  // xmm0

    v1 = 0;
    v0 = 0;
    v2 = 0;
    v6 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(a1);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v3 = struct8 {
        field_0: 0
    };
    loop {
        v4 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v6);
        v11 = v4;
        match v4 {
            None => {
                v15 = v0;
                return struct48 {
                    field_0: v15
                    field_16: v1
                    field_32: v2
                    field_40: 0
                };
            },
            Some(_) => {
                v12 = *((&v4 as &char + 8) as &i64);
                v13 = v5;
                if !v11 {
                    v0 = uu_wc::process_chunk(v12, v13, &v3);
                } else if v12 {
                    v0 += v13;
                } else if v13 {
                    v14 = v0;
                    return struct48 {
                        field_0: v14
                        field_16: v1
                        field_32: v2
                        field_40: v13
                    };
                }
            },
        }
    }
}
