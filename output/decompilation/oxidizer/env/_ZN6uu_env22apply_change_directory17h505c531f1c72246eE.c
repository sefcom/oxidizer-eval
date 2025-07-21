fn uu_env::apply_change_directory(a0: &struct24) -> long long {
    let v0: u64;  // [bp-0xa0]
    let v1: struct24;  // [bp-0x98], Other Possible Types: struct28, u64
    let v2: u64;  // [bp-0x90]
    let v3: i64;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v5: void*;  // [bp-0x78]
    let v6: i64;  // [bp-0x68]
    let v7: std::io::stdio::StderrLock;  // [bp-0x60]
    let v8: i64;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: u64;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v13: std::io::stdio::Stdout;  // [bp-0x30]
    let v14: core::fmt::rt::Argument;  // [bp-0x28]
    let v15: i8;  // [bp-0x18]
    let v17: u64;  // rbx
    let v18: void*;  // rcx
    let v19: u64;  // rax
    let v20: u64;  // rdx

    v17 = *((a0 + 120) as &i64);
    if !*((a0 + 88) as &i64) && v17 {
        <T as alloc::slice::hack::ConvertVec>::to_vec("must specify command with --chdir (-C)", v18);
        return alloc::boxed::Box<T>::new(&v1);
    }
    if !v17 {
        return 0;
    }
    v19 = std::env::set_current_dir(v17, *((a0 + 128) as &i64));
    if v19 {
        v0 = v19;
        v10 = 1;
        v11 = v17;
        v12 = *((a0 + 128) as &i64);
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
        v1 = core::option::Option<T>::map_or_else(v20);
        v1 = struct28 {
            field_0: v14
            field_16: *(&v15 as &i64)
            field_24: 125
        };
        return alloc::boxed::Box<T>::new(&v1);
    }
    return 0;
}
