fn uu_env::parse_program_opt(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x28], Other Possible Types: struct24
    let v1: i32;  // [sp-0x10]

    if !*((a0 + 153) as &i8) {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("cannot specify --null (-0) with command");
        v1 = 125;
        return alloc::boxed::Box<T>::new(&v0);
    }
    alloc::vec::Vec<T,A>::push(a0 + 72, a1, a2);
    return 0;
}
