fn uu_ptx::format_tex_line(a0: i64, a1: i64, a2: i64, a3: i32, a4: i64, a5: i64, a6: i32, a7: i32, a8: i64, a9: i64) -> int {
    let v0: u8;  // [bp-0x201]
    let <0x5b7e90[is_43]|Stack bp-0xa8, 1 B>: i64;  // [bp-0xa8]
    let v1: u64;  // [bp-0x200]
    let v2: &mut [u8];  // [bp-0x200]
    let v3: void*;  // [bp-0x1e0]
    let v4: u64;  // [bp-0x1d8]
    let v5: void*;  // [bp-0x1d0]
    let v6: core::fmt::rt::Argument;  // [bp-0x1c8], Other Possible Types: core::fmt::Arguments
    let v7: u128;  // [bp-0x1c8]
    let v8: &mut [u8];  // [bp-0x1b8], Other Possible Types: core::fmt::rt::Argument
    let v9: u128;  // [bp-0x1b8]
    let v10: core::fmt::rt::Argument;  // [bp-0x1a8]
    let v11: u128;  // [bp-0x1a8]
    let v12: u64;  // [bp-0x1a0]
    let v13: core::fmt::rt::Argument;  // [bp-0x198], Other Possible Types: char
    let v14: u128;  // [bp-0x198]
    let v15: core::fmt::rt::Argument;  // [bp-0x188], Other Possible Types: u64
    let v16: u128;  // [bp-0x188]
    let v17: i8;  // [bp-0x180]
    let v18: u64;  // [bp-0x170]
    let v19: u128;  // [bp-0x168]
    let v20: u64;  // [bp-0x160]
    let v21: u64;  // [bp-0x158]
    let v22: u128;  // [bp-0x148]
    let v23: u64;  // [bp-0x140]
    let v24: u64;  // [bp-0x138]
    let v25: u128;  // [bp-0x128]
    let v26: u64;  // [bp-0x120]
    let v27: u64;  // [bp-0x118]
    let v28: u128;  // [bp-0x108]
    let v29: u64;  // [bp-0x100]
    let v30: u64;  // [bp-0xf8]
    let v31: i64;  // [bp-0xf0]
    let v32: core::option::Option<&str>;  // [bp-0xe8]
    let v33: core::fmt::Arguments;  // [bp-0xd8], Other Possible Types: core::fmt::rt::Argument
    let v34: u128;  // [bp-0xd8]
    let v35: core::fmt::rt::Argument;  // [bp-0xa8]
    let v36: u128;  // [bp-0xa8]
    let v37: i8;  // [bp-0x90]
    let v38: i8;  // [bp-0x78]
    let v39: i8;  // [bp-0x60]
    let v40: i8;  // [bp-0x48]
    let v42: void*;  // r14
    let v44: u64;  // r8
    let v45: void*;  // r14
    let v46: u64;  // rdx
    let v47: u64;  // rax
    let v48: u64;  // rax
    let v49: struct56;  // rax

    v1 = a2;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v33 = core::fmt::rt::Argument {
        ty: a1
    };
    v6 = core::fmt::Arguments {
        pieces: ["\\", " "]
        args: [v34]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v3, &v6) as i32, "src/uu/ptx/src/ptx.rs");
    v0 = *((a1 + 90) as &i8);
    if *((a1 + 90) as &i8) {
        v42 = 0;
        v47 = core::str::<impl str>::trim_start_matches(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(None, v1, a4, a5) as u64, v46, a8, a9);
        core::str::<impl str>::trim_start_matches(v47, v46);
        v48 = core::cmp::max_by(v46, v1 - v46);
        v44 = "src/uu/ptx/src/ptx.rs";
        v2 = v48;
    } else {
        v44 = "src/uu/ptx/src/ptx.rs";
        v45 = 0;
        v2 = v1;
    }
    v49 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v45, v2, a6, a7, v44);
    v32 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v1, a3, a4, a5) as u64;
    uu_ptx::get_output_chunks(&v6, v49, v46, v46, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a3, a7, a6, a7, "src/uu/ptx/src/ptx.rs"), v46, a1);
    v21 = v8;
    v19 = *(&v6.pieces.ptr as &i128);
    v24 = v12;
    v22 = *(&v6.args.len as &i128);
    v27 = v15;
    v25 = *(&v13 as &i128);
    v30 = v18;
    v28 = *(&v17 as &i128);
    uu_ptx::format_tex_field(v20, v21, a3);
    uu_ptx::format_tex_field(v23, v24, a3);
    uu_ptx::format_tex_field(v32, v46, a3);
    uu_ptx::format_tex_field(v26, v27, a3);
    uu_ptx::format_tex_field(v29, v30, a3);
    v6 = core::fmt::rt::Argument {
        ty: &v37
    };
    v8 = core::fmt::rt::Argument {
        ty: &v38
    };
    v10 = core::fmt::rt::Argument {
        ty: &v39
    };
    v13 = core::fmt::rt::Argument {
        ty: &v40
    };
    v15 = core::fmt::rt::Argument {
        ty: &<0x5b7e90[is_43]|Stack bp-0xa8, 1 B>
    };
    v33 = core::fmt::Arguments {
        pieces: ["{", "}{", "}{", "}{", "}{", "}"]
        args: [v7, v9, v11, v14, v16]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v3, &v33) as i32, "src/uu/ptx/src/ptx.rs");
    if v0 || *((a1 + 89) as &i8) {
        uu_ptx::format_tex_field(a8, a9, v0 | *((a1 + 89) as &i8));
        v35 = core::fmt::rt::Argument {
            ty: &v33
        };
        v6 = core::fmt::Arguments {
            pieces: ["{", "}"]
            args: [v36]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v3, &v6) as i32, "src/uu/ptx/src/ptx.rs");
    }
    *((v31 + 16) as &i64) = 0;
    *(v31 as &i128) = *(&v3 as &i128);
    return;
}
