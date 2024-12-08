fn uu_env::apply_change_directory(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i192;  // [sp-0x98], Other Possible Types: struct24
    let v2: i64;  // [sp-0x88]
    let v3: i32;  // [bp-0x80]
    let v4: i64;  // [sp-0x48]
    let v5: i64;  // [sp-0x40]
    let v6: i64;  // [sp-0x38]
    let v7: i8;  // [sp-0x30]
    let v8: i192;  // [sp-0x28]
    let v10: i64;  // rbx
    let v11: i64;  // rax
    let v12: i64;  // r14
    let v13: i64;  // rax

    v10 = *((a0 + 120) as &i64);
    if !*((a0 + 88) as &i64) && v10 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("must specify command with --chdir (-C)");
        v3 = 125;
        v11 = alloc::boxed::Box<T>::new(&v1);
        return v11;
    }
    if !v10 {
        return 0;
    }
    v12 = *((a0 + 128) as &i64);
    v13 = std::env::set_current_dir(v10, v12, a2);
    if v13 {
        v0 = v13;
        v4 = 1;
        v5 = v10;
        v6 = v12;
        v7 = 1;
        v8 = format!("cannot change directory to {:?}: {:?}", &v4, &v0);
        v3 = 125;
        v1 = v8;
        v2 = *((&v8 as &char + 16) as &i64);
        v11 = alloc::boxed::Box<T>::new(&v1);
        return v11;
    }
}
