fn uu_sort::compare_by() -> u32 {
    let v0: u8;  // [sp-0x131]
    let v1: u64;  // [sp-0x130]
    let v2: u64;  // [sp-0x128]
    let v3: void*;  // [sp-0x120]
    let v4: u64;  // [sp-0x100]
    let v5: u64;  // [sp-0xf8]
    let v6: u64;  // [sp-0xf0]
    let v7: u64;  // [sp-0xe8]
    let v8: u64;  // [sp-0xe0]
    let v9: u64;  // [sp-0xd8]
    let v10: u64;  // [sp-0xc0]
    let v11: u64;  // [sp-0xb8]
    let v12: void*;  // [sp-0xb0], Other Possible Types: u64
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
    let v25: &struct_1;  // rdx
    let v26: &u64;  // rdi
    let v27: u64;  // rdi
    let v28: u64;  // r9
    let v29: &u64;  // rsi
    let v30: u64;  // rax
    let v31: &u64;  // r8
    let v32: u64;  // rsi
    let v33: u64;  // r9
    let v34: &u64;  // rcx
    let v35: struct8;  // rax
    let v36: &struct_0;  // rbx
    let v39: u64;  // rdx
    let v40: u64;  // rbx
    let v42: u64;  // rbx
    let v44: u64;  // rax

    v22 = v25->field_8;
    v23 = v25->field_10 * 56 + v22;
    v27 = v26[2];
    v28 = v25->field_58;
    v30 = v29[2];
    v20 = v28 * v30;
    v21 = v27 * v28;
    v19 = v31[1];
    v10 = v31[2];
    v32 = v25->field_48;
    v33 = v25->field_50;
    v17 = v27 * v33;
    v16 = v30 * v33;
    v4 = v31[8];
    v9 = v32 * v27;
    v8 = v30 * v32;
    v15 = v31[7];
    v1 = v31[5];
    v7 = v31[4];
    v18 = v34[1];
    v11 = v34[2];
    v5 = v34[8];
    v14 = v34[7];
    v2 = v34[5];
    v6 = v34[4];
    v0 = v25->field_87;
    v13 = &v25->padding_88 as &struct_1;
    v3 = 0;
    v12 = 0;
    v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v35 {
        if !(v25->field_98 != 5 && !v25->field_83 && !v25->field_84) {
            return;
        }
        v39 = v29[1];
        v40 = v26[1];
        v44 = memcmp(*(v26), *(v29), v42) as u32;
    }
    v36 = v35;
    if !*((v35 + 55) as &i8) {
        goto *((4385264 + *((vvar_78{reg 40} + 53) as &i8) * 4) as &i32) + 4385264;
    } else {
        v12 += 1;
        goto *((4385264 + *((vvar_78{reg 40} + 53) as &i8) * 4) as &i32) + 4385264;
    }
}
