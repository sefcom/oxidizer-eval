fn uu_ls::PathData::new() -> u32 {
    let v0: i32;  // [sp-0x24c]
    let v1: i32;  // [sp-0x240]
    let v2: i64;  // [sp-0x238]
    let v3: i64;  // [sp-0x228]
    let v4: i64;  // [sp-0x220]
    let v5: i64;  // [sp-0x218]
    let v6: i64;  // [sp-0x210]
    let v7: i64;  // [sp-0x208]
    let v8: i64;  // [sp-0x200]
    let v9: i160;  // [sp-0x1a8], Other Possible Types: struct20, struct24
    let v10: i8;  // [bp-0xf0]
    let v11: i64;  // [sp-0x30]
    let v12: i64;  // [sp-0x28]
    let v13: i64;  // [sp-0x20]
    let v14: i64;  // [sp-0x18]
    let v15: i64;  // [sp-0x10]
    let v17: i64;  // r15
    let v18: i64;  // r14
    let v19: i64;  // r13
    let v20: i64;  // r12
    let v21: i64;  // rbx
    let v22: i64;  // rdx
    let v23: i64;  // rsi
    let v24: i64;  // rcx
    let v25: i8;  // r9b
    let v27: i64;  // r14
    let v28: i64;  // r15
    let v29: i64;  // rax
    let v31: i64;  // rdi
    let v33: i64;  // rax
    let v34: i32;  // eax

    v15 = v17;
    v14 = v18;
    v13 = v19;
    v12 = v20;
    v11 = v21;
    v7 = v22;
    v6 = v23;
    v5 = v2;
    v8 = v24;
    if v5 != 0x8000000000000000 {
        v4 = *((v24 + 8) as &i64);
        v3 = *((v24 + 16) as &i64);
        v1 = 0;
        v0 = 0;
        v2 = v5;
        goto *((4380572 + *((vvar_36{reg 80} + 242) as &i8) * 4) as &i32) + 4380572;
    } else if v25 {
        v3 = *((v23 + 16) as &i64);
        v4 = v31;
        memcpy(v4, *((v23 + 8) as &i64), v3);
        v1 = v24 | -0x100 | 1;
        goto *((4380588 + *((vvar_36{reg 80} + 242) as &i8) * 4) as &i32) + 4380588;
    } else {
        v27 = *((v23 + 8) as &i64);
        v28 = *((v23 + 16) as &i64);
        v29 = std::path::Path::file_name(v27, v28, 0x8000000000000000, v24);
        if v29 {
            v9 = std::sys::os_str::bytes::Slice::to_owned(v29, v22);
            v2 = v9;
            v4 = *((&v9 as &char + 8) as &i64);
            v3 = *((&v9 as &char + 16) as &i64);
            v1 = v3 | -0x100 | 1;
            v0 = 0;
            goto *((4380572 + *((vvar_36{reg 80} + 242) as &i8) * 4) as &i32) + 4380572;
        } else {
            v9 = std::path::Path::components(v27, v28);
            <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v10, &v9, v22, v24);
            v33 = v10;
            if v33 == 10 {
                core::option::unwrap_failed(); /* do not return */
            }
            v34 = (4 <= (v33 - 6 & 4294967295 & 255 & 255 & 255) ? 0 : v33 - 5);
            goto *((4380552 + vvar_18{reg 16} * 4) as &i32) + 4380552;
        }
    }
}
