fn uu_sort::compare_by(a0: &u64, a1: &u64, a2: void*, a3: &u64, a4: &u64) -> u64 {
    let v0: u8;  // [sp-0x131]
    let v1: u64;  // [sp-0x130]
    let v2: u64;  // [sp-0x128]
    let v3: void*;  // [sp-0x120]
    let v4: u64;  // [sp-0x100]
    let v5: u64;  // [sp-0xf8]
    let v6: u64;  // [sp-0xf0]
    let v7: u64;  // [sp-0xe8]
    let v8: void*;  // [sp-0xe0]
    let v9: u64;  // [sp-0xd8]
    let v10: u64;  // [sp-0xd0]
    let v11: u64;  // [sp-0xb8]
    let v12: u64;  // [sp-0xb0]
    let v13: u64;  // [sp-0x88]
    let v14: u64;  // [sp-0x80]
    let v15: u64;  // [sp-0x78]
    let v16: u64;  // [sp-0x70]
    let v17: u64;  // [sp-0x68]
    let v18: u64;  // [sp-0x60]
    let v19: u64;  // [sp-0x58]
    let v20: u64;  // [sp-0x50]
    let v21: u64;  // [sp-0x48]
    let v22: u64;  // [sp-0x40]
    let v23: u64;  // [sp-0x38]
    let v25: u64;  // rdi
    let v26: u64;  // r9
    let v27: u64;  // rax
    let v28: u64;  // rsi
    let v29: u64;  // r9
    let v30: struct8;  // rax
    let v31: struct8;  // rbx
    let v32: u32;  // eax
    let v35: u64;  // rdx
    let v36: u64;  // rdx
    let v38: u64;  // rdx
    let v39: u64;  // cc_ndep
    let v40: u64;  // rax
    let v41: u64;  // rbx
    let v43: u64;  // rbx
    let v44: u64;  // rax

    v22 = a2->field_8;
    v23 = a2->field_10 * 56 + v22;
    v25 = a0[2];
    v26 = a2->field_58;
    v27 = a1[2];
    v20 = v26 * v27;
    v21 = v25 * v26;
    v19 = a4[1];
    v11 = a4[2];
    v28 = a2->field_48;
    v29 = a2->field_50;
    v17 = v25 * v29;
    v16 = v27 * v29;
    v4 = a4[8];
    v10 = v28 * v25;
    v9 = v27 * v28;
    v15 = a4[7];
    v1 = a4[5];
    v7 = a4[4];
    v18 = a3[1];
    v12 = a3[2];
    v5 = a3[8];
    v14 = a3[7];
    v2 = a3[5];
    v6 = a3[4];
    v0 = a2->field_87;
    v13 = &a2->padding_88 as &struct_1;
    v3 = 0;
    v8 = 0;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v30 {
        v32 = 0;
        if a2->field_98 != 5 && !a2->field_83 && !a2->field_84 {
            v35 = a1[1];
            if v36 >= v35 {
                v38 = v35;
            } else {
                v38 = v36;
            }
            v40 = memcmp(*(a0), *(a1), v38) as u32;
            if v41 {
                v43 = v40;
            } else {
                v43 = v36 - v35;
            }
            v32 = (amd64g_calculate_condition(9, 20, v43, 0, v39) as char ? v43 : 255);
        }
        v44 = (!a2->field_82 ? v32 : -(v32));
        return v44;
    }
    v31 = v30;
    if !*((v30 + 55) as &i8) {
        goto *((4385600 + *((vvar_78{reg 40} + 53) as &i8) * 4) as &i32) + 4385600;
    } else {
        goto *((4385600 + *((vvar_78{reg 40} + 53) as &i8) * 4) as &i32) + 4385600;
    }
}
