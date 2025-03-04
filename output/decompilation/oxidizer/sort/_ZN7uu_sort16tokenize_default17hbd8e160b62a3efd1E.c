fn uu_sort::tokenize_default(a0: u32, a1: u32, a2: &u64) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: void*;  // [sp-0x30]
    let v4: u64;  // rcx
    let v5: u8;  // cl
    let v6: u8;  // bpl
    let v7: struct8;  // rax
    let v8: u64;  // rdx
    let v9: u64;  // rcx
    let v10: u64;  // rcx
    let v11: u64;  // rax

    alloc::vec::Vec<T,A>::push(a2, 0, 0);
    v0 = a0;
    v1 = a0 + a1;
    v2 = 0;
    v5 = v4 & -0x100 | 1;
    loop {
        loop {
            v6 = v5;
            v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
            match (v8) {
                32 => {
LABEL_520c1f:
                    v5 = v9 & -0x100 | 1;
                    if !(v6 & 1) {
                        break;
                    }
                    continue;
                }
                1114112 => {
                    v11 = a2[2];
                    if v11 {
                        *((v11 * 16 + a2[1] - 8) as &u64) = a1;
                        return v11 * 16;
                    }
                    core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
                }
                _ => {
                    v9 = v8 - 9 & 4294967295;
                    if v9 < 5 {
                        goto LABEL_520c1f;
                    } else {
                        goto LABEL_520c50;
                    }
                }
            }
LABEL_520c50:
            v5 = 0;
            if v8 >= 128 && (v5 = core::unicode::unicode_data::white_space::lookup(v8 & 4294967295) as i32 as i8, !((v6 | ~(v5)) & 1)) {
                break;
            }
        }
        v10 = a2[2];
        if !v10 {
            break;
        }
        *((v10 * 16 + a2[1] - 8) as &struct8) = v7;
        alloc::vec::Vec<T,A>::push(a2, v7, 0);
        v5 = v4 & -0x100 | 1;
    }
    core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
}
