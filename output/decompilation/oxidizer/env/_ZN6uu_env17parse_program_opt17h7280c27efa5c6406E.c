fn uu_env::parse_program_opt(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0x28]

    if !*((a0 + 153) as &i8) {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("cannot specify --null (-0) with command");
        return alloc::boxed::Box<T>::new(&v0) as u64;
    }
    alloc::vec::Vec<T,A>::push(a0 + 72, a1, a2, "src/uu/env/src/env.rs");
    return 0;
}
