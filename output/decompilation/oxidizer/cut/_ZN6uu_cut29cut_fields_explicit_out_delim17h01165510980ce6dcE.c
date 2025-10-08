fn uu_cut::cut_fields_explicit_out_delim(a0: u32, a1: u64, a2: u64, a3: u64, a4: u64, a5: u8, a6: u32, a7: i32) -> long long {
    let v0: u8;  // [bp-0xc1]
    let v1: u64;  // [bp-0xc0]
    let v2: struct28;  // [bp-0xb8], Other Possible Types: struct56
    let v3: u64;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: struct24;  // [bp-0x68]
    let v6: u64;  // [bp-0x58]
    let v7: struct48;  // [bp-0x50]
    let v8: u64;  // rax
    let v9: void*;  // rax

    v3 = a3;
    v4 = a4;
    v0 = a5;
    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(a0);
    v2 = struct56 {
        field_0: a2
        field_8: &v0
        field_16: a1
        field_24: &vvar_6
        field_32: &v3
        field_40: vvar_7
    };
    v8 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v7, a6, &v2);
    if v8 {
        v1 = v8;
        v5 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
        v2 = struct28 {
            field_0: v5.field_0
            field_16: v6
            field_24: 1
        };
        v9 = alloc::boxed::Box<T>::new(&v2) as u64;
    }
    return v9;
}
