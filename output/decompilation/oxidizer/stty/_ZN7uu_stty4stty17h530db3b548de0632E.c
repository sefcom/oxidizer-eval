fn uu_stty::stty(a0: &struct48) -> u64 {
    let v1: Option<struct4>;  // [bp-0x150], Other Possible Types: struct24
    let v5: struct128;  // [bp-0xa8]
    let v7: void*;  // rsi
    let v8: i64;  // rbx
    let v9: u64;  // rdx
    let v12: struct56;  // eax
    let v13: core::fmt::rt::Argument;  // rsi
    let v14: u64;  // rcx
    let v15: core::fmt::Arguments;  // rdx

    if *((a0 + 41) as &i8) {
        if *((a0 + 40) as &i8) == 1 {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, v9);
            return alloc::boxed::Box<T>::new(v8) as u64;
        } else if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, v9);
            return alloc::boxed::Box<T>::new(v8) as u64;
        }
    } else {
        if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) && *((a0 + 40) as &i8) == 1 {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, v9);
            return alloc::boxed::Box<T>::new(v8) as u64;
        }
    }
    v1 = nix::sys::termios::tcgetattr(<uu_stty::Device as std::os::fd::owned::AsFd>::as_fd(a0 + 24));
    v5 = core::result::Result<T,E>::expect(&v1);
    uu_stty::print_settings(&v5, a0);
    core::result::Result<T,E>::expect(v12 as u64, v13, v15, v14);
    return 0;
}
