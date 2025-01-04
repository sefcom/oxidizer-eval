fn uu_more::Pager::draw_prompt(a0: void*, a1: u64, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x148]
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: i64;  // [sp-0x120]
    let v6: i192;  // [bp-0x118]
    let v7: i64;  // [sp-0x110]
    let v8: i64;  // [sp-0x108]
    let v9: i64;  // [sp-0x100]
    let v10: i64;  // [sp-0xf8]
    let v11: i64;  // [sp-0xf0]
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xe0]
    let v14: i32;  // [sp-0xcc]
    let v15: i192;  // [bp-0xc8]
    let v16: struct24;  // [sp-0xa8]
    let v17: i192;  // [sp-0x90]
    let v18: i192;  // [sp-0x78]
    let v19: i192;  // [sp-0x60]
    let v20: i192;  // [sp-0x48]
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rax
    let v27: i64;  // xmm0lq
    let v29: i256;  // ymm0
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rdx

    v22 = *((a0 + 48) as &i64);
    if v22 != a2 {
        round(v27);
        v6 = ...;
        v9 = &v6;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v0 = &g_562a98;
        v1 = 2;
        v4 = 0;
        v30 = &v9;
    } else {
        v23 = *((a0 + 32) as &i64);
        v25 = 1;
        if v23 {
            v26 = *((a0 + 40) as &i64);
        }
        v9 = v25;
        v10 = v26;
        v6 = &v9;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = "Next file: ";
        v1 = 1;
        v4 = 0;
        v30 = &v6;
    }
    v2 = v30;
    v3 = 1;
    v16 = core::option::Option<T>::map_or_else(&v0);
    v17 = format!("--More--({:?})", &v16);
    v15 = v17;
    if *((a0 + 66) as &i8) {
        if a3 == 0x110000 {
            v19 = format!("{:?}[Press space to continue, 'q' to quit.]", &v15);
            v6 = v19;
            v31 = *((&v19 as &char + 16) as &i64);
        } else {
            v14 = a3;
            v18 = format!("{:?} [Unknown key: '{:?}'. Press 'h' for instructions. (unimplemented)]", &v15, &v14);
            v6 = v18;
            v31 = *((&v18 as &char + 16) as &i64);
        }
LABEL_4dda96:
        v8 = v31;
    } else if a3 == 0x110000 {
        v6 = v17;
    } else {
        v20 = format!("{:?}{:?}", &v15, "\x07");
        v6 = v20;
        v31 = *((&v20 as &char + 16) as &i64);
        goto LABEL_4dda96;
    }
    v0 = &g_418aac;
    v1 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v2 = &v6;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_418b38;
    v5 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v9 = "\r";
    v10 = 3;
    v13 = 0;
    v11 = &v0;
    v12 = 3;
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v9, v32), "src/uu/more/src/more.rs");
    return;
}
