fn uu_ls::display_len_or_rdev(a0: &u64, a1: void*, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: void*;  // [sp-0x90]
    let v1: u64;  // [sp-0x88]
    let v2: void*;  // [sp-0x80]
    let v3: u32;  // [sp-0x78], Other Possible Types: i32
    let v4: i32;  // [sp-0x74], Other Possible Types: u32
    let v5: void*;  // [sp-0x70]
    let v6: void*;  // [sp-0x60]
    let v7: u64;  // [sp-0x50]
    let v8: u64;  // [sp-0x48]
    let v9: u64;  // [sp-0x40]
    let v10: u8;  // [sp-0x38]
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rax

    if (0xb000 & a1->field_38 | 0x4000) == 0x6000 {
        v12 = a1->field_48;
        v3 = v12 >> 32 & -0x1000 | (v12 & 4294967295 & 4294967295) >> 8 & 4095;
        v4 = v12 >> 12 & -0x100 | v12;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v9 = 32;
        v10 = 3;
        v5 = 0;
        v6 = 0;
        v7 = &v0;
        v8 = &g_5ac0e8;
        if core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v3, &v5) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v9 = 32;
        v10 = 3;
        v5 = 0;
        v6 = 0;
        v7 = &v0;
        v8 = &g_5ac0e8;
        if !core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v4, &v5) as i8 {
            v16 = v2;
            a0[2].field_16 = v16;
            *(&a0[1].field_16 as &i128) = *(&v0 as &i128);
            a0->field_0 = v0;
            a0->field_16 = v1;
            a0[1].field_0 = v2;
            return v16;
        }
        core::result::unwrap_failed(); /* do not return */
    } else if !a2 {
        core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
    } else {
        v13 = a1->field_50;
        if (v13 | a2) >> 32 {
            v14 = (0 CONCAT v13) /m a2;
            v15 = (0 CONCAT v13) /m a2 >> 64;
        } else {
            v14 = (0 CONCAT v13) /m a2 & 4294967295;
            v15 = (0 CONCAT v13) /m a2 >> 32 & 4294967295;
        }
        uucore::features::format::human::human_readable(a0, v14 - -1 - (v15 < 1), a3, a3, a4, a5);
        a0[1].field_16 = 0x8000000000000000;
        return 0x8000000000000000;
    }
}
