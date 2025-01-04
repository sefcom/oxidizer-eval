fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u64, a2: u32) -> u64 {
    let v0: struct1;  // [bp-0x89]
    let v1: i64;  // [sp-0x88]
    let v2: i8;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i32;  // [sp-0x70]
    let v5: i8;  // [sp-0x6c]
    let v6: i128;  // [bp-0x68], Other Possible Types: struct24
    let v7: i128;  // [sp-0x58]
    let v8: i64;  // [sp-0x48]
    let v9: Option<struct16>;  // [sp-0x40], Other Possible Types: i128
    let v10: i8;  // [bp-0x30]
    let v12: i8;  // dl
    let v13: i64;  // rax
    let v14: i64;  // rsi
    let v15: i64;  // rdx
    let v16: i128;  // xmm0
    let v17: i128;  // xmm0

    v7 = 0;
    v6 = 0;
    v8 = 0;
    v1 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a1, a2);
    v2 = v12 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = struct1 {
        field_0: 0
    };
    loop {
        v9 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v1);
        v13 = v9;
        match v9 {
            None => {
                v17 = v6;
                return struct48 {
                    field_0: v17
                    field_16: v7
                    field_32: v8
                    field_40: 0
                };
            },
            Some(_) => {
                v14 = *((&v9 as &char + 8) as &i64);
                v15 = v10;
                if !v13 {
                    v6 = uu_wc::process_chunk(v14, v15, &v0);
                } else if v14 {
                    v6 += v15;
                } else if v15 {
                    v16 = v6;
                    return struct48 {
                        field_0: v16
                        field_16: v7
                        field_32: v8
                        field_40: v15
                    };
                }
            },
        }
    }
}
