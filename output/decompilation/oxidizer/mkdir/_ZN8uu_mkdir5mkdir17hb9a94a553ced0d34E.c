fn uu_mkdir::mkdir(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: u32;  // [bp-0x28]

    if !a1 {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("cannot create directory '': No such file or directory");
        return alloc::boxed::Box<T>::new(&v0) as u64;
    }
    v0 = uucore::features::fs::dir_strip_dot_for_creation(a0, a1);
    return uu_mkdir::create_dir(v1, v2, 0, a2);
}
