fn uu_stat::print_integer(a0: u32, a1: i64, a2: u64, a3: u64, a4: u64, a5: u8) -> void {
    let v0: iNone;  // [bp-0xe8], Other Possible Types: u128
    let v1: core::fmt::rt::Argument;  // [bp-0xe8]
    let v2: u64;  // [bp-0xe0]
    let v3: core::fmt::rt::Argument;  // [bp-0xd8], Other Possible Types: u64
    let v4: u128;  // [bp-0xd8]
    let v5: core::fmt::rt::Argument;  // [bp-0xc8]
    let v6: u128;  // [bp-0xc8]
    let v8: core::option::Option<&str>;  // [bp-0xb0]
    let v11: iNone;  // [bp-0x98], Other Possible Types: struct24, alloc::string::String
    let v12: u64;  // [bp-0x88]
    let v13: core::fmt::Arguments;  // [bp-0x80]
    let v14: struct16;  // [bp-0x50]
    let v15: struct24;  // [bp-0x40]
    let v16: u64;  // [bp-0x38]
    let v18: u64;  // rax
    let v19: u64;  // rsi

    v15 = <i64 as alloc::string::SpecToString>::spec_to_string(a0);
    if *((a1 + 5) as &i8) {
        uu_stat::group_num(&v8 as u8, v16, v15.field_16, a3);
    }
    v14 = struct16 {
        field_0: v19
        field_8: v18
    };
    if !a3 {
        v11 = format!("{}{}", &v14, &v8 as u8);
    } else if a3 == 1 {
        v11 = format!("{}{}", &v14, &v8 as u8);
    } else if a4 <= 65535 {
        v1 = core::fmt::rt::Argument {
            ty: &v14
        };
        v3 = core::fmt::rt::Argument {
            ty: &v8 as u8
        };
        v5 = core::fmt::rt::Argument {
            ty: 0
        };
        v13 = core::fmt::Arguments {
            pieces: [&g_41cfd0, &g_41cfe0]
            args: [v0, v4, v6]
            fmt: &g_41d528
        };
        v11 = core::option::Option<T>::map_or_else(&v13);
    } else {
        panic!("Formatting argument out of range");
    }
    v0 = v11;
    v3 = v12;
    uu_stat::pad_and_print(v2, v3, *((a1 + 2) as &i8), a2, a5);
    return;
}
