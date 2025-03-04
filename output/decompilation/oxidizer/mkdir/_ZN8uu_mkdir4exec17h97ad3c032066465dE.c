fn uu_mkdir::exec(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x108]
    let v1: iNone;  // [sp-0xf8]
    let v2: i64;  // [sp-0xe8]
    let v3: i64;  // [sp-0xd8]
    let v4: i64;  // [sp-0xd0]
    let v5: struct24;  // [sp-0xc8]
    let v6: i64;  // [sp-0xb8]
    let v7: iNone;  // [sp-0x78]
    let v8: iNone;  // [sp-0x68]
    let v9: iNone;  // [sp-0x58]
    let v10: iNone;  // [sp-0x48]
    let v12: iNone;  // xmm0
    let v13: iNone;  // ymm0
    let v14: iNone;  // ymm0
    let v15: struct8;  // rax
    let v16: iNone;  // xmm0
    let v17: i64;  // rax
    let v18: i64;  // rdx

    v12 = *(a0 as &i128);
    v14 = v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 as u256;
    v10 = *((a0 + 48) as &i128);
    v9 = *((a0 + 32) as &i128);
    v8 = *((a0 + 16) as &i128);
    v7 = v12;
    v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
    if !v15 {
        return 0;
    }
    do {
        v6 = v6;
        v5 = std::sys::os_str::bytes::Slice::to_owned(*((v15 + 8) as &i64), *((v15 + 16) as &i64));
        v2 = v6;
        v16 = *(&v5.field_0 as &i128);
        v14 = v14 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16 as u256;
        v1 = v16;
        v17 = uu_mkdir::mkdir((&v1)[8] as i64, v6, a1 as u64, a2 as u64, a3 as u64);
        if v17 {
            v0 = v17;
            uucore::mods::error::set_exit_code(*((v18 + 96) as &i64)());
            v3 = uucore::util_name();
            v4 = v18;
            eprintln!("{}: {}", &v3, &v0);
        }
    } while ((v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(), v6 = v6, v15));
    return 0;
}
