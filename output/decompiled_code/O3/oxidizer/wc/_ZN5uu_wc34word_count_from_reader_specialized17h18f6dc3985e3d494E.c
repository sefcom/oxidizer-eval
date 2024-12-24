fn uu_wc::word_count_from_reader_specialized(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct1;  // [bp-0x89]
    let v1: u64;  // [sp-0x88]
    let v2: u8;  // [sp-0x80]
    let v3: void*;  // [sp-0x78]
    let v4: u32;  // [sp-0x70]
    let v5: u8;  // [sp-0x6c]
    let v6: u256;  // [bp-0x68], Other Possible Types: struct32
    let v7: u128;  // [sp-0x58]
    let v8: void*;  // [sp-0x48]
    let v9: u128;  // [sp-0x40], Other Possible Types: Option<struct16>
    let v10: i8;  // [bp-0x30]
    let v12: u8;  // dl
    let v13: u64;  // rax
    let v14: u64;  // rsi
    let v15: u64;  // rdx
    let v16: u128;  // xmm0
    let v17: u128;  // xmm0

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
                v17 = v6 as i128;
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
                    v6 = v6 as i64 + v15;
                } else if v15 {
                    v16 = v6 as i128;
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
