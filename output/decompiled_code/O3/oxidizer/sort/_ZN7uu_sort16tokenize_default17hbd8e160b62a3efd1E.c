fn uu_sort::tokenize_default(a0: u32, a1: u32, a2: &u64, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: void*;  // [sp-0x30]
    let v4: u64;  // rcx
    let v5: u32;  // ecx
    let v6: u64;  // rsi
    let v7: u64;  // rdx
    let v8: u64;  // rdx
    let v9: u8;  // bpl
    let v10: struct8;  // rax
    let v11: u64;  // rcx
    let v12: u64;  // rdx
    let v14: u64;  // rcx
    let v15: u64;  // rax

    alloc::vec::Vec<T,A>::push(a2, 0, 0);
    v0 = a0;
    v1 = a0 + a1;
    v2 = 0;
    v5 = v4 | -0x100 | 1;
    loop {
        loop {
            v9 = v5;
            v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v6, v8);
            switch (v7) {
            case 32:
LABEL_520c1f:
                v5 = v11 | -0x100 | 1;
                v8 = v7;
                if !(v9 & 1) {
                    break;
                }
                continue;
            case 1114112:
                v15 = a2[2];
                if v15 {
                    *((v15 * 16 + a2[1] - 8) as &u64) = a1;
                    return v15 * 16;
                }
                core::option::unwrap_failed(); /* do not return */
            default:
                v11 = v7 - 9 & 4294967295;
                if v11 < 5 {
                    goto LABEL_520c1f;
                } else {
                    goto LABEL_520c50;
                }
            }
LABEL_520c50:
            v5 = 0;
            v8 = v7;
            if v7 >= 128 && (v5 = core::unicode::unicode_data::white_space::lookup(v7 & 4294967295) as i32, v12 = v5 as u64, v8 = v12 | -0x100 | ~(v12 as u8) as u64, !((v9 | ~(v12 as u8)) & 1)) {
                break;
            }
        }
        v14 = a2[2];
        if !v14 {
            break;
        }
        *((v14 * 16 + a2[1] - 8) as &struct8) = v10;
        alloc::vec::Vec<T,A>::push(a2, v10, 0);
        v5 = v4 | -0x100 | 1;
    }
    core::option::unwrap_failed(); /* do not return */
}
