fn uu_cut::cut_bytes(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa0]
    let v3: u384;  // [bp-0x98]
    let v4: u64;  // [bp-0x88]
    let v5: u32;  // [bp-0x80]
    let v6: u64;  // [bp-0x68]
    let v7: u64;  // [bp-0x60]
    let v8: struct48;  // [bp-0x58]
    let v9: struct24;  // [bp-0x28]
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v14: u64;  // rax

    v6 = a1;
    v7 = a2;
    v8 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v1 = uu_cut::stdout_writer();
    v11 = *(a3 as &i64);
    if v11 {
        v12 = v11;
    } else {
        v12 = &g_41dc19;
    }
    v3 = struct48 {
        field_0: &v6
        field_8: &v1
        field_16: v12
        field_24: (v11 ? *((a3 + 8) as &i64) : 1)
        field_32: a3
        field_40: &v0
    };
    v14 = bstr::io::BufReadExt::for_byte_record(&v8, *((a3 + 40) as &i8), &v3);
    if !v14 {
        return 0;
    }
    v2 = v14;
    v9 = <T as alloc::string::ToString>::to_string(&v2);
    v5 = 1;
    memcpy(&v3, &v9, 16);
    v4 = v9.field_16;
    return alloc::boxed::Box<T>::new(&v3);
}
