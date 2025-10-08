fn fd::filter::owner::OwnerFilter::matches(a0: i64, a1: u32, a2: u32) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x18]
    let v2: core::fmt::Arguments;  // rax

    v0 = v2;
    if fd::filter::owner::Check<T>::check(*(a0 as &i32), *((a0 + 4) as &i32), a1) {
        return fd::filter::owner::Check<T>::check(*((a0 + 8) as &i32), *((a0 + 12) as &i32), a2);
    }
    return 0;
}
