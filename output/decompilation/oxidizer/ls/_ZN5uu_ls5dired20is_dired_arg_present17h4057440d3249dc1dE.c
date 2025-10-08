fn uu_ls::dired::is_dired_arg_present() -> long long {
    let v0: std::env::ArgsOs;  // [bp-0x30]
    let v2: u64;  // rsi
    let v3: u64;  // rdx
    let v4: u64;  // rcx
    let v5: u64;  // r8

    v0 = std::env::args_os();
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::try_fold(&v0, v2, v3, v4, v5), v2);
}
