fn uu_cut::cut_fields_implicit_out_delim(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8, a5: i8) -> u64 {
    let v0: i8;  // [sp-0xb2]
    let v2: i64;  // [sp-0xb0]
    let v3: struct8;  // [bp-0xa0]
    let v4: i224;  // [bp-0x98], Other Possible Types: struct40
    let v5: i64;  // [sp-0x68]
    let v6: i64;  // [sp-0x60]
    let v7: struct48;  // [sp-0x58], Other Possible Types: i384
    let v8: i192;  // [sp-0x28], Other Possible Types: struct24

    v5 = a2;
    v6 = a3;
    v0 = a4;
    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v2 = uu_cut::stdout_writer();
    v4 = struct40 {
        field_0: a1
        field_8: &v0
        field_16: &v2
        field_24: &v1
        field_32: &v5
    };
    if !bstr::io::BufReadExt::for_byte_record_with_terminator(&v7, a5, &v4) {
        return 0;
    }
    v3 = struct8 {
        field_0: v10
    };
    v8 = <T as alloc::string::ToString>::to_string(&v3);
    v4 = v8;
    return alloc::boxed::Box<T>::new(&v4);
}
