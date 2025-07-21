fn uu_wc::word_count_from_reader_specialized(a1: i64) -> : struct48 {
    let a0: u64;  // rsi
    let v2: core::option::Option<u32>;  // [bp-0xb8]
    let v3: u128;  // [bp-0xa8]
    let v4: void*;  // [bp-0x98]
    let v5: core::option::Option<u32>;  // [bp-0x88]
    let v6: struct24;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: u8;  // [bp-0x68]
    let v10: void*;  // [bp-0x38]
    let v11: u32;  // [bp-0x30]
    let v12: u8;  // [bp-0x2c]
    let v14: &void*;  // r8
    let v15: i64;  // rdi
    let v16: i64;  // rdi

    v3 = 0;
    v2 = 0;
    v4 = 0;
    <std::fs::File as uu_wc::countable::WordCountable>::buffered(a0, a1);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v5 = 0;
    do {
        loop {
            vvar_137{stack -128} = struct24 OrderedDict({0: 𝜙@64b [((4967376, None), vvar_117{stack -128}), ((4967365, None), vvar_117{stack -128}), ((4967312, None), vvar_117{stack -128}), ((4967254, None), None)], 8: 𝜙@64b [((4967376, None), vvar_118{stack -120}), ((4967365, None), vvar_118{stack -120}), ((4967312, None), vvar_118{stack -120}), ((4967254, None), None)], 16: 𝜙@64b [((4967376, None), vvar_119{stack -112}), ((4967365, None), vvar_119{stack -112}), ((4967312, None), vvar_119{stack -112}), ((4967254, None), None)]})
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v6, &v9);
            if v6.field_0 == 2 {
                *((v15 + 32) as &void*) = v4;
                *((v15 + 16) as &u128) = v3;
                *(v15 as &core::option::Option<u32>) = v2;
                *((v15 + 40) as &i64) = 0;
                return;
            }
            if !v6.field_0 {
                uu_wc::process_chunk(v7, v8, &v5, v14);
            } else if !v7 {
                break;
            }
        }
    } while (!v8);
    *((v16 + 32) as &void*) = v4;
    *((v16 + 16) as &u128) = v3;
    *(v16 as &core::option::Option<u32>) = v2;
    *((v16 + 40) as &u64) = v8;
    return;
}
