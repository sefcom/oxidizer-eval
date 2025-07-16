fn uu_wc::word_count_from_reader_specialized(a1: i64, a2: i32) -> : struct48 {
    let a0: u32;  // rsi
    let v0: u64;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: void*;  // [bp-0x88]
    let v3: u32;  // [bp-0x80]
    let v4: u8;  // [bp-0x7c]
    let v7: core::option::Option<u32>;  // [bp-0x78]
    let v8: u128;  // [bp-0x68]
    let v9: void*;  // [bp-0x58]
    let v10: void*;  // [bp-0x48]
    let v11: u192;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v14: u8;  // dl
    let v15: u64;  // rdx
    let v16: &u64;  // r8
    let v17: i64;  // rdi
    let v18: i64;  // rdi

    v8 = 0;
    v7 = 0;
    v9 = 0;
    v0 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a0, a1);
    v1 = v14 & 1;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v10 = 0;
    do {
        loop {
            vvar_146{stack -64} = struct24 OrderedDict({0: 𝜙@64b [((4966384, None), vvar_125{stack -64}), ((4966373, None), vvar_125{stack -64}), ((4966320, None), vvar_125{stack -64}), ((4966256, None), None)], 8: 𝜙@64b [((4966384, None), vvar_126{stack -56}), ((4966373, None), vvar_126{stack -56}), ((4966320, None), vvar_126{stack -56}), ((4966256, None), None)]})
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v11, &v0);
            if v11 as i64 == 2 {
                *((v18 + 32) as &void*) = v9;
                *((v18 + 16) as &u128) = v8;
                *(v18 as &core::option::Option<u32>) = v7;
                *((v18 + 40) as &i64) = 0;
                return;
            }
            v15 = *((&v11 as &char + 16) as &i64);
            if !v11 as i64 {
                uu_wc::process_chunk(v12, v15, &v10, v16);
            } else if !v12 {
                break;
            }
        }
    } while (!v15);
    *((v17 + 32) as &void*) = v9;
    *((v17 + 16) as &u128) = v8;
    *(v17 as &core::option::Option<u32>) = v7;
    *((v17 + 40) as &u64) = v15;
    return;
}
