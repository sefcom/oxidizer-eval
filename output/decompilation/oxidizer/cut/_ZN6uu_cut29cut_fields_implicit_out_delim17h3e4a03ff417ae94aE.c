fn uu_cut::cut_fields_implicit_out_delim(a0: i32, a1: i64, a2: i32, a3: i64, a4: i8, a5: i8) -> long long {
    let v0: u8;  // [bp-0xb2]
    let v1: u8;  // [bp-0xb1]
    let v2: u64;  // [bp-0xb0]
    let v3: u64;  // [bp-0xa0]
    let v4: struct24;  // [bp-0xa0]
    let v5: u320;  // [bp-0x98]
    let v6: u64;  // [bp-0x88]
    let v7: u32;  // [bp-0x80]
    let v8: u64;  // [bp-0x68]
    let v9: u64;  // [bp-0x60]
    let v10: u8;  // [bp-0x58]
    let v11: u64;  // [bp-0x48]
    let v12: u64;  // [bp-0x40]
    let v14: u64;  // rax

    v8 = a2;
    v9 = a3;
    v0 = a4;
    v1 = a5;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0, a3);
    v2 = uu_cut::stdout_writer();
    v5 = struct40 {
        field_0: a1
        field_8: &v0
        field_16: &v2
        field_24: &v1
        field_32: &v8
    };
    v14 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v12, v1, &v5);
    if !v14 {
        return 0;
    }
    v3 = v14;
    v4 = <T as alloc::string::ToString>::to_string(a2);
    v7 = 1;
    memcpy(&v5, &v10, 16);
    v6 = v11;
    return alloc::boxed::Box<T>::new(&v5);
}
