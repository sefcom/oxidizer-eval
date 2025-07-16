fn uu_echo::parse_backslash_number(a1: i8, a2: i8) -> Option<struct8> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [bp-0x35]
    let v2: u32;  // [bp-0x34]
    let v4: u64;  // rax
    let v5: u8;  // r14b
    let v6: void*;  // 4098
    let v7: u64;  // r12
    let v8: u64;  // rsi
    let v9: u32;  // eax
    let v10: i64;  // rax
    let v11: u64;  // rax
    let v12: void*;  // 4098

    v0 = v4;
    if !a1 || *(core::option::Option<T>::get_or_insert_with(a0, a0 + 16) as u64 as &i64) {
        v2 = v5;
        if (uu_echo::Base::ascii_to_number(v5, a2) as i8 & 1) {
            v6 = *(a0 as &i64);
            *(a0 as &i64) = 0;
            if !v6 {
                <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a0 + 16);
            }
            v7 = a0 + 16;
            v1 = 4 - (!v5);
            loop {
                loop {
                    v9 = <u8 as core::iter::range::Step>::forward_unchecked(1, v8);
                    v10 = *(core::option::Option<T>::get_or_insert_with(a0, v7) as u64 as &i64);
                    v11 = uu_echo::Base::ascii_to_number(v2, *(v10 as &i8));
                    v12 = *(a0 as &i64);
                    return struct8 {
                        field_0: 0
                    };
                    break;
                }
                v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v7);
            }
        }
    }
    return 0;
}
