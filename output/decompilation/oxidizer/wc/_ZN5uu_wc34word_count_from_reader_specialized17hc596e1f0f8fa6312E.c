fn uu_wc::word_count_from_reader_specialized(a1: i64, a2: i32) -> : struct48 {
    let a0: u32;  // rsi
    let v0: u64;  // [bp-0x99]
    let v1: u64;  // [bp-0x98]
    let v2: u8;  // [bp-0x90]
    let v3: void*;  // [bp-0x88]
    let v4: u32;  // [bp-0x80]
    let v5: u8;  // [bp-0x7c]
    let v8: u128;  // [bp-0x78]
    let v9: u128;  // [bp-0x68]
    let v10: struct24;  // [bp-0x58]
    let v11: struct24;  // [bp-0x50]
    let v12: struct24;  // [bp-0x48]
    let v13: u64;  // [bp-0x40]
    let v15: u8;  // dl
    let v16: core::option::Option<u32>;  // rdx
    let v17: &u8;  // r9
    let v18: i64;  // rdi
    let v19: i64;  // rdi

    v9 = 0;
    v8 = 0;
    v10 = 0;
    v1 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a0, a1);
    v2 = v15 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v11 = 0;
    do {
        loop {
            vvar_154{stack -72} = struct24 OrderedDict({0: 𝜙@64b [((4966720, None), vvar_132{stack -72}), ((4966712, None), vvar_132{stack -72}), ((4966656, None), vvar_132{stack -72}), ((4966577, None), None)], 8: 𝜙@64b [((4966720, None), vvar_133{stack -64}), ((4966712, None), vvar_133{stack -64}), ((4966656, None), vvar_133{stack -64}), ((4966577, None), None)]})
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v12, &v1);
            if v12.field_0 == 2 {
                *((v19 + 32) as &struct24) = v10;
                *((v19 + 16) as &u128) = v9;
                *(v19 as &u128) = v8;
                *((v19 + 40) as &i64) = 0;
                return;
            }
            v16 = v12.field_16;
            if !v12.field_0 {
                uu_wc::process_chunk(v13, v16, &v11, &v0, v17);
            } else if !v13 {
                break;
            }
        }
    } while (!v16);
    *((v18 + 32) as &struct24) = v10;
    *((v18 + 16) as &u128) = v9;
    *(v18 as &u128) = v8;
    *((v18 + 40) as &core::option::Option<u32>) = v16;
    return;
}
