fn uu_pr::get_line_for_printing(a0: u32, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: &u8;  // [sp-0x168]
    let v1: u64;  // [sp-0x160]
    let v2: &u8;  // [sp-0x158], Other Possible Types: &&struct_1, u64
    let v3: u64;  // [sp-0x150]
    let v4: void*;  // [sp-0x148], Other Possible Types: &&struct_1
    let v5: u64;  // [sp-0x140]
    let v6: u64;  // [sp-0x138], Other Possible Types: &u8
    let v7: u64;  // [sp-0x128]
    let v8: &u8;  // [sp-0x118]
    let v9: u64;  // [sp-0x108]
    let v10: &u8;  // [sp-0xf8], Other Possible Types: u64
    let v11: u64;  // [sp-0xf0]
    let v12: &u8;  // [sp-0xe8], Other Possible Types: &&struct_1
    let v13: u64;  // [sp-0xe0]
    let v14: void*;  // [sp-0xd8]
    let v15: u64;  // [sp-0xc8]
    let v16: void*;  // [sp-0xc0]
    let v17: u64;  // [sp-0xb8]
    let v18: void*;  // [sp-0xb0]
    let v19: u64;  // [sp-0xa8]
    let v20: u64;  // [sp-0xa0]
    let v21: &u8;  // [sp-0x98]
    let v22: i8;  // [bp-0x90]
    let v23: i8;  // [bp-0x80]
    let v24: &u8;  // [sp-0x60]
    let v25: &u8;  // [sp-0x58]
    let v26: &&struct_1;  // [sp-0x50]
    let v27: u8;  // [bp-0x48]
    let v28: u64;  // [bp+0x8]
    let v29: i8;  // [bp+0x10]
    let v32: u64;  // rbp
    let v36: &u8;  // rdx
    let v38: &u8;  // rdx

    v15 = a3;
    v16 = 0;
    v17 = 1;
    v18 = 0;
    uu_pr::get_formatted_line_number(&v27, a1, a2[4], a4);
    core::result::Result<T,E>::unwrap(*(a2) == 0x8000000000000000, v6);
    v6 = &a2[*(a2) == 0x8000000000000000];
    v10 = &v27;
    v11 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = &v6;
    v13 = <&T as core::fmt::Display>::fmt;
    v0 = &g_46bf10;
    v1 = 2;
    v4 = 0;
    v2 = &v10;
    v3 = 2;
    core::option::Option<T>::map_or_else();
    v8 = v22;
    v32 = v23;
    v9 = v32;
    v19 = &a1->padding_0[168];
    if a1->field_143 {
        v36 = stack_base + -192;
    } else {
        v36 = &a1->padding_0[192];
    }
    v20 = core::iter::traits::iterator::Iterator::fold((&v8)[1], &((&v8)[1])[v32]) * 7 + v32;
    if a4 + 1 == v29 {
        v38 = stack_base + -192;
    }
    v21 = v38;
    v24 = &v15;
    v25 = &v20;
    v26 = &v8;
    if !a5 {
        v2 = v23;
        *(&v0 as &i8) = v22;
        goto LABEL_5c8434;
    } else {
        uu_pr::get_line_for_printing::{{closure}}(&v0, &v24, v28);
        *(&v10 as &i128) = *(&v1 as &i128);
        v2 = v9;
        v0 = v8;
        if v6 == 0x8000000000000000 {
LABEL_5c8434:
            v7 = v2;
            *(&v6 as &i128) = *(&v0 as &i128);
        }
    }
    v0 = &v19;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &v6;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &v21;
    v5 = <&T as core::fmt::Display>::fmt;
    v10 = &g_475660;
    v11 = 3;
    v14 = 0;
    v12 = &v0;
    v13 = 3;
    core::option::Option<T>::map_or_else();
    return;
}
