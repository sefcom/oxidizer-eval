fn uu_more::Pager::draw_prompt(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x148]
    let v1: u64;  // [sp-0x140]
    let v2: u64;  // [sp-0x138]
    let v3: u64;  // [sp-0x130]
    let v4: void*;  // [sp-0x128], Other Possible Types: u64
    let v5: u64;  // [sp-0x120]
    let v6: u128;  // [bp-0x118]
    let v7: u64;  // [sp-0x110]
    let v8: u64;  // [sp-0x108]
    let v9: u64;  // [sp-0x100]
    let v10: u64;  // [sp-0xf8]
    let v11: u64;  // [sp-0xf0]
    let v12: u64;  // [sp-0xe8]
    let v13: void*;  // [sp-0xe0]
    let v14: u32;  // [sp-0xcc]
    let v15: u128;  // [sp-0xc8]
    let v16: u64;  // [sp-0xb8]
    let v17: u8;  // [bp-0xa8]
    let v18: i8;  // [bp-0x90]
    let v19: i8;  // [bp-0x80]
    let v20: i8;  // [bp-0x78]
    let v21: i8;  // [bp-0x68]
    let v22: i8;  // [bp-0x60]
    let v23: i8;  // [bp-0x50]
    let v24: i8;  // [bp-0x48]
    let v25: i8;  // [bp-0x38]
    let v27: u64;  // rax
    let v28: u64;  // rax
    let v30: u64;  // rcx
    let v31: u64;  // rax
    let v32: u64;  // xmm0lq
    let v34: u256;  // ymm0
    let v35: u64;  // rax
    let v36: u64;  // rax
    let v37: u64;  // rdx

    v27 = a0->field_30;
    if v27 != a2 {
        round(v32);
        v6 = ...;
        v9 = &v6;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v0 = &g_5639d8;
        v1 = 2;
        v4 = 0;
        v35 = &v9;
    } else {
        v28 = a0->field_20;
        v9 = v30;
        v10 = v31;
        v6 = &v9;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = "Next file: ";
        v1 = 1;
        v4 = 0;
        v35 = &v6;
    }
    v2 = v35;
    v3 = 1;
    core::option::Option<T>::map_or_else(&v17, &v0);
    format!("--More--({:?})", &v17);
    v15 = v18;
    v16 = v19;
    if a0->field_42 {
        if a3 == 0x110000 {
            format!("{:?}[Press space to continue, 'q' to quit.]", &v15);
            *(&v6 as &i8) = v22;
            v36 = v23;
        } else {
            v14 = a3;
            format!("{:?} [Unknown key: '{:?}'. Press 'h' for instructions. (unimplemented)]", &v15, &v14);
            *(&v6 as &i8) = v20;
            v36 = v21;
        }
LABEL_4dde66:
        v8 = v36;
    } else if a3 == 0x110000 {
        v8 = v19;
        *(&v6 as &i8) = v18;
    } else {
        format!("{:?}{:?}", &v15, "\x07");
        *(&v6 as &i8) = v24;
        v36 = v25;
        goto LABEL_4dde66;
    }
    v0 = &g_418ee6;
    v1 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v2 = &v6;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_418ee7;
    v5 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v9 = "\r";
    v10 = 3;
    v13 = 0;
    v11 = &v0;
    v12 = 3;
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v9, v37), "src/uu/more/src/more.rs");
    return;
}
