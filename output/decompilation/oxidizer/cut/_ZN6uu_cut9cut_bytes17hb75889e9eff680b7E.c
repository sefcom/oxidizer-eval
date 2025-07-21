fn uu_cut::cut_bytes(a0: i32, a1: i64, a2: i32, a3: i64) -> long long {
    let v0: i8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: struct24;  // [bp-0xa0], Other Possible Types: u64
    let v3: struct28;  // [bp-0x98], Other Possible Types: struct48
    let v4: u64;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: u128;  // [bp-0x58]
    let v7: u64;  // [bp-0x48]
    let v8: struct44;  // [bp-0x40]
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v13: u64;  // rax

    v4 = a1;
    v5 = a2;
    v8 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v1 = uu_cut::stdout_writer();
    v10 = *(a3 as &i64);
    if v10 {
        v11 = v10;
    } else {
        v11 = &g_41dc19;
    }
    v3 = struct48 {
        field_0: &v4
        field_8: &v1
        field_16: v11
        field_24: (v10 ? *((a3 + 8) as &i64) : 1)
        field_32: a3
        field_40: &v0
    };
    v3 = struct48 {
        field_0: &v4
        field_8: &v1
        field_16: v11
        field_24: (v10 ? *((a3 + 8) as &i64) : 1)
        field_32: a3
        field_40: &v0
    };
    v13 = bstr::io::BufReadExt::for_byte_record(&v8, *((a3 + 40) as &i8), &v3);
    if !v13 {
        return 0;
    }
    v2 = v13;
    v2 = <T as alloc::string::ToString>::to_string(a2);
    v3 = struct28 {
        field_0: v6
        field_16: v7
        field_24: 1
    };
    return alloc::boxed::Box<T>::new(&v3);
}
