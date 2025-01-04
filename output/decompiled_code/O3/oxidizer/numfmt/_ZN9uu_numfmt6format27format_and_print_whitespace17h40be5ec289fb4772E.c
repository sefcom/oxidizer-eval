fn uu_numfmt::format::format_and_print_whitespace(a0: &u64, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: i64;  // [sp-0x150], Other Possible Types: Arguments
    let v1: i64;  // [sp-0x148]
    let v2: i64;  // [sp-0x140]
    let v3: i128;  // [bp-0x138]
    let v4: i64;  // [sp-0x118]
    let v5: i64;  // [sp-0x110]
    let v6: i128;  // [sp-0x108]
    let v7: i64;  // [sp-0xf8]
    let v8: i64;  // [sp-0xe8]
    let v9: i128;  // [sp-0xe0]
    let v10: i64;  // [sp-0xd0], Other Possible Types: struct32
    let v11: i64;  // [sp-0xb8]
    let v12: struct8;  // [sp-0xa0], Other Possible Types: i64
    let v13: i8;  // [bp-0x98]
    let v14: i8;  // [bp-0x90]
    let v15: i8;  // [bp-0x88]
    let v16: i128;  // [sp-0x78]
    let v17: i64;  // [sp-0x68]
    let v18: i384;  // [sp-0x60], Other Possible Types: struct48
    let v20: i64;  // rdx
    let v21: i64;  // rax
    let v22: i64;  // r13
    let v23: i256;  // ymm0
    let v25: i128;  // xmm0
    let v26: i64;  // r14
    let v27: i64;  // r14
    let v28: i64;  // 4098
    let v29: i128;  // xmm0
    let v30: i128;  // xmm0
    let v31: i64;  // rdx
    let v32: i64;  // rax

    v18 = core::iter::traits::iterator::Iterator::zip(a1, a2);
    v12 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v18, v20);
    v21 = v13;
    if v21 {
        v22 = *((a3 + 184) as &i64);
        v8 = *((a3 + 104) as &i64);
        do {
            v4 = v21;
            v5 = v14;
            v25 = v15;
            v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
            v9 = v25;
            if !uucore::features::ranges::contain() as i8 {
                print!("{:?}{:?}", &v4, &v9);
                v10 = v10;
                v11 = v11;
            } else {
                v26 = v5;
                v27 = v26;
                if v12 > 1 {
                    v0 = " ";
                    v1 = 1;
                    v2 = 8;
                    v23 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v3 = 0;
                    std::io::stdio::_print(&v0);
                    if !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v4, v5) {
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v27 = v20;
                }
                v10 = uu_numfmt::format::format_string(v9, *((&v9 as &char + 8) as &i64), a3, !v22 & v26, v27 + *((&v9 as &char + 8) as &i64));
                v28 = v10;
                v29 = *((&v10 as &char + 8) as &i128);
                v6 = v29;
                v7 = v11;
                if v28 {
                    v32 = v7;
                    return struct24 {
                        field_0: v6
                        field_16: v32
                    };
                }
                v17 = v7;
                v30 = v6;
                v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
                v16 = v30;
                print!("{:?}", &v16);
                v10 = v10;
                v11 = v11;
            }
        } while ((v11 = v11, v10 = v10, v12 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v18, v31), v21 = v13, v21));
    }
    v0 = Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    std::io::stdio::_print(&v0);
    *(a0 as &i64) = 0x8000000000000000;
    return 0x8000000000000000;
}
