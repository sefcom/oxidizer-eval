fn uu_numfmt::format::format_and_print_whitespace(a0: i64, a1: u64, a2: u64, a3: i64) -> long long {
    let v0: u8;  // [bp-0x159]
    let v1: u32;  // [bp-0x158]
    let v2: i64;  // [bp-0x140]
    let v3: i64;  // [bp-0x140]
    let v4: u64;  // [bp-0x128]
    let v5: iNone;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: core::fmt::Arguments;  // [bp-0x118]
    let v8: u64;  // [bp-0x100]
    let v9: void*;  // [bp-0xf8]
    let v10: u64;  // [bp-0xf0]
    let v11: u64;  // [bp-0xe0]
    let v12: u64;  // [bp-0xd8]
    let v13: u32;  // [bp-0xd0]
    let v14: i32;  // [sp-0xd0]
    let v15: u64;  // [bp-0xc8]
    let v16: u64;  // [bp-0xc8]
    let v17: u64;  // [bp-0xc0]
    let v18: u64;  // [bp-0xb8]
    let v19: void*;  // [bp-0xb0]
    let v20: u64;  // [bp-0xa8]
    let v21: Result<struct24, struct24>;  // [bp-0xa8]
    let v22: u64;  // [bp-0xa8]
    let v23: core::fmt::Arguments;  // [bp-0xa0]
    let v24: core::fmt::Arguments;  // [bp-0xa0]
    let v25: core::fmt::Arguments;  // [bp-0x90]
    let v26: core::fmt::Arguments;  // [bp-0x90]
    let v27: iNone;  // [bp-0x78]
    let v28: core::fmt::Arguments;  // [bp-0x68]
    let v29: struct48;  // [bp-0x60]
    let v31: u64;  // rbx
    let v32: u64;  // r14
    let v33: u64;  // r12
    let v34: void*;  // r15
    let v35: u64;  // r9
    let v38: i64;  // rdx
    let v41: u8;  // cl
    let v42: &mut [u8];  // rax:rdx

    v29 = core::iter::traits::iterator::Iterator::zip(a1, a2);
    v13 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v29);
    if v15 {
        v12 = *((a3 + 96) as &i64);
        v11 = *((a3 + 104) as &i64);
        v0 = *((a3 + 200) as &i8);
        v10 = *((a3 + 184) as &i64);
        v16 = v15;
        do {
            v31 = v16;
            v32 = v17;
            v33 = v18;
            v34 = v19;
            v8 = v33;
            v9 = v34;
            if uucore::features::ranges::contain(v12, v11, *(&v13 as &i64)) {
                v35 = v32;
                if *(&v13 as &i64) > 1 {
                    print!(" ");
                    v35 = v38;
                    v33 = v8;
                    v34 = v9;
                }
                v21 = uu_numfmt::format::format_string(v33, v34, a3, !v10 & v32, v35 + v34);
                *(&v5 as &i128) = *((&v21 as &char + 8) as &i128);
                v7 = v25;
                match v21 {
                    Err(_) => {
                        return struct24 {
                            field_0: v5 as i128
                            field_16: v7
                        };
                    },
                    Ok(_) => {
                        v28 = v7;
                        v27 = v5 as i128;
                        print!("{}", &v27);
                        v2 = v3;
                    },
                }
            } else {
                if (v0 & 1) {
                    v1 = 0;
                    v42 = core::char::methods::encode_utf8_raw(10, &v1, a2);
                    if core::slice::<impl [T]>::starts_with(v31, v32, v42.data_ptr, a3) {
                        print!(" ");
                        v31 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v31, v32) as u64;
                        v32 = v38;
                    }
                }
                v4 = v31;
                v6 = v32;
                print!("{}{}", &v4, &v8);
                v2 = v3;
                v20 = v22;
                v23 = v24;
                v25 = v26;
            }
            v13 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v29);
            v16 = v15;
        } while (v16);
    }
    v14 = ((v41 & 1) ? 0 : 10);
    print!("{}", &v14);
    *(a0 as &i64) = 0x8000000000000000;
    return 0x8000000000000000;
}
