fn uu_sleep::sleep(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x29]
    let v1: struct24;  // [bp-0x28]
    let v4: u64;  // rax
    let v5: u32;  // edx

    v0 = 0;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a0, &a0[2 * a1], &v0);
    if !v0 {
        std::thread::sleep(v4, v5);
        return 0;
    }
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec();
    return alloc::boxed::Box<T>::new(&v1) as u64;
}
