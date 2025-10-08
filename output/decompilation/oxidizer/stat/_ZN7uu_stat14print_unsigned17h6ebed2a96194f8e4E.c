fn uu_stat::print_unsigned(a0: u64, a1: u32, a2: u32, a3: u64, a4: u64, a5: u64, a6: u8) -> void {
    let v0: u128;  // [bp-0xe8]
    let v1: core::fmt::rt::Argument;  // [bp-0xe0], Other Possible Types: u64
    let v2: struct24;  // [bp-0xd8]
    let v3: u8;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc8]
    let v5: u64;  // [bp-0xc0]
    let v6: u64;  // [bp-0xb8]
    let v7: core::fmt::Arguments;  // [bp-0xb0], Other Possible Types: u8
    let v8: struct24;  // [bp-0x80]
    let v9: u64;  // [bp-0x78]
    let v10: u64;  // [bp-0x70]
    let v11: core::fmt::rt::Argument;  // [bp-0x68]
    let v12: struct24;  // [bp-0x68]
    let v13: core::fmt::rt::Argument;  // [bp-0x58]
    let v14: u128;  // [bp-0x58]
    let v15: struct24;  // [bp-0x48]
    let v17: u8;  // r12b
    let v18: core::result::Result<(), core::fmt::Error>;  // rax

    v18 = core::fmt::num::imp::<impl usize>::_fmt(a0, &v7) as u64;
    v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v18 as &i64), a2);
    if (a2 & 1) {
        uu_stat::group_num(&v3, v9, v10, a3);
        v17 = a6;
        if !a4 {
            goto LABEL_474bbd;
        }
LABEL_474b5e:
        if a4 == 1 {
            v0 = *(&v4 as &i128);
            v2 = v6;
            if v0 as i64 != 0x8000000000000000 {
                goto LABEL_474ca9;
            }
            uu_stat::pad_and_print(v1, v2, a1, a3, v17);
        } else {
            if a5 > 65535 {
                panic!("Formatting argument out of range");
            }
            v11 = core::fmt::rt::Argument {
                ty: &v3
            };
            v13 = core::fmt::rt::Argument {
                ty: 0
            };
            v7 = core::fmt::Arguments {
                pieces: [&g_41ab40]
                args: [v12, v14]
                fmt: &g_41d388
            };
            v15 = core::option::Option<T>::map_or_else(&v7);
            v0 = *(&v15.field_0 as &i128);
            v2 = v15.field_16;
LABEL_474ca9:
            uu_stat::pad_and_print(v1, v2, a1, a3, v17);
        }
    } else {
        v5 = v9;
        v6 = v10;
        v4 = 0x8000000000000000;
        v17 = a6;
        if a4 {
            goto LABEL_474b5e;
        }
LABEL_474bbd:
        v0 = *(&v4 as &i128);
        v2 = v6;
        if v0 as i64 != 0x8000000000000000 {
            goto LABEL_474ca9;
        }
        uu_stat::pad_and_print(v1, v2, a1, a3, v17);
    }
    return;
}
