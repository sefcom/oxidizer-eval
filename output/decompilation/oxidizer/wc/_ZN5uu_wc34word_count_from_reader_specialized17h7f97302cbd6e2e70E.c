fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u64, a2: u32) -> u64 {
    let v0: struct1;  // [bp-0x89]
    let v1: i64;  // [sp-0x88]
    let v2: i8;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i32;  // [sp-0x70]
    let v5: i8;  // [sp-0x6c]
    let v6: iNone;  // [sp-0x58], Other Possible Types: struct24, unsigned long
    let v7: i64;  // [sp-0x48]
    let v8: Option<struct16>;  // [sp-0x40]
    let v10: i8;  // dl
    let v11: i64;  // rax
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: iNone;  // xmm0
    let v15: iNone;  // xmm0

    v6 = 0;
    *(&v6 as &i128) = 0;
    v7 = 0;
    v1 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a1, a2 as u64);
    v2 = v10 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = struct1 {
        field_0: 0
    };
    loop {
        v8 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v1);
        v11 = v8 as i64;
        match v8 {
            None => {
                v14 = v6 as i128;
                return struct48 {
                    field_0: v14
                    field_16: v6
                    field_32: v7
                    field_40: 0
                };
            },
            Some(_) => {
                v12 = *((&v8 as &char + 8) as &i64);
                v13 = *((&v8 as &char + 16) as &i64);
                if !v11 {
                    v6 = uu_wc::process_chunk(v12, v13, &v0);
                } else if v12 {
                    v6 = v6 as i64 + v13;
                } else if v13 {
                    v15 = v6 as i128;
                    return struct48 {
                        field_0: v15
                        field_16: v6
                        field_32: v7
                        field_40: v13
                    };
                }
            },
        }
    }
}
