fn ruff_python_formatter::comments::placement::handle_parameters_separator_comment(a0: i64, a1: void*, a2: u32, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: u128;  // [bp-0x88]
    let v1: u32;  // [bp-0x78]
    let v2: u128;  // [bp-0x68]
    let v3: u32;  // [bp-0x58]
    let v4: struct40;  // [bp-0x48]
    let v5: u32;  // [bp-0x38]
    let v6: u128;  // [bp-0x34]
    let v8: core::fmt::Arguments;  // rdi
    let v9: i64;  // rsi
    let v10: u32;  // ebp
    let v11: struct24;  // r15b
    let v13: u128;  // xmm0
    let v14: struct16;  // xmm1
    let v15: iNone;  // xmm2
    let v16: u64;  // rax

    v4 = ruff_python_formatter::other::parameters::find_parameter_separators(a3, a4, a2, a4, a5);
    v1 = v5;
    v0 = *(&v4.field_0 as &i128);
    v3 = v4.field_36;
    v8 = &v0;
    v2 = v6;
    v9 = &v2;
    v10 = a1[64] as i32;
    v11 = a1[72] as i8;
    if ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement(v8, v9, v10, v11) != 4 {
        v16 = a1[68] as i32;
        return struct40 {
            field_0: 96
            field_8: *(a1 as &i128)
            field_24: v10
            field_28: v16 as u32
            field_32: 0
            field_33: v11
        };
    }
    v13 = *(a1 as &i128);
    v14 = a1[16] as i128;
    v15 = a1[32] as i128;
    return struct80 {
        field_0: v13
        field_16: v14
        field_32: v15
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}
