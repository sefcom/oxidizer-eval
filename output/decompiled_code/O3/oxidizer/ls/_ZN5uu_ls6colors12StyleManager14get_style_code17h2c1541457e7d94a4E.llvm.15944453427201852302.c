fn uu_ls::colors::StyleManager::get_style_code(a0: &u64, a1: void*, a2: &u128) -> u64 {
    let v0: u8;  // [bp-0xc9]
    let v1: u8;  // [sp-0xc1]
    let v2: i8;  // [bp-0xc0]
    let v3: i8;  // [bp-0xbc]
    let v4: u8;  // [bp-0xba]
    let v5: u8;  // [bp-0xb9]
    let v6: void*;  // [sp-0xb8]
    let v7: &struct_1;  // [sp-0xb0]
    let v8: void*;  // [sp-0xa8]
    let v9: u64;  // [sp-0xa0]
    let v10: u64;  // [sp-0x98]
    let v11: void*;  // [sp-0x90]
    let v12: u64;  // [sp-0x88]
    let v13: u64;  // [sp-0x70]
    let v14: u8;  // [sp-0x68]
    let v15: u32;  // [sp-0x67]
    let v16: u16;  // [sp-0x63]
    let v17: u8;  // [sp-0x61]
    let v18: u8;  // [sp-0x60]
    let v19: void*;  // [sp-0x58]
    let v20: void*;  // [sp-0x48]
    let v21: u64;  // [sp-0x38]
    let v22: u64;  // [sp-0x30]
    let v23: u64;  // [sp-0x28]
    let v24: u8;  // [sp-0x20]
    let v26: &struct_1;  // r15
    let v27: u64;  // rcx
    let v28: u64;  // rcx
    let v29: u64;  // rcx

    *((&a1->field_8 as &char + 5) as &i64) = *((a2 as &char + 13) as &i64);
    *(&(&a1->padding_0)[1] as &u128) = *(a2);
    lscolors::style::Style::to_nu_ansi_term_style(&v0, a2);
    v1 = 0;
    v18 = v5;
    v13 = *(&v0 as &i64);
    v14 = v1;
    v15 = v2;
    v16 = v3;
    v17 = v4;
    v9 = 0x8000000000000000;
    v10 = 1;
    v11 = 0;
    v12 = 9223372036854775810;
    v6 = 0;
    v7 = 1;
    v8 = 0;
    v23 = 32;
    v24 = 3;
    v19 = 0;
    v20 = 0;
    v21 = &v6;
    v22 = &g_5ad0c0;
    if <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt(&v9, &v19) as i8 {
        core::result::unwrap_failed(); /* do not return */
    }
    v26 = v7;
    v27 = v8;
    v28 = v27 - 4;
    if !(v27 >= 4 && v27 != 4 && v26->padding_0[v28] <= 191) {
        *(a0) = v6;
        a0[1] = v26;
        a0[2] = v29;
        return v29;
    }
    core::panicking::panic(); /* do not return */
}
