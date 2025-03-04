fn uu_cut::cut_bytes(a0: u32, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i8;  // [sp-0xb1]
    let v1: i64;  // [sp-0xb0]
    let v2: struct8;  // [bp-0xa0]
    let v3: struct48;  // [sp-0x98], Other Possible Types: struct24
    let v4: i32;  // [bp-0x80]
    let v5: i64;  // [sp-0x68]
    let v6: i64;  // [sp-0x60]
    let v7: struct48;  // [sp-0x58]
    let v8: struct24;  // [sp-0x28]
    let v14: i64;  // rbx

    v5 = a1;
    v6 = a2;
    v0 = *((a3 + 40) as &i8);
    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v1 = uu_cut::stdout_writer();
    *(&v3.field_0 as &struct48) = struct48 {
        field_0: &v5
        field_8: &v1
        field_16: v12
        field_24: v11
        field_32: a3
        field_40: &v0
    };
    if !bstr::io::BufReadExt::for_byte_record(&v7, v0, &v3) {
        return 0;
    }
    v2 = struct8 {
        field_0: v13
    };
    v8 = <T as alloc::string::ToString>::to_string(&v2);
    *(&v4 as &i32) = 1;
    v3 = v8;
    return v14;
}
