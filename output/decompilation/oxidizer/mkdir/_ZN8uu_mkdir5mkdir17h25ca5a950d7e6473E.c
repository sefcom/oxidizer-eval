fn uu_mkdir::mkdir(a0: i64, a1: i64, a2: i32, a3: i32, a4: i32) -> long long {
    let v0: struct24;  // [bp-0x38]
    let v1: u32;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]

    if !a1 {
        <T as alloc::slice::hack::ConvertVec>::to_vec("cannot create directory '': No such file or directory", a3);
        return alloc::boxed::Box<T>::new(&v0 as u8);
    }
    v0 = uucore::features::fs::dir_strip_dot_for_creation(a0, a1);
    return uu_mkdir::create_dir(v1, v2, a2, a4, 0, a3 as u64);
}
