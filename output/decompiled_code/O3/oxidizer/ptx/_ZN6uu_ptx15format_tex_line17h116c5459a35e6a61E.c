fn uu_ptx::format_tex_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i8;  // [sp-0x201]
    let v2: i64;  // [sp-0x200]
    let v3: i64;  // [sp-0x1e8]
    let v4: i64;  // [sp-0x1e0]
    let v5: i64;  // [sp-0x1d8]
    let v6: i64;  // [sp-0x1d0]
    let v7: i64;  // [sp-0x1c8], Other Possible Types: struct96
    let v8: i64;  // [sp-0x1c0]
    let v9: i64;  // [sp-0x1b8]
    let v10: i64;  // [sp-0x1b0]
    let v11: i64;  // [sp-0x1a8]
    let v12: i64;  // [sp-0x1a0]
    let v13: i64;  // [sp-0x198]
    let v14: i64;  // [sp-0x190]
    let v15: i64;  // [sp-0x188]
    let v16: i64;  // [sp-0x180]
    let v17: i128;  // [sp-0x168]
    let v18: i64;  // [sp-0x158]
    let v19: i128;  // [sp-0x148]
    let v20: i64;  // [sp-0x138]
    let v21: i128;  // [sp-0x128]
    let v22: i64;  // [sp-0x118]
    let v23: i128;  // [sp-0x108]
    let v24: i64;  // [sp-0xf8]
    let v25: i64;  // [sp-0xe8]
    let v26: i64;  // [sp-0xd8], Other Possible Types: struct24
    let v27: i64;  // [sp-0xd0]
    let v28: i64;  // [sp-0xc8]
    let v29: i64;  // [sp-0xc0]
    let v30: i64;  // [sp-0xb8]
    let v31: i64;  // [sp-0xa8], Other Possible Types: struct24
    let v32: i64;  // [sp-0xa0]
    let v33: i192;  // [sp-0x90], Other Possible Types: struct24
    let v34: i192;  // [sp-0x78], Other Possible Types: struct24
    let v35: struct24;  // [sp-0x60], Other Possible Types: i192
    let v36: struct24;  // [sp-0x48], Other Possible Types: i192
    let v37: i64;  // [bp+0x8]
    let v38: i8;  // [bp+0x10]
    let v39: i8;  // [bp+0x18]
    let v40: i8;  // [bp+0x20]
    let v41: i64;  // rax
    let v42: i64;  // r8
    let v43: i64;  // r14
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v46: i64;  // r12
    let v47: i64;  // rax

    v2 = a2;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    v3 = a1;
    v26 = a1;
    v27 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = "\\";
    v8 = 2;
    v11 = 0;
    v9 = &v26;
    v10 = 1;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v7) as i32, "src/uu/ptx/src/ptx.rs");
    v1 = *((v3 + 90) as &i8);
    if !v1 {
        v42 = "src/uu/ptx/src/ptx.rs";
        v43 = 0;
        v2 = v2;
        goto LABEL_5b7fd3;
    } else {
        v41 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v2, a4, a5);
        if !v41 {
            core::str::slice_error_fail(); /* do not return */
        }
        core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v41, v44, v39, v40), v44);
        v43 = v2 - v44;
        v45 = core::cmp::max_by(v44, v43);
        v42 = "src/uu/ptx/src/ptx.rs";
LABEL_5b7fd3:
        v46 = v38;
        v47 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v43, v2, v37, v46, v42);
        v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v2, a3, a4, a5);
        if !v25 {
            v2 = a3;
        } else {
            v0 = v3;
            v7 = uu_ptx::get_output_chunks(v47, v44, v44, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a3, v46, v37, v46, "src/uu/ptx/src/ptx.rs"), v44);
            v18 = v9;
            v17 = v7;
            v20 = v12;
            v19 = *((&v7 as &char + 24) as &i128);
            v22 = v15;
            v21 = *((&v7 as &char + 48) as &i128);
            v24 = *((&v7 as &char + 88) as &i64);
            v23 = *((&v7 as &char + 72) as &i128);
            v33 = uu_ptx::format_tex_field(*((&v17 as &char + 8) as &i64), v18);
            v34 = uu_ptx::format_tex_field(*((&v19 as &char + 8) as &i64), v20);
            v35 = uu_ptx::format_tex_field(v25, v44);
            v36 = uu_ptx::format_tex_field(*((&v21 as &char + 8) as &i64), v22);
            v31 = uu_ptx::format_tex_field(*((&v23 as &char + 8) as &i64), v24);
            v7 = &v33;
            v8 = <alloc::string::String as core::fmt::Display>::fmt;
            v9 = &v34;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v11 = &v35;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &v36;
            v14 = <alloc::string::String as core::fmt::Display>::fmt;
            v15 = &v31;
            v16 = <alloc::string::String as core::fmt::Display>::fmt;
            v26 = "{";
            v27 = 6;
            v30 = 0;
            v28 = &v7;
            v29 = 5;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v26) as i32, "src/uu/ptx/src/ptx.rs");
            if !(!(!v1) || !(!*((v3 + 89) as &i8))) {
                *((a0 + 16) as &i64) = v6;
                *(a0 as &i64) = v4;
                return;
            }
            v26 = uu_ptx::format_tex_field(v39, v40);
            v31 = &v26;
            v32 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = "{";
            v8 = 2;
            v11 = 0;
            v9 = &v31;
            v10 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v7) as i32, "src/uu/ptx/src/ptx.rs");
        }
    }
}
