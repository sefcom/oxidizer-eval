fn uu_od::prn_char::format_ascii_dump(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: alloc::string::String;  // [bp-0x48], Other Possible Types: struct24
    let v1: struct16;  // [bp-0x30]
    let v3: struct24;  // rax
    let v4: u32;  // eax
    let v6: i64;  // rdi
    let v7: &[u8];  // rax:rdx

    v0 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v0 = String::new();
    alloc::string::String::push(&v0, 62);
    v1 = struct16 {
        field_0: a0
        field_8: a1 + a0
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v3 {
        do {
            v4 = *(v3 as &i8);
            if (v4 - 32 & 255) >= 95 {
                alloc::string::String::push(&v0, 46);
            } else {
                v7 = core::slice::iter::Iter<T>::make_slice(*((v4 * 16 + "\\0") as u64 as &i64));
                alloc::vec::Vec<T,A>::append_elements(&v0, v7.ptr, a1);
            }
        } while ((v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1), v3));
    }
    alloc::string::String::push(&v0, 60);
    *((v6 + 16) as &i64) = 0;
    *(v6 as &i128) = *(&v0.vec.buf.cap as &i128);
    return;
}
