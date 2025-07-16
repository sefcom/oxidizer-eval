fn uu_cut::cut_fields_explicit_out_delim(a0: i32, a1: i64, a2: i32, a3: i32, a4: i8, a5: i8, a6: i64, a7: i64) -> long long {
    let v0: u8;  // [bp-0xc2]
    let v1: u8;  // [bp-0xc1]
    let v2: u64;  // [bp-0xc0]
    let v3: u64;  // [bp-0xb0]
    let v4: struct24;  // [bp-0xb0]
    let v5: u448;  // [bp-0xa8]
    let v6: u64;  // [bp-0x98]
    let v7: u32;  // [bp-0x90]
    let v8: u64;  // [bp-0x68]
    let v9: u64;  // [bp-0x60]
    let v10: u64;  // [bp-0x58]
    let v11: u8;  // [bp-0x28]
    let v12: i8;  // [bp-0x18]
    let v13: u64;  // rax

    v8 = a2;
    v9 = a3;
    v0 = a4;
    v1 = a5;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0, a3);
    v2 = uu_cut::stdout_writer();
    v5 = struct56 {
        field_0: a1
        field_8: &v0
        field_16: &v2
        field_24: &v1
        field_32: &v8
        field_40: a6
        field_48: a7
    };
    v13 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v10, v1, &v5);
    if !v13 {
        return 0;
    }
    v3 = v13;
    v4 = <T as alloc::string::ToString>::to_string(a2);
    v7 = 1;
    memcpy(&v5, &v11, 16);
    v6 = *(&v12 as &i64);
    return alloc::boxed::Box<T>::new(&v5);
}
