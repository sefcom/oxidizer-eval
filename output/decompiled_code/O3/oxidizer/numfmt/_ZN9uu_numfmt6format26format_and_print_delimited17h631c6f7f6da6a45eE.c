fn uu_numfmt::format::format_and_print_delimited(a0: &u64, a1: u32, a2: u32, a3: &u64, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x1e8]
    let v1: i64;  // [sp-0x1e0]
    let v2: i128;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1c8]
    let v4: i64;  // [sp-0x1b8]
    let v5: i192;  // [sp-0x1b0], Other Possible Types: struct24
    let v6: i256;  // [sp-0x198], Other Possible Types: struct32
    let v7: i832;  // [sp-0x168], Other Possible Types: struct104
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [sp-0xf8]
    let v10: i16;  // [sp-0xf0]
    let v11: i128;  // [sp-0xe8]
    let v12: i64;  // [sp-0xd8]
    let v13: i1280;  // [sp-0xd0], Other Possible Types: struct160, Arguments
    let v15: i64;  // rdx
    let v16: i64;  // rax
    let v19: i256;  // ymm0
    let v20: i64;  // r14
    let v21: i8;  // al
    let v22: i64;  // r9
    let v23: i64;  // 4098
    let v24: i128;  // xmm0
    let v25: i128;  // xmm0
    let v26: i64;  // rax
    let v27: i64;  // rcx

    if *((a3 + 112) as &i64) == 0x8000000000000000 {
        core::option::unwrap_failed(); /* do not return */
    }
    v4 = a3 + 112;
    v7 = <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(a3 + 112, a1, a2);
    v8 = 0;
    v9 = a2;
    v10 = 1;
    v13 = core::iter::traits::iterator::Iterator::zip(&v7);
    v5 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v13, v15);
    v16 = *((&v5 as &char + 8) as &i64);
    if v16 {
        do {
            v20 = v5;
            v0 = v16;
            v1 = *((&v5 as &char + 16) as &i64);
            v21 = uucore::features::ranges::contain(*((a3 + 96) as &i64), *((a3 + 104) as &i64), v20) as i32;
            v6 = v6;
            if v20 > 1 {
                print!("{:?}", &v4);
                v6 = v6;
            }
            v6 = v6;
            if !v21 {
                print!("{:?}", &v0);
                v6 = v6;
            } else {
                v6 = uu_numfmt::format::format_string(core::str::<impl str>::trim_start_matches(v0, v1), v15, a3, 0, v22);
                v23 = v6;
                v24 = *((&v6 as &char + 8) as &i128);
                v2 = v24;
                v3 = *((&v6 as &char + 24) as &i64);
                if v23 {
                    v26 = v3;
                    v27 = a0;
                    *((v27 + 16) as &i64) = v26;
                    *(v27 as &i128) = v2;
                    return v26;
                }
                v12 = v3;
                v25 = v2;
                v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
                v11 = v25;
                print!("{:?}", &v11);
                v6 = v6;
            }
            v6 = v6;
            v5 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v13, v15);
            v16 = *((&v5 as &char + 8) as &i64);
        } while (v16);
    }
    v13 = Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    std::io::stdio::_print(&v13);
    v26 = a0;
    *(v26 as &i64) = 0x8000000000000000;
    return v26;
}
