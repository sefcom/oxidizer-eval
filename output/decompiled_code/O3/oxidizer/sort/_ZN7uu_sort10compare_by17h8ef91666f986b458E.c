fn uu_sort::compare_by() -> u32 {
    let v0: u8;  // [sp-0x1b1]
    let v1: u64;  // [sp-0x1b0], Other Possible Types: void*
    let v2: u64;  // [sp-0x1a0]
    let v3: u64;  // [sp-0x198]
    let v4: void*;  // [sp-0x190]
    let v5: u64;  // [sp-0x188]
    let v6: u64;  // [sp-0x180]
    let v7: u64;  // [sp-0x170]
    let v8: u64;  // [sp-0x168]
    let v9: u64;  // [sp-0x160]
    let v10: u64;  // [sp-0x158]
    let v11: u64;  // [sp-0x150]
    let v12: u64;  // [sp-0x148]
    let v13: u64;  // [sp-0x140]
    let v14: u64;  // [sp-0x138]
    let v15: u64;  // [sp-0x130]
    let v16: u64;  // [sp-0x128]
    let v17: u64;  // [sp-0x120]
    let v18: u64;  // [sp-0x118]
    let v19: u64;  // [sp-0x110]
    let v20: u64;  // [sp-0xf8]
    let v21: u64;  // [sp-0xf0]
    let v22: u64;  // [sp-0xe8]
    let v23: u64;  // [sp-0xe0]
    let v24: u64;  // [sp-0xd8]
    let v25: u64;  // [sp-0xd0]
    let v26: u64;  // [sp-0xc8]
    let v27: u64;  // [sp-0xc0]
    let v28: u64;  // [sp-0xb8]
    let v29: u64;  // [sp-0xb0]
    let v30: u64;  // [sp-0xa8]
    let v31: u64;  // [sp-0x98]
    let v32: u64;  // [sp-0x90]
    let v33: u64;  // [sp-0x88]
    let v34: u64;  // [sp-0x80]
    let v35: u64;  // [sp-0x78]
    let v36: u64;  // [sp-0x70]
    let v37: u64;  // [sp-0x68]
    let v38: u64;  // [sp-0x30]
    let v39: u64;  // [sp-0x28]
    let v40: u64;  // [sp-0x20]
    let v41: u64;  // [sp-0x18]
    let v42: u64;  // [sp-0x10]
    let v44: u64;  // r15
    let v45: u64;  // r14
    let v46: u64;  // r13
    let v47: u64;  // r12
    let v48: u64;  // rbx
    let v49: &struct_1;  // rdx
    let v50: &struct_0;  // r9
    let v51: u64;  // r10
    let v52: &u64;  // rdi
    let v53: u64;  // rdi
    let v54: u64;  // r11
    let v55: &u64;  // rsi
    let v56: u64;  // rax
    let v57: &u64;  // r8
    let v58: u64;  // rsi
    let v59: &u64;  // rcx
    let v61: &struct_0;  // r10
    let v64: u64;  // rdx
    let v66: u64;  // rbx
    let v68: u64;  // rax
    let v70: &struct_1;  // rdx
    let v71: u8;  // cc_dep1

    v42 = v44;
    v41 = v45;
    v40 = v46;
    v39 = v47;
    v38 = v48;
    v50 = v49->field_8;
    v51 = v49->field_48;
    v37 = &v50[v49->field_10];
    v53 = v52[2];
    v54 = v49->field_58;
    v56 = v55[2];
    v35 = v54 * v56;
    v36 = v53 * v54;
    v34 = v57[1];
    v58 = v49->field_50;
    v32 = v53 * v58;
    v31 = v56 * v58;
    v19 = v51 * v53;
    v18 = v56 * v51;
    v20 = v57[2];
    v7 = v57[8];
    v17 = v57[7];
    v2 = v57[5];
    v6 = v57[4];
    v33 = v59[1];
    v21 = v59[2];
    v8 = v59[8];
    v16 = v59[7];
    v3 = v59[5];
    v5 = v59[4];
    v0 = v49->field_87;
    v30 = v49->field_88;
    v29 = v49->field_89;
    v28 = v49->field_8a;
    v27 = v49->field_8b;
    v26 = v49->field_8c;
    v25 = v49->field_8d;
    v24 = v49->field_8e;
    v23 = v49->field_8f;
    v22 = v49->field_90;
    v15 = v49->field_91;
    v14 = v49->field_92;
    v13 = v49->field_93;
    v12 = v49->field_94;
    v11 = v49->field_95;
    v10 = v49->field_96;
    v9 = v49->field_97;
    v4 = 0;
    if v50 == v37 {
        if v49->field_98 != 5 && !v49->field_83 && !v49->field_84 {
            v64 = v55[1];
            v66 = v52[1] - v64;
            v68 = memcmp(*(v52), *(v55), v64) as u32;
        }
        v71 = v70->field_82;
        return;
    }
    v61 = v50;
    if !v50->field_37 {
        v1 = 0;
        goto *((4362136 + *((vvar_94{reg 96} + 53) as &i8) * 4) as &i32) + 4362136;
    } else {
        if v36 >= v21 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        if v35 >= v20 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v1 = 1;
        goto *((4362136 + *((vvar_94{reg 96} + 53) as &i8) * 4) as &i32) + 4362136;
    }
}
