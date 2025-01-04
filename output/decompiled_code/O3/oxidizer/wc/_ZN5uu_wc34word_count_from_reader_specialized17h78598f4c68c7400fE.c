fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u64, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: u8;  // [sp-0x90]
    let v2: void*;  // [sp-0x88]
    let v3: u32;  // [sp-0x80]
    let v4: u8;  // [sp-0x7c]
    let v5: u128;  // [bp-0x78], Other Possible Types: struct32
    let v6: u128;  // [sp-0x68]
    let v7: void*;  // [sp-0x58]
    let v8: struct8;  // [bp-0x48]
    let v9: Option<struct16>;  // [sp-0x40], Other Possible Types: u128
    let v10: i8;  // [bp-0x30]
    let v12: u8;  // dl
    let v13: u64;  // rax
    let v14: u64;  // rsi
    let v15: u64;  // rdx
    let v16: u128;  // xmm0
    let v17: u128;  // xmm0

    v6 = 0;
    v5 = 0;
    v7 = 0;
    v0 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a1, a2);
    v1 = v12 & 1;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v8 = struct8 {
        field_0: 0
    };
    loop {
        v9 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v0);
        v13 = v9;
        match v9 {
            None => {
                v17 = v5 as i128;
                return struct48 {
                    field_0: v17
                    field_16: v6
                    field_32: v7
                    field_40: 0
                };
            },
            Some(_) => {
                v14 = *((&v9 as &char + 8) as &i64);
                v15 = v10;
                if !v13 {
                    v5 = uu_wc::process_chunk(v14, v15, &v8);
                } else if v14 {
                    v5 = v5 as i64 + v15;
                } else if v15 {
                    v16 = v5 as i128;
                    return struct48 {
                        field_0: v16
                        field_16: v6
                        field_32: v7
                        field_40: v15
                    };
                }
            },
        }
    }
}
