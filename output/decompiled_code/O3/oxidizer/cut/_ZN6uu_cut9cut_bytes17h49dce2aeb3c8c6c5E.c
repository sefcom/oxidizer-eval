fn uu_cut::cut_bytes(a0: i32, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i8;  // [sp-0xb1]
    let v1: i64;  // [sp-0xb0]
    let v2: struct8;  // [bp-0xa0]
    let v3: struct48;  // [bp-0x98], Other Possible Types: struct28
    let v4: i64;  // [sp-0x68]
    let v5: i64;  // [sp-0x60]
    let v6: struct24;  // [sp-0x58]
    let v7: struct44;  // [sp-0x40], Other Possible Types: i352
    let v9: i64;  // rax

    v4 = a1;
    v5 = a2;
    v0 = *((a3 + 40) as &i8);
    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v1 = uu_cut::stdout_writer();
    v9 = *(a3 as &i64);
    v3 = struct48 {
        field_0: &v4
        field_8: &v1
        field_16: v10
        field_24: v11
        field_32: a3
        field_40: &v0
    };
    if !bstr::io::BufReadExt::for_byte_record(&v7, v0, &v3) {
        return 0;
    }
    v2 = struct8 {
        field_0: v12
    };
    v6 = <T as alloc::string::ToString>::to_string(&v2);
    v3 = struct28 {
        field_0: v6
        field_16: *((&v6 as &char + 16) as &i64)
        field_24: 1
    };
    return alloc::boxed::Box<T>::new(&v3);
}
