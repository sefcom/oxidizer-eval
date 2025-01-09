fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u64, a2: u32) -> u64 {
    let v0: struct1;  // [bp-0x89]
    let v1: i64;  // [sp-0x88]
    let v2: i8;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i32;  // [sp-0x70]
    let v5: i8;  // [sp-0x6c]
    let v6: i128;  // [bp-0x68], Other Possible Types: struct32
    let v7: i128;  // [sp-0x58]
    let v8: i64;  // [sp-0x48]
    let v9: i136;  // [sp-0x40], Other Possible Types: Option<struct16>
    let v11: i8;  // dl
    let v12: i64;  // rax
    let v14: i64;  // rdx
    let v16: i128;  // xmm0

    v7 = 0;
    v6 = 0;
    v8 = 0;
    v1 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a1, a2);
    v2 = v11 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = struct1 {
        field_0: 0
    };
    loop {
        v9 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v1);
        v12 = v9;
        if v12 == 2 {
            break;
        }
        v14 = *((&v9 as &char + 16) as &i64);
        if !v12 {
            v6 = uu_wc::process_chunk(*((&v9 as &char + 8) as &i64), v14, &v0);
        } else {
            return struct48 {
                field_0: v15
                field_16: v7
                field_32: v8
                field_40: v14
            };
            v6 += v14;
        }
    }
    v16 = v6;
    return struct48 {
        field_0: v16
        field_16: v7
        field_32: v8
        field_40: 0
    };
}
