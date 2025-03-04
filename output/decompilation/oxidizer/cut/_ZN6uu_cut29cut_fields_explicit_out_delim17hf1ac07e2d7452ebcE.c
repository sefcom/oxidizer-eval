fn uu_cut::cut_fields_explicit_out_delim(a0: u32, a1: u32, a2: u32, a3: u32, a4: u8, a5: u8, a6: u32, a7: u32) -> u64 {
    let v0: i8;  // [sp-0xc2]
    let v2: i64;  // [sp-0xc0]
    let v3: struct8;  // [bp-0xb0]
    let v4: struct24;  // [sp-0xa8], Other Possible Types: struct56
    let v5: i32;  // [bp-0x90]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: struct48;  // [sp-0x58]
    let v9: struct24;  // [sp-0x28]
    let v11: i64;  // rbx

    v6 = a2;
    v7 = a3;
    v0 = a4;
    v8 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v2 = uu_cut::stdout_writer();
    v4 = struct56 {
        field_0: a1
        field_8: &v0
        field_16: &v2
        field_24: &v1
        field_32: &v6
        field_40: a6
        field_48: a7
    };
    if !bstr::io::BufReadExt::for_byte_record_with_terminator(&v8, a5, &v4) {
        return 0;
    }
    v3 = struct8 {
        field_0: v10
    };
    v9 = <T as alloc::string::ToString>::to_string(&v3);
    *(&v5 as &i32) = 1;
    v4 = v9;
    return v11;
}
