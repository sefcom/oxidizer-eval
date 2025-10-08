fn uu_env::apply_change_directory(a0: &struct24) -> u64 {
    let v0: u64;  // [bp-0xa0]
    let v1: struct24;  // [bp-0x98], Other Possible Types: u128
    let v2: u64;  // [bp-0x88]
    let v3: u32;  // [bp-0x80]
    let v4: u64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: u64;  // [bp-0x38]
    let v7: u8;  // [bp-0x30]
    let v8: alloc::string::String;  // [bp-0x28]
    let v10: u64;  // rbx
    let v11: u64;  // rax

    v10 = *((a0 + 120) as &i64);
    if !(!v10 || *((a0 + 88) as &i64)) {
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("must specify command with --chdir (-C)");
        return alloc::boxed::Box<T>::new(&v1) as u64;
    } else if v10 {
        v11 = std::env::set_current_dir(v10, *((a0 + 128) as &i64));
        if !v11 {
            return 0;
        }
        v0 = v11;
        v4 = 1;
        v5 = v10;
        v6 = *((a0 + 128) as &i64);
        v7 = 1;
        v8 = format!("cannot change directory to {}: {}", &v4, &v0);
        v3 = 125;
        v1 = *(&v8.vec.buf.inner.cap as &i128);
        v2 = v8.vec.len;
        return alloc::boxed::Box<T>::new(&v1) as u64;
    } else {
        return 0;
    }
}
