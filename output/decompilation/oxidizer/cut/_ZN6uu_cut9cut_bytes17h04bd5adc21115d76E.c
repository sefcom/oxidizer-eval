fn uu_cut::cut_bytes(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa0]
    let v3: struct28;  // [bp-0x98], Other Possible Types: struct48
    let v4: u64;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: struct48;  // [bp-0x58]
    let v7: struct24;  // [bp-0x28]
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v12: u64;  // rax

    v4 = a1;
    v5 = a2;
    v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v1 = uu_cut::stdout_writer();
    v9 = *(a3 as &i64);
    if v9 {
        v10 = v9;
    } else {
        v10 = &g_41dc19;
    }
    v3 = struct48 {
        field_0: &v4
        field_8: &v1
        field_16: v10
        field_24: (v9 ? *((a3 + 8) as &i64) : 1)
        field_32: a3
        field_40: &v0
    };
    v3 = struct48 {
        field_0: &v4
        field_8: &v1
        field_16: v10
        field_24: (v9 ? *((a3 + 8) as &i64) : 1)
        field_32: a3
        field_40: &v0
    };
    v12 = bstr::io::BufReadExt::for_byte_record(&v6, *((a3 + 40) as &i8), &v3);
    if !v12 {
        return 0;
    }
    v2 = v12;
    v7 = <T as alloc::string::ToString>::to_string(&v2);
    v3 = struct28 {
        field_0: v7.field_0
        field_16: v7.field_16
        field_24: 1
    };
    return alloc::boxed::Box<T>::new(&v3);
}
