fn uu_echo::parse_backslash_number(a0: &u64, a1: u8) -> u64 {
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [sp-0x35]
    let v2: u32;  // [sp-0x34]
    let v4: u64;  // rax
    let v5: u32;  // r14d
    let v6: &u8;  // rax
    let v8: u64;  // r14
    let v9: u64;  // rbp
    let v10: u64;  // 4098
    let v11: &u8;  // rax
    let v12: u64;  // r12
    let v14: &u8;  // rax
    let v15: u64;  // 4098
    let v16: u32;  // rdx

    v0 = v4;
    if !a1 {
        v5 = 0;
        goto LABEL_4a4b2d;
    } else {
        v6 = *(core::option::Option<T>::get_or_insert_with(a0, a0 + 2) as &i64);
        if !v6 {
            return 0;
        }
        v5 = v8 | -0x100 | a1 != 1;
LABEL_4a4b2d:
        v2 = v5;
        if (uu_echo::Base::ascii_to_number(v2, *(v6)) as i8 & 1) {
            v9 = v16;
            v10 = *(a0);
            *(a0) = 0;
            if !v10 {
                <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a0 + 2);
            }
            v12 = a0 + 2;
            v1 = 4 - (!v2);
            loop {
                v14 = *(core::option::Option<T>::get_or_insert_with(a0, v12) as &i64);
                if !(v14) || !((v14 = uu_echo::Base::ascii_to_number(v2 as u64, *(v14) as u64), (v14 as u8 & 1))) {
                    break;
                }
                v15 = *(a0);
                *(a0) = 0;
                if !v15 {
                    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v12);
                }
                v9 = v9 | -0x100 | ((v9 & 255) << (v1 & 31)) + (v16 & 4294967295) & 255;
                if <u8 as core::iter::range::Step>::forward_unchecked(1) as i32 >= (!v2 | 2) {
                    break;
                }
            }
            v11 = v14 | -0x100 | 1;
            return v11;
        }
    }
}
