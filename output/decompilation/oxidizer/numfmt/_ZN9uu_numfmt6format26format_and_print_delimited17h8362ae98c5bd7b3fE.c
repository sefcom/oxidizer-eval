fn uu_numfmt::format::format_and_print_delimited(a0: &Option<struct24>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x1e8]
    let v1: i64;  // [sp-0x1e0]
    let v2: iNone;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1c8]
    let v4: i64;  // [sp-0x1b8]
    let v5: struct24;  // [sp-0x1b0], Other Possible Types: int
    let v6: struct32;  // [sp-0x198], Other Possible Types: unsigned long
    let v7: Result<struct104, struct43>;  // [sp-0x168]
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [sp-0xf8]
    let v10: i16;  // [sp-0xf0]
    let v11: iNone;  // [sp-0xe8]
    let v12: i64;  // [sp-0xd8]
    let v13: Arguments;  // [bp-0xd0], Other Possible Types: struct160
    let v15: i64;  // rcx
    let v16: i64;  // rax
    let v19: iNone;  // ymm0
    let v20: i64;  // r14
    let v21: i8;  // al
    let v22: i64;  // r9
    let v23: i64;  // 4098
    let v24: iNone;  // xmm0
    let v25: iNone;  // xmm0

    if *((v15 + 112) as &i64) == 0x8000000000000000 {
        core::option::unwrap_failed("src/uu/numfmt/src/format.rs"); /* do not return */
    }
    v4 = v15 + 112;
    v7 = <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(v15 + 112, a1, a2);
    v8 = 0;
    v9 = a2;
    v10 = 1;
    v13 = core::iter::traits::iterator::Iterator::zip(&v7);
    v5 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v13);
    v16 = v5.field_8;
    if !v16 {
        v13 = Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        std::io::stdio::_print(&v13);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    do {
        v20 = v5 as i64;
        v0 = v16;
        v1 = v5.field_16;
        v21 = uucore::features::ranges::contain(*((v15 + 96) as &i64), *((v15 + 104) as &i64), v20);
        if v20 > 1 {
            print!("{}", &v4);
        }
        if !v21 {
            print!("{}", &v0);
        } else {
            v6 = uu_numfmt::format::format_string(core::str::<impl str>::trim_start_matches(v0, v1), a2, v15, 0, v22);
            v23 = v6;
            v24 = v6.field_8;
            v2 = v24;
            v3 = v6.field_24;
            if v23 {
                return Some(struct24 {
                    field_0: v2
                    field_16: v26
                });
            }
            v12 = v3;
            v25 = v2;
            v19 = (v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256;
            v11 = v25;
            print!("{}", &v11);
        }
        v5 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v13);
        v16 = v5.field_8;
    } while (v16);
}
