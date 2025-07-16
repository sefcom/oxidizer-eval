fn uu_wc::word_count_from_reader_specialized(a1: i64) -> : struct48 {
    let a0: u32;  // rsi
    let v0: u64;  // [bp-0xb9]
    let v3: core::option::Option<u32>;  // [bp-0xb8]
    let v4: u128;  // [bp-0xa8]
    let v5: void*;  // [bp-0x98]
    let v6: void*;  // [bp-0x90]
    let v7: u192;  // [bp-0x88]
    let v8: u64;  // [bp-0x80]
    let v9: u64;  // [bp-0x78]
    let v10: struct44;  // [bp-0x70]
    let v11: void*;  // [bp-0x40]
    let v12: u32;  // [bp-0x38]
    let v13: u8;  // [bp-0x34]
    let v15: &u8;  // r9
    let v16: i64;  // rdi
    let v17: i64;  // rdi

    v4 = 0;
    v3 = 0;
    v5 = 0;
    v10 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(a0);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v0 = 0;
    v6 = 0;
    do {
        loop {
            vvar_146{stack -136} = struct24 OrderedDict({0: 𝜙@64b [((4960880, None), vvar_124{stack -136}), ((4960872, None), vvar_124{stack -136}), ((4960816, None), vvar_124{stack -136}), ((4960744, None), None)], 8: 𝜙@64b [((4960880, None), vvar_125{stack -128}), ((4960872, None), vvar_125{stack -128}), ((4960816, None), vvar_125{stack -128}), ((4960744, None), None)], 16: 𝜙@64b [((4960880, None), vvar_126{stack -120}), ((4960872, None), vvar_126{stack -120}), ((4960816, None), vvar_126{stack -120}), ((4960744, None), None)]})
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v7, &v10);
            if v7 as i64 == 2 {
                *((v17 + 32) as &void*) = v5;
                *((v17 + 16) as &u128) = v4;
                *(v17 as &core::option::Option<u32>) = v3;
                *((v17 + 40) as &i64) = 0;
                return;
            }
            if !v7 as i64 {
                uu_wc::process_chunk(v8, v9, &v6, &v0, v15);
            } else if !v8 {
                break;
            }
        }
    } while (!v9);
    *((v16 + 32) as &void*) = v5;
    *((v16 + 16) as &u128) = v4;
    *(v16 as &core::option::Option<u32>) = v3;
    *((v16 + 40) as &u64) = v9;
    return;
}
