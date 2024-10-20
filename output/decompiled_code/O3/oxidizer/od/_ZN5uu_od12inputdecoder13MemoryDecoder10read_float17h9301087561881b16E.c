fn uu_od::inputdecoder::MemoryDecoder::read_float(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: struct40;  // [sp-0x38], Other Possible Types: i64
    let v4: i64;  // [sp-0x30]
    let v5: i64;  // [sp-0x28]
    let v6: i64;  // [sp-0x20]
    let v7: i64;  // [sp-0x18]
    let v9: i64;  // rdx
    let v10: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rdx
    let v15: i64;  // rax
    let v16: i32;  // ecx
    let v17: i64;  // rax
    let v18: i64;  // rbx
    let v19: i16;  // bx
    let v20: i32;  // ebx
    let v21: i64;  // rax
    let v22: i64;  // rcx
    let v23: i64;  // rbx

    v0 = a2;
    if a2 == 2 {
        if a1 > -3 {
            goto LABEL_49d8df;
        } else {
            v9 = *(a0 as &i64);
            if a1 + 2 <= *((v9 + 16) as &i64) {
                v12 = *((v9 + 8) as &i64);
                if !*((a0 + 24) as &i8) || *((a0 + 24) as &i8) != 1 {
                    v20 = *((v12 + a1) as &i16);
                } else {
                    v18 = *((v12 + a1) as &i16);
                    v19 = __ROL__(v18, 8);
                    v20 = v18 | -0x10000 | v19;
                }
                v21 = _ZN10std_detect6detect5cache5CACHE17hd60da8ebd6d34d77E;
                if !v21 {
                    if (std_detect::detect::cache::detect_and_initialize(a0, a1, v9) >> 35 & 1) {
                        half::binary16::arch::x86::f16_to_f32_x86_f16c(v20); /* do not return */
                    }
                } else {
                    if (v21 >> 35 & 1) {
                        half::binary16::arch::x86::f16_to_f32_x86_f16c(v20); /* do not return */
                    }
                }
                if !(v20 & 32767) {
                    v17 = v19 * 0x1000000000000;
                    return v17;
                }
                v22 = v20 & 0x7c00;
                v23 = v20 & 1023;
                v17 = (v20 & 0x8000) * 0x1000000000000;
                if v22 != 0x7c00 {
                    if v22 {
                        return v17;
                    }
                } else {
                    if v23 {
                        v17 |= v23 * 0x40000000000;
                    } else {
                        v17 |= 0x7ff0000000000000;
                        return v17;
                    }
                }
                return v17;
            }
        }
    } else {
        if a2 != 4 {
            if a2 != 8 {
                v1 = &v0;
                v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v3 = "Invalid byte_size: ";
                v4 = 1;
                v7 = 0;
                v5 = &v1;
                v6 = 1;
                v3 = core::panicking::panic_fmt();
            }
            if a1 > -9 {
LABEL_49d8df:
                core::slice::index::slice_index_order_fail(); /* do not return */
            }
            v13 = *(a0 as &i64);
            if a1 + 8 <= *((v13 + 16) as &i64) {
                v16 = *((a0 + 24) as &i8);
                v17 = *((v13 + 8) as &i64);
                if !(v16 != 2 && v16 == 1) {
                    return v17;
                }
                v17 = (((((*((v17 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v17 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((v17 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v17 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((*((v17 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v17 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((v17 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v17 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
                return v17;
            }
        } else if a1 > -5 {
            goto LABEL_49d8df;
        } else {
            v10 = *(a0 as &i64);
            if a1 + 4 <= *((v10 + 16) as &i64) {
                v15 = *((v10 + 8) as &i64);
                if *((a0 + 24) as &i8) == 2 || *((a0 + 24) as &i8) != 1 {
                    v17 = *((v15 + a1) as &i32);
                } else {
                    v17 = __buildin_bswap32(*((v15 + a1) as &i32));
                }
                return v17;
            }
        }
    }
    core::slice::index::slice_end_index_len_fail(); /* do not return */
}
