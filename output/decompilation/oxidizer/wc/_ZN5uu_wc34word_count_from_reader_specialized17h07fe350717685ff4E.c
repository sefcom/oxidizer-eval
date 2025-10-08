fn uu_wc::word_count_from_reader_specialized(a0: i64, a1: u64) -> int {
    let v0: struct32;  // [bp-0xb8], Other Possible Types: u64
    let v1: struct16;  // [bp-0xb8], Other Possible Types: u128
    let v2: iNone;  // [bp-0xb8]
    let v3: u128;  // [bp-0xb8]
    let v4: u128;  // [bp-0xa8]
    let v5: void*;  // [bp-0x98]
    let v6: void*;  // [bp-0x88]
    let v7: struct24;  // [bp-0x80]
    let v8: u64;  // [bp-0x78]
    let v9: u32;  // [bp-0x70]
    let v10: struct44;  // [bp-0x68]
    let v11: void*;  // [bp-0x38]
    let v12: u32;  // [bp-0x30]
    let v13: u8;  // [bp-0x2c]

    v4 = 0;
    v3 = 0;
    v5 = 0;
    v10 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(a1);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v6 = 0;
    loop {
        vvar_150{stack -128} = struct24 OrderedDict([(0, 𝜙@64b [((4617318, None), vvar_127{stack -128}), ((4617248, None), vvar_127{stack -128}), ((4617190, None), None)]), (8, 𝜙@64b [((4617318, None), vvar_128{stack -120}), ((4617248, None), vvar_128{stack -120}), ((4617190, None), None)]), (16, 𝜙@64b [((4617318, None), vvar_129{stack -112}), ((4617248, None), vvar_129{stack -112}), ((4617190, None), None)])])
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v7, &v10);
        if v7.field_0 == 2 {
            return struct48 {
                field_0: v3
                field_16: v4
                field_32: v5
                field_40: 0
            };
        } else if !(v7.field_0 & 1) {
            v0 = uu_wc::process_chunk(v8, v9, &v6);
        } else {
            if v8 {
                v1 = v0 + v9;
                v1 = v2;
            } else {
                v1 = v3;
                if v9 {
                    return struct48 {
                        field_0: v3
                        field_16: v4
                        field_32: v5
                        field_40: v9
                    };
                }
            }
            v3 = v1;
        }
    }
}
