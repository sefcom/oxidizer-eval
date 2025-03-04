fn uu_mkdir::mkdir(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct24;  // [sp-0x38]
    let v1: i32;  // [sp-0x20]
    let v3: i64;  // rax

    if a1 {
        v0 = uucore::features::fs::dir_strip_dot_for_creation(a0, a1);
        v3 = uu_mkdir::create_dir(*((&v0.field_0 as &char + 8) as &i64), v0.field_16, a2 as u64, a4 as u64, 0, a3 as u64);
        return v3;
    }
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("cannot create directory '': No such file or directory");
    v1 = 1;
    v3 = alloc::boxed::Box<T>::new(&v0);
    return v3;
}
