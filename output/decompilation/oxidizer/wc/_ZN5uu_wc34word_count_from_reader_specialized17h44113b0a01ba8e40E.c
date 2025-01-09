fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i8;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i32;  // [sp-0x80]
    let v4: i8;  // [sp-0x7c]
    let v5: i128;  // [bp-0x78], Other Possible Types: struct24
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x58]
    let v8: struct8;  // [bp-0x48]
    let v9: i192;  // [sp-0x40], Other Possible Types: Option<struct16>
    let v11: i8;  // dl
    let v12: i64;  // rax
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i128;  // xmm0
    let v16: i128;  // xmm0

    v6 = 0;
    v5 = 0;
    v7 = 0;
    v0 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a1, a2);
    v1 = v11 & 1;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v8 = struct8 {
        field_0: 0
    };
    loop {
        v9 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v0);
        v12 = v9;
        match v9 {
            None => {
                v15 = v5;
                return struct48 {
                    field_0: v15
                    field_16: v6
                    field_32: v7
                    field_40: 0
                };
            },
            Some(_) => {
                v13 = *((&v9 as &char + 8) as &i64);
                v14 = *((&v9 as &char + 16) as &i64);
                if !v12 {
                    v5 = uu_wc::process_chunk(v13, v14, &v8);
                } else if v13 {
                    v5 += v14;
                } else if v14 {
                    v16 = v5;
                    return struct48 {
                        field_0: v16
                        field_16: v6
                        field_32: v7
                        field_40: v14
                    };
                }
            },
        }
    }
}
