fn uu_sort::tokenize_default(a0: i64, a1: i64, a2: i64) -> long long {
    let v4: u8;  // cl
    let v5: u8;  // bpl
    let v6: struct8;  // rax
    let v7: u32;  // edx
    let v8: u64;  // rax

    alloc::vec::Vec<T,A>::push(a2, 0, 0);
    loop {
        loop {
            v5 = v4;
            v6 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
            match (v7) {
                32 => {
LABEL_520c1f:
                    v4 = 1;
                    if !(v5 & 1) {
                        break;
                    }
                    continue;
                }
                1114112 => {
                    v8 = *((a2 + 16) as &i64);
                    if !*((a2 + 16) as &i64) {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    *((v8 * 16 + *((a2 + 8) as &i64) - 8) as &u64) = a1;
                    return v8 * 16;
                }
                _ => {
                    if v7 - 9 < 5 {
                        goto LABEL_520c1f;
                    } else {
                        goto LABEL_520c50;
                    }
                }
            }
LABEL_520c50:
            v4 = 0;
            if v7 >= 128 && (v4 = core::unicode::unicode_data::white_space::lookup(v7 as u8) as u32 as u8, !((v5 | ~(v4)) & 1)) {
                break;
            }
        }
        if !*((a2 + 16) as &i64) {
            break;
        }
        *((*((a2 + 16) as &i64) * 16 + *((a2 + 8) as &i64) - 8) as &struct8) = v6;
        alloc::vec::Vec<T,A>::push(a2, v6, 0);
    }
    core::option::unwrap_failed(); /* do not return */
}
