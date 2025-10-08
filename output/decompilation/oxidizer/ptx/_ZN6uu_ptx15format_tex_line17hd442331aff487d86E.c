fn uu_ptx::format_tex_line(a0: i64, a1: i64, a2: u64, a3: u64, a4: u64, a5: u32, a6: u64, a7: u64, a8: u64, a9: u64) -> void {
    let v0: void*;  // [bp-0x208]
    let v1: u64;  // [bp-0x200]
    let v2: void*;  // [bp-0x1f8]
    let v3: core::fmt::rt::Argument;  // [bp-0x1f0], Other Possible Types: core::fmt::Arguments
    let v4: struct56;  // [bp-0x1f0]
    let v5: struct120;  // [bp-0x1f0]
    let v6: core::fmt::rt::Argument;  // [bp-0x1e0], Other Possible Types: u64
    let v7: struct16;  // [bp-0x1e0]
    let v8: core::fmt::rt::Argument;  // [bp-0x1d0]
    let v9: iNone;  // [bp-0x1d0]
    let v10: u64;  // [bp-0x1c8]
    let v11: core::fmt::rt::Argument;  // [bp-0x1c0]
    let v12: struct48;  // [bp-0x1c0]
    let v13: core::fmt::rt::Argument;  // [bp-0x1b0], Other Possible Types: u64
    let v14: struct24;  // [bp-0x1b0]
    let v15: u64;  // [bp-0x198]
    let v16: u128;  // [bp-0x190]
    let v17: u64;  // [bp-0x180]
    let v18: u128;  // [bp-0x178]
    let v19: u64;  // [bp-0x170]
    let v20: u64;  // [bp-0x168]
    let v21: u128;  // [bp-0x158]
    let v22: u64;  // [bp-0x150]
    let v23: u64;  // [bp-0x148]
    let v24: u128;  // [bp-0x138]
    let v25: u64;  // [bp-0x130]
    let v26: u64;  // [bp-0x128]
    let v27: u128;  // [bp-0x118]
    let v28: u64;  // [bp-0x110]
    let v29: u64;  // [bp-0x108]
    let v30: u128;  // [bp-0xf8]
    let v31: u64;  // [bp-0xf0]
    let v32: u64;  // [bp-0xe8]
    let v33: i64;  // [bp-0xe0]
    let v34: core::fmt::Arguments;  // [bp-0xd8], Other Possible Types: core::fmt::rt::Argument, struct24
    let v35: u128;  // [bp-0xd8]
    let v36: core::fmt::rt::Argument;  // [bp-0xa8], Other Possible Types: struct24
    let v37: u128;  // [bp-0xa8]
    let v38: struct24;  // [bp-0x90]
    let v39: struct24;  // [bp-0x78]
    let v40: struct24;  // [bp-0x60]
    let v41: struct24;  // [bp-0x48]

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v34 = core::fmt::rt::Argument {
        ty: a1
    };
    v3 = core::fmt::Arguments {
        pieces: ["\\", " "]
        args: [v35]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v0, &v3), "src/uu/ptx/src/ptx.rs");
    v5 = uu_ptx::prepare_line_chunks(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    v20 = v6;
    v18 = v5.field_0;
    v23 = v10;
    v21 = v5.field_24;
    v26 = v13;
    v24 = v5.field_48;
    v29 = v15;
    v27 = v5.field_72;
    v32 = v17;
    v30 = v16;
    v38 = uu_ptx::format_tex_field(v19, v20);
    v39 = uu_ptx::format_tex_field(v22, v23);
    v40 = uu_ptx::format_tex_field(v25, v26);
    v41 = uu_ptx::format_tex_field(v28, v29);
    v36 = uu_ptx::format_tex_field(v31, v32);
    v3 = core::fmt::rt::Argument {
        ty: &v38
    };
    v6 = core::fmt::rt::Argument {
        ty: &v39
    };
    v8 = core::fmt::rt::Argument {
        ty: &v40
    };
    v11 = core::fmt::rt::Argument {
        ty: &v41
    };
    v13 = core::fmt::rt::Argument {
        ty: &v36
    };
    v34 = core::fmt::Arguments {
        pieces: ["{", "}{", "}{", "}{", "}{", "}"]
        args: [v4, v7, v9, v12, v14]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v0, &v34), "src/uu/ptx/src/ptx.rs");
    if *((a1 + 89) as &i8) || *((a1 + 90) as &i8) == 1 {
        v34 = uu_ptx::format_tex_field(a8, a9);
        v36 = core::fmt::rt::Argument {
            ty: &v34
        };
        v3 = core::fmt::Arguments {
            pieces: ["{", "}"]
            args: [v37]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v0, &v3), "src/uu/ptx/src/ptx.rs");
    }
    *((v33 + 16) as &i64) = 0;
    *(v33 as &i128) = *(&v0 as &i128);
    return;
}
