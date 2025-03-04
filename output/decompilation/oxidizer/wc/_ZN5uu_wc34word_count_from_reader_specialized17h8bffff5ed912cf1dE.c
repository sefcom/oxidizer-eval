fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u64, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x99]
    let v1: i64;  // [sp-0x98]
    let v2: i8;  // [sp-0x90]
    let v3: i64;  // [sp-0x88]
    let v4: i32;  // [sp-0x80]
    let v5: i8;  // [sp-0x7c]
    let v6: iNone;  // [sp-0x68], Other Possible Types: unsigned long, struct32
    let v7: i64;  // [sp-0x58]
    let v8: struct8;  // [bp-0x50]
    let v9: Option<struct16>;  // [sp-0x48]
    let v11: i8;  // dl
    let v12: i64;  // rax
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: iNone;  // xmm0
    let v16: iNone;  // xmm0

    v6 = 0;
    *(&v6 as &i128) = 0;
    v7 = 0;
    v1 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a1, a2 as u64);
    v2 = v11 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v8 = struct8 {
        field_0: 0
    };
    loop {
        v9 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v1);
        v12 = v9 as i64;
        match v9 {
            None => {
                v16 = v6 as i128;
                return struct48 {
                    field_0: v16
                    field_16: v6
                    field_32: v7
                    field_40: 0
                };
            },
            Some(_) => {
                v13 = *((&v9 as &char + 8) as &i64);
                v14 = *((&v9 as &char + 16) as &i64);
                if !v12 {
                    v6 = uu_wc::process_chunk(v13, v14, &v8, &v0);
                } else if v13 {
                    v6 = v6 as i64 + v14;
                } else if v14 {
                    v15 = v6 as i128;
                    return struct48 {
                        field_0: v15
                        field_16: v6
                        field_32: v7
                        field_40: v14
                    };
                }
            },
        }
    }
}
