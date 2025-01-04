fn uu_mkdir::mkdir(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x38], Other Possible Types: i192
    let v1: i32;  // [sp-0x20]
    let v3: i64;  // rax

    if a1 {
        v0 = uucore::features::fs::dir_strip_dot_for_creation(a0, a1, a3, a4, a5);
        v3 = uu_mkdir::create_dir(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), a2, a4, 0, a3);
        return v3;
    }
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("cannot create directory '': No such file or directory");
    v1 = 1;
    v3 = alloc::boxed::Box<T>::new(&v0);
    return v3;
}
