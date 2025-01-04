fn uu_sleep::sleep(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x89]
    let v1: i192;  // [sp-0x88], Other Possible Types: struct24
    let v2: i32;  // [sp-0x70]
    let v3: i512;  // [sp-0x68], Other Possible Types: struct64
    let v6: i32;  // edx

    v0 = 0;
    v3 = fundu::standard::parser::DurationParser::with_time_units(&g_40ab78, 4);
    if !v0 {
        std::thread::sleep(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a0, a1 * 16 + a0, &v3, &v0), v6);
        return 0;
    }
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(0x1, 0);
    v2 = 1;
    return alloc::boxed::Box<T>::new(&v1);
}
