fn uu_pr::get_formatted_line_number(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xe0]
    let v1: core::fmt::rt::Argument;  // [bp-0xd8], Other Possible Types: u128
    let v2: core::fmt::rt::Argument;  // [bp-0xd8], Other Possible Types: struct24
    let v3: u128;  // [bp-0xd8]
    let v4: core::fmt::rt::Argument;  // [bp-0xc8], Other Possible Types: struct48, u128
    let v5: core::fmt::rt::Argument;  // [bp-0xc8], Other Possible Types: u128
    let v6: core::fmt::rt::Argument;  // [bp-0xb8]
    let v7: u128;  // [bp-0xb8]
    let v8: core::fmt::Arguments;  // [bp-0xa8], Other Possible Types: u8
    let v9: u128;  // [bp-0x78]
    let v10: u64;  // [bp-0x70]
    let v11: struct48;  // [bp-0x68]
    let v12: struct24;  // [bp-0x58]
    let v13: struct24;  // [bp-0x58]
    let v14: struct16;  // [bp-0x40]
    let v17: struct48;  // r14
    let v18: u64;  // rbp
    let v19: struct48;  // r15
    let v22: u64;  // rdx
    let v23: core::result::Result<(), core::fmt::Error>;  // rax

    if (((0 ^ *((a1 + 216) as &i64)) & (0 ^ -(*((a1 + 216) as &i64)))) >> 63) as char {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    if *((a1 + 16) as &i64) {
        if !!a2 && !a3 {
            goto LABEL_537d24;
        }
    } else {
        if a2 {
LABEL_537d24:
            v23 = core::fmt::num::imp::<impl u64>::_fmt(a2, &v8) as u64;
            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v23 as &i64), a2);
            v17 = v4;
            v11 = v17;
            v9 = *(&v2.field_0 as &i128);
            v18 = *((a1 + 240) as &i64);
            v0 = a1 + 216;
            v19 = v17;
            if v19 >= v18 {
                v14 = struct16 {
                    field_0: core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v19 - v18, v10, v17) as u64
                    field_8: v22
                };
                if v18 > 65535 {
                    panic!("Formatting argument out of range");
                }
                v1 = core::fmt::rt::Argument {
                    ty: &v14
                };
                v4 = core::fmt::rt::Argument {
                    ty: &v0
                };
                v6 = core::fmt::rt::Argument {
                    ty: 0
                };
                v8 = core::fmt::Arguments {
                    pieces: [&g_456960, &g_456970]
                    args: [v3, v5, v7]
                    fmt: &g_458388
                };
                v13 = core::option::Option<T>::map_or_else(&v8);
            } else if v18 <= 65535 {
                v2 = core::fmt::rt::Argument {
                    ty: &v9 as u8
                };
                v5 = core::fmt::rt::Argument {
                    ty: &v0
                };
                v6 = core::fmt::rt::Argument {
                    ty: 0
                };
                v8 = core::fmt::Arguments {
                    pieces: [&g_456960, &g_456970]
                    args: [v1, v4, v7]
                    fmt: &g_458388
                };
                v12 = core::option::Option<T>::map_or_else(&v8);
            } else {
                panic!("Formatting argument out of range");
            }
            return v13;
        }
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
}
