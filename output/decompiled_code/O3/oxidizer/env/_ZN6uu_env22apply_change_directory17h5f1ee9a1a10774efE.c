fn uu_env::apply_change_directory(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i224;  // [sp-0x98], Other Possible Types: struct24
    let v2: i32;  // [bp-0x80]
    let v3: i64;  // [sp-0x48]
    let v4: i64;  // [sp-0x40]
    let v5: i64;  // [sp-0x38]
    let v6: i8;  // [sp-0x30]
    let v7: i192;  // [sp-0x28]
    let v9: i64;  // rbx
    let v10: i64;  // rax
    let v11: i64;  // r14
    let v12: i64;  // rax

    v9 = *((a0 + 120) as &i64);
    if !*((a0 + 88) as &i64) && v9 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("must specify command with --chdir (-C)");
        v2 = 125;
        v10 = alloc::boxed::Box<T>::new(&v1);
        return v10;
    }
    if !v9 {
        return 0;
    }
    v11 = *((a0 + 128) as &i64);
    v12 = std::env::set_current_dir(v9, v11, a2);
    if v12 {
        v0 = v12;
        v3 = 1;
        v4 = v9;
        v5 = v11;
        v6 = 1;
        v7 = format!("cannot change directory to {:?}: {:?}", &v3, &v0);
        v1 = v7;
        v10 = alloc::boxed::Box<T>::new(&v1);
        return v10;
    }
}
