fn uu_numfmt::format::format_and_print_delimited(a0: u64, a1: u64, a2: void*) -> long long {
    let v0: void*;  // [bp-0x1f8]
    let v1: u64;  // [bp-0x1e8]
    let v2: u64;  // [bp-0x1e0]
    let v3: iNone;  // [bp-0x1d8]
    let v4: u64;  // [bp-0x1c8]
    let v5: u64;  // [bp-0x1b8]
    let v6: struct24;  // [bp-0x1b0], Other Possible Types: u64
    let v7: u64;  // [bp-0x1a8]
    let v8: u64;  // [bp-0x1a8]
    let v9: u64;  // [bp-0x1a0]
    let v10: u64;  // [bp-0x198]
    let v11: u64;  // [bp-0x198]
    let v12: Result<struct24, struct24>;  // [bp-0x198]
    let v13: u64;  // [bp-0x190]
    let v14: u64;  // [bp-0x190]
    let v15: u64;  // [bp-0x180]
    let v16: core::str::pattern::StrSearcher;  // [bp-0x168]
    let v17: void*;  // [bp-0x100]
    let v18: void*;  // [bp-0xf8]
    let v19: u16;  // [bp-0xf0]
    let v20: iNone;  // [bp-0xe8]
    let v21: u64;  // [bp-0xd8]
    let v22: core::fmt::Arguments;  // [bp-0xd0], Other Possible Types: struct160
    let v24: i64;  // rcx
    let v25: u8;  // al
    let v27: u64;  // r9

    if (((0 ^ *((v24 + 112) as &i64)) & (0 ^ -(*((v24 + 112) as &i64)))) >> 63) as char {
        core::option::unwrap_failed(); /* do not return */
    }
    v5 = v24 + 112;
    v16 = <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(v24 + 112, a1, a2);
    v17 = 0;
    v18 = a2;
    v19 = 1;
    v22 = core::iter::traits::iterator::Iterator::zip(&v16);
    v6 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v22);
    if v7 {
        v8 = v7;
        do {
            v1 = v8;
            v2 = v9;
            v25 = uucore::features::ranges::contain(*((v24 + 96) as &i64), *((v24 + 104) as &i64), v6);
            v10 = v10;
            v13 = v13;
            if v6 > 1 {
                print!("{}", &v5);
                v10 = v11;
                v13 = v14;
            }
            v13 = v13;
            v10 = v10;
            if !v25 {
                print!("{}", &v1);
                v10 = v11;
                v13 = v14;
            } else {
                v12 = uu_numfmt::format::format_string(core::str::<impl str>::trim_start_matches(v1, v2), a2, v24, 0, v27);
                v3 = *((&v12 as &char + 8) as &i128);
                v4 = v15;
                match v12 {
                    Err(_) => {
                        *(&v0[16] as &u64) = v4;
                        *(v0) = v3;
                        return v4;
                    },
                    Ok(_) => {
                        v21 = v4;
                        v20 = v3;
                        print!("{}", &v20);
                        v10 = v10;
                        v13 = v13;
                    },
                }
            }
            v6 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v22);
            v8 = v7;
        } while (v8);
    }
    v22 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    std::io::stdio::_print(&v22);
    *(v0 as &i64) = 0x8000000000000000;
    return a0;
}
