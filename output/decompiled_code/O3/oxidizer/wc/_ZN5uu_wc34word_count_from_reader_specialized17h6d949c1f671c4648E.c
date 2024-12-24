fn uu_wc::word_count_from_reader_specialized(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x99]
    let v1: i64;  // [sp-0x98]
    let v2: i8;  // [sp-0x90]
    let v3: i64;  // [sp-0x88]
    let v4: i32;  // [sp-0x80]
    let v5: i8;  // [sp-0x7c]
    let v6: i64;  // [bp-0x78], Other Possible Types: struct24
    let v7: i128;  // [sp-0x68]
    let v8: i64;  // [sp-0x58]
    let v9: struct8;  // [bp-0x50]
    let v10: i128;  // [sp-0x48], Other Possible Types: Option<struct16>
    let v11: i8;  // [bp-0x38]
    let v13: i8;  // dl
    let v14: i64;  // rax
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i128;  // xmm0
    let v18: i128;  // xmm0

    v7 = 0;
    v6 = 0;
    v8 = 0;
    v1 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a1, a2);
    v2 = v13 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v9 = struct8 {
        field_0: 0
    };
    loop {
        v10 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v1);
        v14 = v10;
        match v10 {
            None => {
                v18 = v6;
                return struct48 {
                    field_0: v18
                    field_16: v6.field_32
                    field_32: v8
                    field_40: 0
                };
            },
            Some(_) => {
                v15 = *((&v10 as &char + 8) as &i64);
                v16 = v11;
                if !v14 {
                    v6 = uu_wc::process_chunk(v15, v16, &v9, &v0);
                } else if v15 {
                    v6 += v16;
                } else if v16 {
                    v17 = v6;
                    return struct48 {
                        field_0: v17
                        field_16: v6.field_32
                        field_32: v8
                        field_40: v16
                    };
                }
            },
        }
    }
}
