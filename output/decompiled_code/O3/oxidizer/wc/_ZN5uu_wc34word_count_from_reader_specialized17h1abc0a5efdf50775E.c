fn uu_wc::word_count_from_reader_specialized(a0: void*, a1: u32) -> u64 {
    let v0: i8;  // [sp-0xb9]
    let v1: i128;  // [bp-0xb8], Other Possible Types: struct24
    let v2: i128;  // [sp-0xa8]
    let v3: i64;  // [sp-0x98]
    let v4: struct8;  // [bp-0x90]
    let v5: i128;  // [sp-0x88], Other Possible Types: Option<struct16>
    let v6: i8;  // [bp-0x78]
    let v7: i352;  // [sp-0x70], Other Possible Types: struct44
    let v8: i64;  // [sp-0x40]
    let v9: i32;  // [sp-0x38]
    let v10: i8;  // [sp-0x34]
    let v12: i64;  // rax
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i128;  // xmm0
    let v16: i128;  // xmm0

    v2 = 0;
    v1 = 0;
    v3 = 0;
    v7 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(a1);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v0 = 0;
    v4 = struct8 {
        field_0: 0
    };
    loop {
        v5 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v7);
        v12 = v5;
        match v5 {
            None => {
                v16 = v1;
                return struct48 {
                    field_0: v16
                    field_16: v2
                    field_32: v3
                    field_40: 0
                };
            },
            Some(_) => {
                v13 = *((&v5 as &char + 8) as &i64);
                v14 = v6;
                if !v12 {
                    v1 = uu_wc::process_chunk(v13, v14, &v4, &v0);
                } else if v13 {
                    v1 += v14;
                } else if v14 {
                    v15 = v1;
                    return struct48 {
                        field_0: v15
                        field_16: v2
                        field_32: v3
                        field_40: v14
                    };
                }
            },
        }
    }
}
