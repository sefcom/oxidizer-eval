fn uu_more::Pager::draw_prompt(a0: i64, a1: i64, a2: i64, a3: i32) {
    let v0: core::fmt::Arguments;  // [bp-0x148], Other Possible Types: core::fmt::rt::Argument, u64
    let v1: u128;  // [bp-0x148]
    let v2: u64;  // [bp-0x148]
    let v3: core::result::Result<(), std::io::error::Error>;  // [bp-0x140], Other Possible Types: u64
    let v4: core::fmt::rt::Argument;  // [bp-0x138]
    let v5: u128;  // [bp-0x138]
    let v6: core::fmt::rt::Argument;  // [bp-0x128], Other Possible Types: void*
    let v7: u128;  // [bp-0x128]
    let v8: struct16;  // [bp-0x118], Other Possible Types: u64
    let v9: u64;  // [bp-0x118]
    let v10: u64;  // [bp-0x118]
    let v11: u64;  // [bp-0x110]
    let v12: u64;  // [bp-0x108]
    let v13: core::fmt::Arguments;  // [sp-0x100], Other Possible Types: std::io::stdio::Stdout, struct_0 *
    let v14: std::io::stdio::Stdout;  // [bp-0xf8], Other Possible Types: u64
    let v15: u32;  // [bp-0xcc]
    let v16: struct24;  // [bp-0xc8]
    let v17: u8;  // [bp-0xa8]
    let v18: struct24;  // [bp-0x90], Other Possible Types: u128
    let v19: u64;  // [bp-0x80]
    let v20: u128;  // [bp-0x78]
    let v21: core::fmt::Arguments;  // [bp-0x68]
    let v22: u128;  // [bp-0x60]
    let v23: core::fmt::Arguments;  // [bp-0x50]
    let v24: struct16;  // [bp-0x48]
    let v25: i8;  // [bp-0x38]
    let v27: std::io::stdio::Stdout;  // rax
    let v29: std::io::stdio::Stdout;  // rax
    let v30: std::io::stdio::Stdout;  // rcx
    let v31: u128;  // xmm1
    let v32: u128;  // xmm0
    let v34: i64;  // rax
    let v35: core::fmt::Arguments;  // rax

    if *((a0 + 48) as &i64) == a2 {
        v27 = *((a0 + 32) as &i64);
        v29 = v27;
        v30 = 1;
        if v29 {
            v29 = *((a0 + 40) as &i64);
            v30 = v27;
        }
        v13 = v30;
        v14 = v29;
        v10 = &v13;
        v11 = <&T as core::fmt::Display>::fmt;
        v0 = "Next file: ";
        v3 = 1;
        v6 = 0;
        v34 = &v10;
    } else {
        v31 = BinaryOp InterleaveLOV - 0x45300000000000004330000000000000;
        v32 = BinaryOp MulV;
        round(v32);
        v8 = BinaryOp MinV;
        v10 = v9 & -0x10000 | v8;
        v13 = &v10;
        v14 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v2 = &g_562a98;
        v3 = 2;
        v6 = 0;
        v34 = &v13;
    }
    vvar_402{stack -328} = core::fmt::Arguments OrderedDict({0: &[&str] OrderedDict({0: 𝜙@64b [((5101399, None), vvar_315{stack -328}), ((5101554, None), vvar_308{stack -328})]}), 16: &[core::fmt::rt::Argument] OrderedDict({0: vvar_8{reg 16}, 8: 0x1<64>})})
    core::option::Option<T>::map_or_else(&v17, &v0);
    format!("--More--({})", &v17);
    v16 = v18;
    if *((a0 + 66) as &i8) {
        if a3 == 0x110000 {
            format!("{}[Press space to continue, 'q' to quit.]", &v16);
            v8 = v22;
            v35 = v23;
        } else {
            v15 = a3;
            format!("{} [Unknown key: '{}'. Press 'h' for instructions. (unimplemented)]", &v16, &v15);
            v8 = v20;
            v35 = v21;
        }
    } else {
        if a3 == 0x110000 {
            v12 = v19;
            v8 = v18;
        } else {
            format!("{}{}", &v16, "\x07");
            v8 = v24;
            v35 = *(&v25 as &i64);
        }
    }
    v0 = core::fmt::rt::Argument {
        ty: &g_418aac
    };
    v4 = core::fmt::rt::Argument {
        ty: &v10
    };
    v6 = core::fmt::rt::Argument {
        ty: &g_418b38
    };
    v13 = core::fmt::Arguments {
        pieces: ["\r", &g_562b38, &g_562b48]
        args: [v1, v5, v7]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v13), "src/uu/more/src/more.rs");
    return;
}
