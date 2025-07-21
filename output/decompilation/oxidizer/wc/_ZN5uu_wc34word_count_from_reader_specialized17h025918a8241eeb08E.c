fn uu_wc::word_count_from_reader_specialized(a1: i64, a2: i32) -> : struct48 {
    let a0: u32;  // rsi
    let v0: u8;  // [bp-0x89]
    let v1: u64;  // [bp-0x88]
    let v2: u8;  // [bp-0x80]
    let v3: void*;  // [bp-0x78]
    let v4: u32;  // [bp-0x70]
    let v5: u8;  // [bp-0x6c]
    let v8: u128;  // [bp-0x68]
    let v9: u128;  // [bp-0x58]
    let v10: void*;  // [bp-0x48]
    let v11: struct24;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v14: u8;  // dl
    let v15: u64;  // rdx
    let v16: &u8;  // r8
    let v17: i64;  // rdi
    let v18: i64;  // rdi

    v9 = 0;
    v8 = 0;
    v10 = 0;
    v1 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a0, a1);
    v2 = v14 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    do {
        loop {
            vvar_146{stack -64} = struct24 OrderedDict({0: 𝜙@64b [((4960208, None), vvar_125{stack -64}), ((4960197, None), vvar_125{stack -64}), ((4960144, None), vvar_125{stack -64}), ((4960080, None), None)], 8: 𝜙@64b [((4960208, None), vvar_126{stack -56}), ((4960197, None), vvar_126{stack -56}), ((4960144, None), vvar_126{stack -56}), ((4960080, None), None)]})
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v11, &v1);
            if v11.field_0 == 2 {
                *((v18 + 32) as &void*) = v10;
                *((v18 + 16) as &u128) = v9;
                *(v18 as &u128) = v8;
                *((v18 + 40) as &i64) = 0;
                return;
            }
            v15 = v11.field_16;
            if !v11.field_0 {
                uu_wc::process_chunk(v12, v15, &v0, v16);
            } else if !v12 {
                break;
            }
        }
    } while (!v15);
    *((v17 + 32) as &void*) = v10;
    *((v17 + 16) as &u128) = v9;
    *(v17 as &u128) = v8;
    *((v17 + 40) as &u64) = v15;
    return;
}
