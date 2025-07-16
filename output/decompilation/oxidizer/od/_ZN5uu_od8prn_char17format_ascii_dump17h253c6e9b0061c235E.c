fn uu_od::prn_char::format_ascii_dump(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: alloc::string::String;  // [bp-0x48]
    let v1: u64;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v4: struct24;  // rax
    let v5: u32;  // eax
    let v7: i64;  // rdi
    let v8: &[u8];  // rax:rdx

    v0 = String::new();
    alloc::string::String::push(&v0, 62);
    v1 = a0;
    v2 = a1 + a0;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v4 {
        do {
            v5 = *(v4 as &i8);
            if (v5 - 32 & 255) >= 95 {
                alloc::string::String::push(&v0, 46);
            } else {
                v8 = core::slice::iter::Iter<T>::make_slice(*((v5 * 16 + "\\0") as u64 as &i64));
                alloc::vec::Vec<T,A>::append_elements(&v0, v8.ptr, a1);
            }
        } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1), v4));
    }
    alloc::string::String::push(&v0, 60);
    *((v7 + 16) as &i64) = 0;
    *(v7 as &i128) = *(&v0.vec.buf.cap as &i128);
    return;
}
