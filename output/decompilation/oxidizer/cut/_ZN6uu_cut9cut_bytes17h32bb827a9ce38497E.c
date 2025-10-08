fn uu_cut::cut_bytes(a0: u32, a1: u64, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: u8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: struct28;  // [bp-0xa8], Other Possible Types: struct48
    let v3: u64;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: struct24;  // [bp-0x68]
    let v6: u64;  // [bp-0x58]
    let v7: struct44;  // [bp-0x50]
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v12: u64;  // rax
    let v13: void*;  // rax

    v3 = a2;
    v4 = a3;
    v0 = *((a4 + 40) as &i32);
    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(a0);
    v9 = *(a4 as &i64);
    if v9 {
        v10 = v9;
    } else {
        v10 = &g_41ec79;
    }
    v2 = struct48 {
        field_0: &v3
        field_8: a1
        field_16: v10
        field_24: (v9 ? *((a4 + 8) as &i64) : 1)
        field_32: a4
        field_40: &v0
    };
    v12 = bstr::io::BufReadExt::for_byte_record(&v7, v0, &v2);
    if v12 {
        v1 = v12;
        v5 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
        v2 = struct28 {
            field_0: v5.field_0
            field_16: v6
            field_24: 1
        };
        v13 = alloc::boxed::Box<T>::new(&v2) as u64;
    }
    return v13;
}
