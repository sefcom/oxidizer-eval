fn uu_mkdir::exec(a0: i64, a1: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0xe8]
    let v1: u64;  // [bp-0xd8]
    let v2: u64;  // [bp-0xd8]
    let v3: struct24;  // [bp-0xd8]
    let v4: u64;  // [bp-0xd0]
    let v5: u64;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc8]
    let v7: u64;  // [bp-0xc8]
    let v8: u64;  // [bp-0xa8]
    let v9: core::fmt::Arguments;  // [bp-0xa0]
    let v10: struct64;  // [bp-0x78]
    let v12: i64;  // rax
    let v13: u64;  // rax
    let v14: i64;  // rdx

    v10 = struct64 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
        field_48: *((a0 + 48) as &i128)
    };
    v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v10);
    if !v12 {
        return 0;
    }
    do {
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v12 + 8) as &i64), *((v12 + 16) as &i64));
        v13 = uu_mkdir::mkdir(v5, v7, a1);
        v2 = v2;
        v5 = v5;
        v7 = v7;
        if v13 {
            v0 = v13;
            uucore::mods::error::set_exit_code(*((v14 + 88) as &i64)(v13) as u32);
            v8 = uucore::util_name();
            v9 = v14;
            eprintln!("{}: {}", &v8, &v0);
            v2 = v1;
            v5 = v4;
            v7 = v6;
        }
        v7 = v7;
        v5 = v5;
        v2 = v2;
        v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v10);
    } while (v12);
    return 0;
}
