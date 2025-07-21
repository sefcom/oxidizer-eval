fn uu_numfmt::format::format_and_print_whitespace(a1: i64, a2: i64, a3: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x158]
    let v1: core::fmt::Arguments;  // [bp-0x150]
    let v2: u64;  // [bp-0x138]
    let v3: u64;  // [bp-0x138]
    let v4: i64;  // [bp-0x120]
    let v5: u64;  // [bp-0x118]
    let v6: u64;  // [bp-0x110]
    let v7: u128;  // [bp-0x108]
    let v8: u64;  // [bp-0xf8]
    let v9: u64;  // [bp-0xe8]
    let v10: u128;  // [bp-0xe0]
    let v11: u64;  // [bp-0xd8]
    let v12: u64;  // [bp-0xd0]
    let v13: u64;  // [bp-0xd0]
    let v14: u64;  // [bp-0xc8]
    let v15: u64;  // [bp-0xc8]
    let v16: u64;  // [bp-0xc8]
    let v17: u64;  // [bp-0xb8]
    let v18: u64;  // [bp-0xb8]
    let v19: struct8;  // [bp-0xa0], Other Possible Types: u64
    let v20: u64;  // [bp-0x98]
    let v21: u64;  // [bp-0x98]
    let v22: u64;  // [bp-0x90]
    let v23: u128;  // [bp-0x88]
    let v24: u128;  // [bp-0x78]
    let v25: u64;  // [bp-0x68]
    let v26: struct48;  // [bp-0x60]
    let v28: struct17;  // rbp
    let v29: u64;  // r15
    let v30: u64;  // r12
    let v31: u64;  // r13
    let v32: u64;  // r9
    let v33: u64;  // rdx

    v28 = a3;
    v26 = core::iter::traits::iterator::Iterator::zip(a1, a2);
    v19 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v26);
    if v20 {
        v29 = *((a3 + 96) as &i64);
        v30 = *((a3 + 104) as &i64);
        v31 = *((a3 + 184) as &i64);
        v9 = v30;
        v21 = v20;
        do {
            v5 = v21;
            v6 = v22;
            v10 = v23;
            if !uucore::features::ranges::contain(v29, v9, v19) as i8 {
                print!("{}{}", &v5, &v10 as u8);
                v12 = v13;
                v16 = v15;
                v17 = v18;
                v2 = v3;
            } else {
                v32 = v6;
                if v19 > 1 {
                    print!(" ");
                    v32 = v33;
                }
                uu_numfmt::format::format_string(v10 as i64, v11, v28, !v31 & v6, v32 + v11, *(&v0 as &i64));
                v7 = *(&v16 as &i128);
                v8 = v17;
                if v12 {
                    *((v4 + 16) as &u64) = v8;
                    *(v4 as &u128) = v7;
                    return v8;
                }
                v25 = v8;
                v24 = v7;
                print!("{}", &v24);
                v16 = v14;
                v2 = v3;
            }
            v14 = v16;
            v19 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v26);
            v21 = v20;
        } while (v21);
    }
    v1 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    std::io::stdio::_print(&v1);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
