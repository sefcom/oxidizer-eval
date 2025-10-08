fn ruff_python_formatter::string::docstring::CodeExampleRst::new(a1: i64, a2: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: struct12;  // [bp-0x88]
    let v1: Result<struct8, struct12>;  // [bp-0x80], Other Possible Types: struct32
    let v2: Option<struct45>;  // [bp-0x80]
    let v3: u64;  // [bp-0x80]
    let v4: u64;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: u64;  // [bp-0x68]
    let v7: struct16;  // [bp-0x60]
    let v8: u128;  // [bp-0x50]
    let v9: i8;  // [bp-0x40]
    let v11: struct12;  // xmm0
    let v12: struct16;  // xmm1
    let v13: u64;  // rdx

    v1 = ruff_python_formatter::string::docstring::indent_with_suffix(a1, a2);
    v0 = v1.field_0;
    if core::slice::<impl [T]>::starts_with(v5, v6, ".. ") {
        v2 = ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block(a1, a2);
        if !((((0 ^ v2 as i64) & (0 ^ -(v3))) >> 63) as char) {
            v11 = v2 as i128;
            v12 = *((&v2 as &char + 16) as &i128);
            return struct80 {
                field_0: v11
                field_16: v12
                field_32: v7
                field_48: v8
                field_64: *(&v9 as &i128)
            };
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else if core::slice::<impl [T]>::ends_with(core::str::<impl str>::trim_end_matches(v5, v6), v13, "::") {
        v1 = ruff_python_formatter::string::docstring::Indentation::from_str(v0, v4);
        return struct56 {
            field_0: 0
            field_8: 8
            field_16: 0
            field_24: v1 as i128
            field_40: v5
            field_48: 5
            padding_56: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    } else {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
