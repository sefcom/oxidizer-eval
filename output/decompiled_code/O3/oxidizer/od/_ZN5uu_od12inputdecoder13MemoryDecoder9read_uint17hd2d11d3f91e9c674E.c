fn uu_od::inputdecoder::MemoryDecoder::read_uint(a0: void*, a1: &u8, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x48]
    let v1: i64;  // [sp-0x40]
    let v2: i64;  // [sp-0x38]
    let v3: i64;  // [sp-0x30], Other Possible Types: struct40
    let v4: i64;  // [sp-0x28]
    let v5: i64;  // [sp-0x20]
    let v6: i64;  // [sp-0x18]
    let v7: i64;  // [sp-0x10]
    let v9: i64;  // rcx
    let v10: i64;  // rdx
    let v11: i64;  // rdx
    let v12: i64;  // rdx
    let v13: i32;  // ecx
    let v14: i64;  // rax
    let v15: i32;  // ecx
    let v16: i64;  // rax
    let v17: i32;  // ecx
    let v19: i32;  // eax
    let v20: i16;  // ax

    v0 = a2;
    switch (a2) {
    case 1:
        v9 = *(a0 as &i64);
        if *((v9 + 16) as &i64) > a1 {
            return *((*((v9 + 8) as &i64) + a1) as &i8);
        }
        core::panicking::panic_bounds_check(); /* do not return */
    case 2:
        if a1 > -3 {
            goto LABEL_49d608;
        } else {
            v12 = *(a0 as &i64);
            if a1 + 2 > *((v12 + 16) as &i64) {
                break;
            } else {
                switch (v17) {
                case 1:
                    v20 = *((*((v12 + 8) as &i64) + a1) as &i16);
                    break;
                default:
                    break;
                }
                return __ROL__(v20, 8);
            }
        }
    case 4:
        if a1 <= -5 {
            v10 = *(a0 as &i64);
            if a1 + 4 > *((v10 + 16) as &i64) {
                break;
            } else {
                v14 = *((v10 + 8) as &i64);
                switch (v13) {
                case 1:
                    v19 = __buildin_bswap32(*((v14 + a1) as &i32));
                    return v19;
                default:
                    v19 = *((v14 + a1) as &i32);
                    return v19;
                }
            }
        } else {
LABEL_49d608:
            core::slice::index::slice_index_order_fail(); /* do not return */
        }
    case 8:
        if a1 > -9 {
            goto LABEL_49d608;
        } else {
            v11 = *(a0 as &i64);
            if a1 + 8 > *((v11 + 16) as &i64) {
                break;
            } else {
                v16 = *((v11 + 8) as &i64);
                switch (v15) {
                case 1:
                    return (((((*((v16 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v16 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((v16 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v16 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((*((v16 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v16 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((v16 + a1) as &i64) & -0xff00ff00ff0100) >> 8 | *((v16 + a1) as &i64) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
                default:
                    return *((v16 + a1) as &i64);
                }
            }
        }
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v3 = "Invalid byte_size: ";
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        v3 = core::panicking::panic_fmt();
    }
    core::slice::index::slice_end_index_len_fail(); /* do not return */
}
