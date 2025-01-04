fn uu_od::prn_char::format_ascii_dump(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: struct16;  // [sp-0x48], Other Possible Types: void*, u128
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v3: u64;  // [sp-0x30]
    let v4: u64;  // [sp-0x28]
    let v6: struct8;  // rax
    let v7: u64;  // rax
    let v8: u32;  // rdx
    let v9: u128;  // xmm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v0 = alloc::string::String::push(0x3e);
    v3 = a1;
    v4 = a2 + a1;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v6 {
        do {
            v7 = *(v6 as &i8);
            if (v7 - 32 & 255) >= 95 {
                v0 = alloc::string::String::push(0x2e);
            } else {
                v0 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((((v7 & 4294967295) * 16 & 4294967295) + "\\0") as &i64), *(&(&g_5428a0)[(v7 & 4294967295) * 16 & 4294967295] as &i64) + *((((v7 & 4294967295) * 16 & 4294967295) + "\\0") as &i64)), v8);
            }
        } while ((v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v6));
    }
    v0 = alloc::string::String::push(0x3c);
    v9 = v0;
    return struct24 {
        field_0: v9
        field_16: v2
    };
}
