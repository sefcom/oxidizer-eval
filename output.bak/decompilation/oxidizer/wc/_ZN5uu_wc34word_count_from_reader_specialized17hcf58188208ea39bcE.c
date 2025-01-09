fn uu_wc::word_count_from_reader_specialized(a0: &struct48, a1: u32) -> u64 {
    let v0: i8;  // [sp-0xb9]
    let v1: i64;  // [bp-0xb8], Other Possible Types: struct16
    let v2: i128;  // [sp-0xa8]
    let v3: i64;  // [sp-0x98]
    let v4: struct8;  // [bp-0x90]
    let v5: i136;  // [sp-0x88], Other Possible Types: Option<struct16>
    let v6: i352;  // [sp-0x70], Other Possible Types: struct44
    let v7: i64;  // [sp-0x40]
    let v8: i32;  // [sp-0x38]
    let v9: i8;  // [sp-0x34]
    let v11: i64;  // rax
    let v13: i64;  // rdx
    let v15: i128;  // xmm0

    v2 = 0;
    v1 = 0;
    v3 = 0;
    v6 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(a1);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v0 = 0;
    v4 = struct8 {
        field_0: 0
    };
    loop {
        v5 = uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v6);
        v11 = v5;
        if v11 == 2 {
            break;
        }
        v13 = *((&v5 as &char + 16) as &i64);
        if !v11 {
            v1 = uu_wc::process_chunk(*((&v5 as &char + 8) as &i64), v13, &v4, &v0);
        } else {
            return struct48 {
                field_0: v14
                field_16: v2
                field_32: v3
                field_40: v13
            };
            v1 += v13;
        }
    }
    v15 = v1;
    return struct48 {
        field_0: v15
        field_16: v2
        field_32: v3
        field_40: 0
    };
}
