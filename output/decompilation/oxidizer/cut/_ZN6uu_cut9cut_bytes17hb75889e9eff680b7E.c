fn uu_cut::cut_bytes(a0: i32, a1: i64, a2: i32, a3: i64) -> long long {
    let v0: i8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa0]
    let v3: struct24;  // [bp-0xa0]
    let v4: u384;  // [bp-0x98]
    let v5: u64;  // [bp-0x88]
    let v6: u32;  // [bp-0x80]
    let v7: u64;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: u8;  // [bp-0x58]
    let v10: u64;  // [bp-0x48]
    let v11: struct44;  // [bp-0x40]
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v16: u64;  // rax

    v7 = a1;
    v8 = a2;
    v11 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v1 = uu_cut::stdout_writer();
    v13 = *(a3 as &i64);
    if v13 {
        v14 = v13;
    } else {
        v14 = &g_41dc19;
    }
    v4 = struct48 {
        field_0: &v7
        field_8: &v1
        field_16: v14
        field_24: (v13 ? *((a3 + 8) as &i64) : 1)
        field_32: a3
        field_40: &v0
    };
    v16 = bstr::io::BufReadExt::for_byte_record(&v11, *((a3 + 40) as &i8), &v4);
    if !v16 {
        return 0;
    }
    v2 = v16;
    v3 = <T as alloc::string::ToString>::to_string(a2);
    v6 = 1;
    memcpy(&v4, &v9, 16);
    v5 = v10;
    return alloc::boxed::Box<T>::new(&v4);
}
