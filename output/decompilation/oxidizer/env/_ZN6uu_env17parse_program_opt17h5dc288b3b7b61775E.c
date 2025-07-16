fn uu_env::parse_program_opt(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x28]

    if !*((a0 + 153) as &i8) {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("cannot specify --null (-0) with command");
        return alloc::boxed::Box<T>::new(&v0);
    }
    alloc::vec::Vec<T,A>::push(a0 + 72, a1, a2);
    return 0;
}
