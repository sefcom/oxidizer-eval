fn uu_split::number::FixedWidthNumber::new(a0: &struct_0, a1: u32, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: u64;  // rax
    let v3: u64;  // rbp
    let v4: &u8;  // r15
    let v6: u64;  // rax
    let v7: u64;  // rcx
    let v8: &u8;  // rdi
    let v9: u64;  // r12
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u8;  // dl
    let v13: u32;  // eax

    v0 = v2;
    v3 = a1;
    if !a2 {
        v4 = 1;
        if !(!(v3 & 255 & 255)) {
            goto LABEL_4a9fd2;
        }
        if a3 {
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
    } else {
        v4 = __rust_alloc_zeroed(a2, 1);
        if !v3 {
            core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
        }
LABEL_4a9fd2:
        v7 = v3 & 4294967295;
        v8 = a2 - 1;
        do {
            v9 = a3;
            if v8 == -1 {
                if v9 {
                    a0->field_0 = 0x8000000000000000;
                    if a2 {
                        return a0;
                    }
                    return a0;
                }
                break;
            }
            if !a2 {
                core::panicking::panic_bounds_check(); /* do not return */
            }
            if !v9 >> 32 {
                v13 = v9;
                v11 = (0 CONCAT v13) /m v7 & 4294967295;
                v12 = (0 CONCAT v13) /m v7 >> 32 & 4294967295;
            } else {
                v10 = v9;
                v11 = (0 CONCAT v10) /m v7;
                v12 = (0 CONCAT v10) /m v7 >> 64;
            }
            *((v4 + v8) as &u8) = v12;
            v8 += 1;
        } while (v9 >= v7);
    }
    a0->field_0 = v6;
    a0->field_8 = v4;
    a0->field_10 = a2;
    a0->field_18 = v3;
    return a0;
}
