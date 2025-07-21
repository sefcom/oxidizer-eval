fn uu_cut::cut_fields_implicit_out_delim(a0: i32, a1: i64, a2: i32, a3: i32, a4: i8, a5: i8) -> long long {
    let v0: u8;  // [bp-0xb2]
    let v1: u8;  // [bp-0xb1]
    let v2: u64;  // [bp-0xb0]
    let v3: struct24;  // [bp-0xa0], Other Possible Types: u64
    let v4: struct28;  // [bp-0x98], Other Possible Types: struct40
    let v5: u64;  // [bp-0x68]
    let v6: u64;  // [bp-0x60]
    let v7: u64;  // [bp-0x58]
    let v8: u128;  // [bp-0x28]
    let v9: i8;  // [bp-0x18]
    let v11: u64;  // rax

    v5 = a2;
    v6 = a3;
    v0 = a4;
    v1 = a5;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0, a3);
    v2 = uu_cut::stdout_writer();
    v4 = struct40 {
        field_0: a1
        field_8: &v0
        field_16: &v2
        field_24: &v1
        field_32: &v5
    };
    v11 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v7, v1, &v4);
    if !v11 {
        return 0;
    }
    v3 = v11;
    v3 = <T as alloc::string::ToString>::to_string(a2);
    v4 = struct28 {
        field_0: v8
        field_16: *(&v9 as &i64)
        field_24: 1
    };
    return alloc::boxed::Box<T>::new(&v4);
}
