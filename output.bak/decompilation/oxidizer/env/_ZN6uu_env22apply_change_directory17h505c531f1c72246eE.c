fn uu_env::apply_change_directory(a0: &struct24) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i192;  // [sp-0x98], Other Possible Types: struct28, struct24
    let v2: i64;  // [sp-0x90]
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [bp-0x80]
    let v5: i64;  // [sp-0x78]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: i64;  // [sp-0x48]
    let v11: i64;  // [sp-0x40]
    let v12: i64;  // [sp-0x38]
    let v13: i8;  // [sp-0x30]
    let v17: i64;  // rbx
    let v18: i64;  // rax
    let v19: i64;  // r14
    let v20: i64;  // rax

    v17 = *((a0 + 120) as &i64);
    if !*((a0 + 88) as &i64) && v17 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("must specify command with --chdir (-C)");
        v4 = 125;
        v18 = alloc::boxed::Box<T>::new(&v1);
        return v18;
    }
    if !v17 {
        return 0;
    }
    v19 = *((a0 + 128) as &i64);
    v20 = std::env::set_current_dir(v17, v19);
    if v20 {
        v0 = v20;
        v10 = 1;
        v11 = v17;
        v12 = v19;
        v13 = 1;
        v6 = &v10;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = &v0;
        v9 = <std::io::error::Error as core::fmt::Display>::fmt;
        v1 = "cannot change directory to ";
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
        core::option::Option<T>::map_or_else();
        v1 = struct28 {
            field_0: v14
            field_16: v15
            field_24: 125
        };
        v18 = alloc::boxed::Box<T>::new(&v1);
        return v18;
    }
}
