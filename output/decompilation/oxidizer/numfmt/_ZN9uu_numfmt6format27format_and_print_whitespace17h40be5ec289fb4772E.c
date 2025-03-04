fn uu_numfmt::format::format_and_print_whitespace(a0: &Option<struct24>, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: Arguments;  // [bp-0x150]
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0x110]
    let v3: iNone;  // [sp-0x108]
    let v4: i64;  // [sp-0xf8]
    let v5: i64;  // [sp-0xe8]
    let v6: iNone;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd0], Other Possible Types: struct32
    let v8: i64;  // [sp-0xb8]
    let v9: struct8;  // [sp-0xa0]
    let v10: i8;  // [bp-0x98]
    let v11: i8;  // [bp-0x90]
    let v12: i8;  // [bp-0x88]
    let v13: iNone;  // [sp-0x78]
    let v14: i64;  // [sp-0x68]
    let v15: struct48;  // [sp-0x60]
    let v18: i64;  // rax
    let v20: iNone;  // ymm0
    let v22: iNone;  // xmm0
    let v23: i64;  // r9
    let v24: i64;  // r9
    let v25: i64;  // rdx
    let v27: i64;  // 4098
    let v28: iNone;  // xmm0
    let v29: iNone;  // xmm0

    v15 = core::iter::traits::iterator::Iterator::zip(a1, a2);
    v9 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v15);
    v18 = *(&v10 as &i64);
    if !v18 {
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
        v1 = v18;
        v2 = *(&v11 as &i64);
        v22 = *(&v12 as &i128);
        v20 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256;
        v6 = v22;
        if !uucore::features::ranges::contain() as i8 {
            print!("{}{}", &v1, &v6);
        } else {
            v23 = v2;
            v24 = v23;
            if v9.field_0 > 1 {
                v20 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                print!(" ");
                v24 = v25;
            }
            v7 = uu_numfmt::format::format_string(v6 as i64, (&v6)[8] as i64, a3, !*((a3 + 184) as &i64) & v23, v24 + (&v6)[8] as i64);
            v27 = v7;
            v28 = v7.field_8;
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
            v20 = (v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256;
            v13 = v29;
            print!("{}", &v13);
        }
    } while ((v9 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v15), v18 = *(&v10 as &i64), v18));
}
