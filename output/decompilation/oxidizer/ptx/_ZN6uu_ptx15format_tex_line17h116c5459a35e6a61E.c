fn uu_ptx::format_tex_line(a0: u32, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32, a7: u32, a8: u32, a9: u32) -> u64 {
    let v0: i8;  // [sp-0x201]
    let v1: i64;  // [sp-0x200]
    let v2: i64;  // [sp-0x1e0]
    let v3: i64;  // [sp-0x1d8]
    let v4: i64;  // [sp-0x1d0]
    let v5: i64;  // [sp-0x1c8]
    let v6: i64;  // [sp-0x1c0]
    let v7: i64;  // [sp-0x1b8]
    let v8: i64;  // [sp-0x1b0]
    let v9: i64;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i8;  // [bp-0x198], Other Possible Types: unsigned long
    let v12: i64;  // [sp-0x190]
    let v13: i64;  // [sp-0x188]
    let v14: i8;  // [bp-0x180], Other Possible Types: unsigned long
    let v15: i8;  // [bp-0x170]
    let v16: iNone;  // [sp-0x168]
    let v17: i64;  // [sp-0x158]
    let v18: iNone;  // [sp-0x148]
    let v19: i64;  // [sp-0x138]
    let v20: iNone;  // [sp-0x128]
    let v21: i64;  // [sp-0x118]
    let v22: iNone;  // [sp-0x108]
    let v23: i64;  // [sp-0xf8]
    let v24: i64;  // [sp-0xe8]
    let v25: i64;  // [sp-0xd8], Other Possible Types: struct24
    let v26: i64;  // [sp-0xd0]
    let v27: i64;  // [sp-0xc8]
    let v28: i64;  // [sp-0xc0]
    let v29: i64;  // [sp-0xb8]
    let v30: struct24;  // [sp-0xa8], Other Possible Types: unsigned long
    let v31: i64;  // [sp-0xa0]
    let v32: struct24;  // [sp-0x90]
    let v33: struct24;  // [sp-0x78]
    let v34: struct24;  // [sp-0x60]
    let v35: struct24;  // [sp-0x48]
    let v36: i64;  // rax
    let v37: i64;  // r8
    let v38: i64;  // r14
    let v39: i64;  // rsi
    let v40: i64;  // rdx
    let v41: i64;  // rax

    v1 = a2;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v25 = a1;
    v26 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = "\\";
    v6 = 2;
    v9 = 0;
    v7 = &v25;
    v8 = 1;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v2, &v5) as i32, "src/uu/ptx/src/ptx.rs");
    v0 = *((a1 + 90) as &i8);
    if !v0 {
        v37 = "src/uu/ptx/src/ptx.rs";
        v38 = 0;
        v39 = v1;
    } else {
        v36 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v1, a4, a5);
        if v36 {
            core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v36, v40, a8, a9), v40);
            v38 = v1 - v40;
            v39 = core::cmp::max_by(v40, v38);
            v37 = "src/uu/ptx/src/ptx.rs";
        }
    }
    v41 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v38, v39, a6, a7, v37);
    v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v1, a3, a4, a5);
    if !v24 {
        v1 = a3;
    }
    uu_ptx::get_output_chunks(&v5, v41, v40, v40, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a3, a7, a6, a7, "src/uu/ptx/src/ptx.rs"), v40, a1);
    v17 = v7;
    v16 = *(&v5 as &i128);
    v19 = v10;
    v18 = *(&v8 as &i128);
    v21 = v13;
    v20 = *(&v11 as &i128);
    v23 = *(&v15 as &i64);
    v22 = *(&v14 as &i128);
    v32 = uu_ptx::format_tex_field((&v16)[8] as i64, v17);
    v33 = uu_ptx::format_tex_field((&v18)[8] as i64, v19);
    v34 = uu_ptx::format_tex_field(v24, v40);
    v35 = uu_ptx::format_tex_field((&v20)[8] as i64, v21);
    v30 = uu_ptx::format_tex_field((&v22)[8] as i64, v23);
    v5 = &v32;
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &v33;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v9 = &v34;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = &v35;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &v30;
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v25 = "{";
    v26 = 6;
    v29 = 0;
    v27 = &v5;
    v28 = 5;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v2, &v25) as i32, "src/uu/ptx/src/ptx.rs");
    if !(!(!v0) || !(!*((a1 + 89) as &i8))) {
        return;
    }
    v25 = uu_ptx::format_tex_field(a8, a9);
    v30 = &v25;
    v31 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = "{";
    v6 = 2;
    v9 = 0;
    v7 = &v30;
    v8 = 1;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v2, &v5) as i32, "src/uu/ptx/src/ptx.rs");
}
