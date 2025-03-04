fn uu_more::Pager::draw_prompt(a0: void*, a1: u64, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [bp-0x148], Other Possible Types: Arguments, int
    let v1: i64;  // [sp-0x148]
    let v2: i64;  // [sp-0x140]
    let v3: i64;  // [sp-0x138]
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: i64;  // [sp-0x120]
    let v7: i16;  // [bp-0x118], Other Possible Types: unsigned long
    let v8: iNone;  // [sp-0x118], Other Possible Types: String, unsigned long
    let v9: i64;  // [sp-0x110]
    let v10: i64;  // [sp-0x100]
    let v11: i64;  // [sp-0xf8]
    let v12: i64;  // [sp-0xf0]
    let v13: i64;  // [sp-0xe8]
    let v14: i64;  // [sp-0xe0]
    let v15: i32;  // [sp-0xcc]
    let v16: String;  // [sp-0xc8]
    let v17: struct24;  // [sp-0xa8]
    let v18: String;  // [sp-0x90]
    let v19: String;  // [sp-0x78]
    let v20: String;  // [sp-0x60]
    let v21: String;  // [sp-0x48]
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v26: i64;  // rcx
    let v27: i64;  // rcx
    let v28: i64;  // xmm0lq
    let v29: i64;  // rcx
    let v30: iNone;  // ymm0
    let v32: i64;  // rax

    v23 = *((a0 + 48) as &i64);
    if v23 != a2 {
        round(v28);
        *(&v7 as &u16) = (...) as u64;
        v10 = &v7;
        v11 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v0 = &g_562a98;
        v0 = 0;
    } else {
        v24 = *((a0 + 32) as &i64);
        v26 = 1;
        if v27 {
            v29 = v24;
            v24 = *((a0 + 40) as &i64);
        }
        v10 = v26;
        v11 = v24;
        *(&v7 as &&unsigned long) = &v10;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = Arguments {
            pieces: ["Next file: ", ""]
            args: &[Argument] {
                ptr: v31
                len: 1
            }
            fmt: 0
        };
        v2 = 1;
    }
    v17 = core::option::Option<T>::map_or_else(&v0);
    v18 = format!("--More--({})", &v17);
    v16 = v18;
    if *((a0 + 66) as &i8) {
        if a3 == 0x110000 {
            v20 = format!("{}[Press space to continue, 'q' to quit.]", &v16);
            *(&v8 as &i128) = *(&v20.ptr as &i128);
            v32 = v20.len;
        } else {
            v15 = a3;
            v19 = format!("{} [Unknown key: '{}'. Press 'h' for instructions. (unimplemented)]", &v16, &v15);
            *(&v8 as &i128) = *(&v19.ptr as &i128);
            v32 = v19.len;
        }
LABEL_4dda96:
        v8 = v32;
    } else if a3 == 0x110000 {
        v8 = v18;
    } else {
        v21 = format!("{}{}", &v16, "\x07");
        *(&v8 as &i128) = *(&v21.ptr as &i128);
        v32 = v21.len;
        goto LABEL_4dda96;
    }
    v1 = &g_418aac;
    v2 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v3 = &v8;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = &g_418b38;
    v6 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v10 = "\r";
    v11 = 3;
    v14 = 0;
    v12 = &v1;
    v13 = 3;
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v10), "src/uu/more/src/more.rs");
    return;
}
