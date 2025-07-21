fn uu_sleep::sleep(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x89]
    let v1: struct24;  // [bp-0x88]
    let v3: struct64;  // [bp-0x68]
    let v5: u64;  // rax
    let v6: u32;  // edx

    v0 = 0;
    v3 = fundu::standard::parser::DurationParser::with_time_units(&g_40ab78, 4);
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a0, a1 * 16 + a0, &v3, &v0);
    if !v0 {
        std::thread::sleep(v5, v6);
        return 0;
    }
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(0x1, 0);
    return alloc::boxed::Box<T>::new(&v1);
}
