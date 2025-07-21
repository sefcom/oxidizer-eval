fn uu_mkdir::exec(a0: i64, a1: i32, a2: i32, a3: i32) -> long long {
    let v0: u64;  // [bp-0x108]
    let v1: u128;  // [bp-0xf8]
    let v2: u64;  // [bp-0xf0]
    let v3: core::fmt::rt::Argument;  // [bp-0xe8]
    let v4: u64;  // [bp-0xd8]
    let v5: i64;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc8]
    let v7: u64;  // [bp-0xc8]
    let v8: std::sys::os_str::bytes::Buf;  // [bp-0xc8]
    let v9: u64;  // [bp-0xb8]
    let v10: u64;  // [bp-0xb8]
    let v11: struct64;  // [bp-0x78]
    let v13: i64;  // rax
    let v14: u64;  // rax
    let v15: i64;  // rdx

    v11 = struct64 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
        field_48: *((a0 + 48) as &i128)
    };
    v13 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v11);
    if !v13 {
        return 0;
    }
    do {
        v8 = std::sys::os_str::bytes::Slice::to_owned(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
        v3 = v9;
        v1 = *(&v8.inner.buf.cap as &i128);
        v14 = uu_mkdir::mkdir(v2, v9, a1, a2, a3);
        v7 = v7;
        v9 = v9;
        if v14 {
            v0 = v14;
            uucore::mods::error::set_exit_code(*((v15 + 96) as &i64)(v14) as u32);
            v4 = uucore::util_name();
            v5 = v15;
            eprintln!("{}: {}", &v4, &v0);
            v7 = v6;
            v9 = v10;
        }
        v9 = v9;
        v7 = v7;
        v13 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v11);
    } while (v13);
    return 0;
}
