fn uu_echo::parse_backslash_number(a0: &struct16, a1: u8, a2: u32) -> u64 {
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [sp-0x35]
    let v2: u32;  // [sp-0x34]
    let v4: u64;  // rax
    let v5: u32;  // r14d
    let v6: &u8;  // rax
    let v7: u64;  // r14
    let v8: u64;  // rbp
    let v9: u64;  // 4098
    let v10: u64;  // rax
    let v11: u64;  // r12
    let v13: &u8;  // rax
    let v14: u64;  // 4098
    let v15: u64;  // rdx

    v0 = v4;
    if !a1 {
        v5 = 0;
        goto LABEL_4a45cd;
    } else {
        v6 = *(core::option::Option<T>::get_or_insert_with(a0, a0 + 2) as &i64);
        if !v6 {
            return 0;
        }
        v5 = v7 | -0x100 | a1 != 1;
LABEL_4a45cd:
        v2 = v5;
        if (uu_echo::Base::ascii_to_number(v2, *(v6)) & 1) {
            v8 = v15;
            v9 = *(a0);
            *(a0) = 0;
            if !v9 {
                <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a0 + 2);
            }
            v11 = a0 + 2;
            v1 = 4 - (!v2);
            loop {
                v13 = *(core::option::Option<T>::get_or_insert_with(a0, v11) as &i64);
                if !(v13) || !((v13 = uu_echo::Base::ascii_to_number(v2 as u64, *(v13) as u64) as i64, (v13 as u8 & 1))) {
                    break;
                }
                v14 = *(a0);
                *(a0) = 0;
                if !v14 {
                    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v11);
                }
                v8 = v8 | -0x100 | ((v8 & 255) << (v1 & 31)) + (v15 & 4294967295) & 255;
                if <u8 as core::iter::range::Step>::forward_unchecked(1) >= (!v2 | 2) {
                    break;
                }
            }
            v10 = v13 | -0x100 | 1;
            return v10;
        }
    }
}
