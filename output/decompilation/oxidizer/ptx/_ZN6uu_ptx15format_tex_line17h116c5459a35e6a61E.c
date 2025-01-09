fn uu_ptx::format_tex_line(a0: u32, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i8;  // [sp-0x201]
    let v2: i64;  // [sp-0x200]
    let v3: i64;  // [sp-0x1e8]
    let v4: i64;  // [sp-0x1e0]
    let v5: i64;  // [sp-0x1d8]
    let v6: i64;  // [sp-0x1d0]
    let v7: i64;  // [sp-0x1c8]
    let v8: i64;  // [sp-0x1c0]
    let v9: i64;  // [sp-0x1b8]
    let v10: i64;  // [sp-0x1b0]
    let v11: i64;  // [sp-0x1a8]
    let v12: i64;  // [sp-0x1a0]
    let v13: i64;  // [bp-0x198]
    let v14: i64;  // [sp-0x190]
    let v15: i64;  // [sp-0x188]
    let v16: i64;  // [bp-0x180]
    let v17: i8;  // [bp-0x170]
    let v18: i128;  // [sp-0x168]
    let v19: i64;  // [sp-0x158]
    let v20: i128;  // [sp-0x148]
    let v21: i64;  // [sp-0x138]
    let v22: i128;  // [sp-0x128]
    let v23: i64;  // [sp-0x118]
    let v24: i128;  // [sp-0x108]
    let v25: i64;  // [sp-0xf8]
    let v26: i64;  // [sp-0xe8]
    let v27: i64;  // [sp-0xd8], Other Possible Types: struct24
    let v28: i64;  // [sp-0xd0]
    let v29: i64;  // [sp-0xc8]
    let v30: i64;  // [sp-0xc0]
    let v31: i64;  // [sp-0xb8]
    let v32: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v33: i64;  // [sp-0xa0]
    let v34: struct24;  // [sp-0x90], Other Possible Types: i192
    let v35: i192;  // [sp-0x78], Other Possible Types: struct24
    let v36: struct24;  // [sp-0x60], Other Possible Types: i192
    let v37: struct24;  // [sp-0x48], Other Possible Types: i192
    let v38: i64;  // [bp+0x8]
    let v39: i8;  // [bp+0x10]
    let v40: i8;  // [bp+0x18]
    let v41: i8;  // [bp+0x20]
    let v42: i64;  // rax
    let v43: i64;  // r8
    let v44: i64;  // r14
    let v45: i64;  // rdx
    let v46: i64;  // rax
    let v47: i64;  // r12
    let v48: i64;  // rax

    v2 = a2;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    v3 = a1;
    v27 = a1;
    v28 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = "\\";
    v8 = 2;
    v11 = 0;
    v9 = &v27;
    v10 = 1;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v7) as i32, "src/uu/ptx/src/ptx.rs");
    v1 = *((v3 + 90) as &i8);
    if !v1 {
        v43 = "src/uu/ptx/src/ptx.rs";
        v44 = 0;
        v2 = v2;
    } else {
        v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v2, a4, a5);
        if v42 {
            core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v42, v45, v40, v41), v45);
            v44 = v2 - v45;
            v46 = core::cmp::max_by(v45, v44);
            v43 = "src/uu/ptx/src/ptx.rs";
            v2 = v46;
        }
    }
    v47 = v39;
    v48 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v44, v2, v38, v47, v43);
    v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v2, a3, a4, a5);
    if !v26 {
        v2 = a3;
    }
    v0 = v3;
    uu_ptx::get_output_chunks(&v7, v48, v45, v45, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a3, v47, v38, v47, "src/uu/ptx/src/ptx.rs"), v45);
    v19 = v9;
    v18 = v7;
    v21 = v12;
    v20 = v10;
    v23 = v15;
    v22 = v13;
    v25 = v17;
    v24 = v16;
    v34 = uu_ptx::format_tex_field(*((&v18 as &char + 8) as &i64), v19);
    v35 = uu_ptx::format_tex_field(*((&v20 as &char + 8) as &i64), v21);
    v36 = uu_ptx::format_tex_field(v26, v45);
    v37 = uu_ptx::format_tex_field(*((&v22 as &char + 8) as &i64), v23);
    v32 = uu_ptx::format_tex_field(*((&v24 as &char + 8) as &i64), v25);
    v7 = &v34;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v9 = &v35;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = &v36;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &v37;
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v15 = &v32;
    v16 = <alloc::string::String as core::fmt::Display>::fmt;
    v27 = "{";
    v28 = 6;
    v31 = 0;
    v29 = &v7;
    v30 = 5;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v27) as i32, "src/uu/ptx/src/ptx.rs");
    if !(!(!v1) || !(!*((v3 + 89) as &i8))) {
        return;
    }
    v27 = uu_ptx::format_tex_field(v40, v41);
    v32 = &v27;
    v33 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = "{";
    v8 = 2;
    v11 = 0;
    v9 = &v32;
    v10 = 1;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v7) as i32, "src/uu/ptx/src/ptx.rs");
}
