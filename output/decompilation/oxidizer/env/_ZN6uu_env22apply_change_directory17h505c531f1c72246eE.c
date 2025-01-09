fn uu_env::apply_change_directory(a0: &struct24) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i224;  // [sp-0x98], Other Possible Types: struct24, struct28
    let v2: i64;  // [bp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i64;  // [sp-0x68]
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x58]
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: i64;  // [sp-0x40]
    let v10: i64;  // [sp-0x38]
    let v11: i8;  // [sp-0x30]
    let v12: i8;  // [bp-0x28]
    let v14: i64;  // rbx
    let v15: i64;  // rax
    let v16: i64;  // r14
    let v17: i64;  // rax

    v14 = *((a0 + 120) as &i64);
    if !*((a0 + 88) as &i64) && v14 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("must specify command with --chdir (-C)");
        v2 = 125;
        v15 = alloc::boxed::Box<T>::new(&v1);
        return v15;
    }
    if !v14 {
        return 0;
    }
    v16 = *((a0 + 128) as &i64);
    v17 = std::env::set_current_dir(v14, v16);
    if v17 {
        v0 = v17;
        v8 = 1;
        v9 = v14;
        v10 = v16;
        v11 = 1;
        v4 = &v8;
        v5 = <os_display::Quoted as core::fmt::Display>::fmt;
        v6 = &v0;
        v7 = <std::io::error::Error as core::fmt::Display>::fmt;
        v1 = struct28 {
            field_0: "cannot change directory to "
            field_16: &v4
            field_24: <UNKNOWN>
        };
        v3 = 0;
        v2 = 2;
        core::option::Option<T>::map_or_else();
        v1 = v12;
        v15 = alloc::boxed::Box<T>::new(&v1);
        return v15;
    }
}
