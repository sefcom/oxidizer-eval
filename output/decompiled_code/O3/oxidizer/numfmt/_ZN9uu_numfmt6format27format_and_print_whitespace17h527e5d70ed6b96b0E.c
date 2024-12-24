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
    let v11: struct8;  // [sp-0xa0], Other Possible Types: i64
    let v12: i8;  // [bp-0x98]
    let v13: i8;  // [bp-0x90]
    let v14: i8;  // [bp-0x88]
    let v15: i128;  // [sp-0x78]
    let v16: i64;  // [sp-0x68]
    let v17: struct48;  // [sp-0x60], Other Possible Types: i384
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v22: i64;  // r12
    let v23: i64;  // r13
    let v24: i256;  // ymm0
    let v25: i64;  // rbx
    let v26: i128;  // xmm0
    let v27: i64;  // r14
    let v28: i64;  // r12
    let v29: i64;  // r14
    let v30: i64;  // 4098
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i64;  // rdx
    let v34: i64;  // rax

    v17 = core::iter::traits::iterator::Iterator::zip(a1, a2);
    v11 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v17, v19);
    v20 = v12;
    if v20 {
        v22 = *((a3 + 104) as &i64);
        v23 = *((a3 + 184) as &i64);
        v8 = v22;
        do {
            v25 = v11;
            v4 = v20;
            v5 = v13;
            v26 = v14;
            v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
            v9 = v26;
            if !uucore::features::ranges::contain(*((a3 + 96) as &i64), v22, v25) as i8 {
                print!("{:?}{:?}", &v4, &v9);
                v10 = v10;
            } else {
                v27 = v5;
                if v25 > 1 {
                    v0 = " ";
                    v1 = 1;
                    v2 = 8;
                    v24 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v3 = 0;
                    std::io::stdio::_print(&v0);
                    if !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v4, v5) {
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v28 = v8;
                }
                v10 = uu_numfmt::format::format_string(v9, *((&v9 as &char + 8) as &i64), a3, !v23 & v27, v29 + *((&v9 as &char + 8) as &i64));
                v30 = v10;
                v31 = *((&v10 as &char + 8) as &i128);
                v6 = v31;
                v7 = v10.field_24;
                if v30 {
                    v34 = v7;
                    return struct24 {
                        field_0: v6
                        field_16: v34
                    };
                }
                v16 = v7;
                v32 = v6;
                v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
                v15 = v32;
                print!("{:?}", &v15);
                v10 = v10;
            }
        } while ((v10 = v10, v11 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v17, v33), v20 = v12, v20));
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
