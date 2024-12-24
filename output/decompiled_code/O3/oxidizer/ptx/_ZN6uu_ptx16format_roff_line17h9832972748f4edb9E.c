fn uu_ptx::format_roff_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
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
    let v12: i128;  // [sp-0x168]
    let v13: i64;  // [sp-0x158]
    let v14: i128;  // [sp-0x148]
    let v15: i64;  // [sp-0x138]
    let v16: i128;  // [sp-0x128]
    let v17: i64;  // [sp-0x118]
    let v18: i128;  // [sp-0x108]
    let v19: i64;  // [sp-0xf8]
    let v20: i64;  // [sp-0xe8]
    let v21: i64;  // [sp-0xd8], Other Possible Types: struct24
    let v22: i64;  // [sp-0xd0]
    let v23: i64;  // [sp-0xc8]
    let v24: i64;  // [sp-0xc0]
    let v25: i64;  // [sp-0xb8]
    let v26: i64;  // [sp-0xa8], Other Possible Types: struct24
    let v27: struct24;  // [sp-0x90], Other Possible Types: i192
    let v28: struct24;  // [sp-0x78]
    let v29: struct24;  // [sp-0x60]
    let v30: struct24;  // [sp-0x48]
    let v31: i64;  // [bp+0x8]
    let v32: i8;  // [bp+0x10]
    let v33: i8;  // [bp+0x18]
    let v34: i8;  // [bp+0x20]
    let v35: i64;  // rax
    let v36: i64;  // r8
    let v37: i64;  // r14
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // r12
    let v41: i64;  // rax

    v2 = a2;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    v3 = a1;
    v21 = a1;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = ".";
    v8 = 1;
    v11 = 0;
    v9 = &v21;
    v10 = 1;
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v7) as i32, "src/uu/ptx/src/ptx.rs");
    v1 = *((v3 + 90) as &i8);
    if !v1 {
        v36 = "src/uu/ptx/src/ptx.rs";
        v37 = 0;
        v2 = v2;
        goto LABEL_5b80c3;
    } else {
        v35 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v2, a4, a5);
        if !v35 {
            core::str::slice_error_fail(); /* do not return */
        }
        core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v35, v38, v33, v34), v38);
        v37 = v2 - v38;
        v39 = core::cmp::max_by(v38, v37);
        v36 = "src/uu/ptx/src/ptx.rs";
LABEL_5b80c3:
        v40 = v32;
        v41 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v37, v2, v31, v40, v36);
        v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v2, a3, a4, a5);
        if !v20 {
            v2 = a3;
        } else {
            v0 = v3;
            v7 = uu_ptx::get_output_chunks(v41, v38, v38, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a3, v40, v31, v40, "src/uu/ptx/src/ptx.rs"), v38);
            v13 = v7.field_16;
            v12 = v7;
            v15 = v7.field_40;
            v14 = *((&v7 as &char + 24) as &i128);
            v17 = v7.field_64;
            v16 = *((&v7 as &char + 48) as &i128);
            v19 = *((&v7 as &char + 88) as &i64);
            v18 = *((&v7 as &char + 72) as &i128);
            v27 = uu_ptx::format_roff_field(*((&v12 as &char + 8) as &i64), v13);
            v28 = uu_ptx::format_roff_field(*((&v14 as &char + 8) as &i64), v15);
            v29 = uu_ptx::format_roff_field(v20, v38);
            v30 = uu_ptx::format_roff_field(*((&v16 as &char + 8) as &i64), v17);
            v26 = uu_ptx::format_roff_field(*((&v18 as &char + 8) as &i64), v19);
            v7 = &v27;
            v7.8 = <alloc::string::String as core::fmt::Display>::fmt;
            v7.field_16 = stack_base + -120;
            v7.field_24 = <alloc::string::String as core::fmt::Display>::fmt;
            v7.32 = stack_base + -96;
            v7.field_40 = <alloc::string::String as core::fmt::Display>::fmt;
            v7.field_48 = stack_base + -72;
            v7.56 = <alloc::string::String as core::fmt::Display>::fmt;
            v7.field_64 = stack_base + -168;
            v7.field_72 = <alloc::string::String as core::fmt::Display>::fmt;
            v21 = " \"";
            v22 = 6;
            v25 = 0;
            v23 = &v7;
            v24 = 5;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v21) as i32, "src/uu/ptx/src/ptx.rs");
            if !(!(!v1) || !(!*((v3 + 89) as &i8))) {
                *((a0 + 16) as &i64) = v6;
                *(a0 as &i64) = v4;
                return;
            }
            v21 = uu_ptx::format_roff_field(v33, v34);
            v26 = &v21;
            v26.8 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = " \"";
            v7.8 = 2;
            v7.32 = 0;
            v7.field_16 = stack_base + -168;
            v7.field_24 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v7) as i32, "src/uu/ptx/src/ptx.rs");
        }
    }
}
