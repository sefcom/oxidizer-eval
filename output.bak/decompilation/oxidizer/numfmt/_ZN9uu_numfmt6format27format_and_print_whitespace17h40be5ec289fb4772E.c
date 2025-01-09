fn uu_numfmt::format::format_and_print_whitespace(a0: &Option<struct24>, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: Arguments;  // [bp-0x150]
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0x110]
    let v3: i128;  // [sp-0x108]
    let v4: i64;  // [sp-0xf8]
    let v5: i64;  // [sp-0xe8]
    let v6: i128;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd0], Other Possible Types: struct32
    let v8: i64;  // [sp-0xb8]
    let v9: struct8;  // [sp-0xa0], Other Possible Types: i64
    let v10: i8;  // [bp-0x98]
    let v11: i8;  // [bp-0x90]
    let v12: i8;  // [bp-0x88]
    let v13: i128;  // [sp-0x78]
    let v14: i64;  // [sp-0x68]
    let v15: i384;  // [sp-0x60], Other Possible Types: struct48
    let v17: i64;  // rax
    let v19: i256;  // ymm0
    let v21: i128;  // xmm0
    let v22: i64;  // r14
    let v23: i64;  // r14
    let v24: i64;  // rbp
    let v25: i64;  // rbx
    let v26: i64;  // rdx
    let v27: i64;  // 4098
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0

    v15 = core::iter::traits::iterator::Iterator::zip(a1, a2);
    v9 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v15);
    v17 = v10;
    if !v17 {
        v0 = Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        std::io::stdio::_print(&v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v5 = *((a3 + 104) as &i64);
    do {
        v1 = v17;
        v2 = v11;
        v21 = v12;
        v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
        v6 = v21;
        if !uucore::features::ranges::contain() as i8 {
            print!("{:?}{:?}", &v1, &v6);
            v7 = v7;
            v8 = v8;
        } else {
            v22 = v2;
            v23 = v22;
            if v9 > 1 {
                v19 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                print!(" ");
                v24 = v1;
                v25 = v2;
                if !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v24, v25) {
                    core::str::slice_error_fail(v24, v25, 1, v25, "src/uu/numfmt/src/format.rs"); /* do not return */
                }
                v23 = v26;
            }
            v7 = uu_numfmt::format::format_string(v6, *((&v6 as &char + 8) as &i64), a3, !*((a3 + 184) as &i64) & v22, v23 + *((&v6 as &char + 8) as &i64));
            v27 = v7;
            v28 = *((&v7 as &char + 8) as &i128);
            v3 = v28;
            v4 = v8;
            if v27 {
                return Some(struct24 {
                    field_0: v3
                    field_16: v30
                });
            }
            v14 = v4;
            v29 = v3;
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
            v13 = v29;
            print!("{:?}", &v13);
            v7 = v7;
            v8 = v8;
        }
    } while ((v8 = v8, v7 = v7, v9 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v15), v17 = v10, v17));
}
