fn uu_ptx::format_tex_line(a0: &struct_0, a1: &u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: &u64;  // [sp-0x218]
    let v1: u8;  // [sp-0x201]
    let v2: u64;  // [sp-0x200]
    let v3: &u64;  // [sp-0x1e8]
    let v4: void*;  // [sp-0x1e0]
    let v5: u64;  // [sp-0x1d8]
    let v6: void*;  // [sp-0x1d0]
    let v7: u64;  // [sp-0x1c8]
    let v8: u64;  // [sp-0x1c0]
    let v9: u64;  // [sp-0x1b8], Other Possible Types: &&struct_1
    let v10: u64;  // [sp-0x1b0]
    let v11: void*;  // [sp-0x1a8], Other Possible Types: u64
    let v12: u64;  // [sp-0x1a0]
    let v13: i8;  // [bp-0x198], Other Possible Types: u64
    let v14: u64;  // [sp-0x190]
    let v15: u64;  // [sp-0x188]
    let v16: u64;  // [bp-0x180], Other Possible Types: i8
    let v17: i8;  // [bp-0x170]
    let v18: u128;  // [sp-0x168]
    let v19: &&struct_1;  // [sp-0x158]
    let v20: u128;  // [sp-0x148]
    let v21: u64;  // [sp-0x138]
    let v22: u128;  // [sp-0x128]
    let v23: u64;  // [sp-0x118]
    let v24: u128;  // [sp-0x108]
    let v25: u64;  // [sp-0xf8]
    let v26: u64;  // [sp-0xe8]
    let v27: u64;  // [sp-0xd8], Other Possible Types: &u64
    let v28: u64;  // [sp-0xd0]
    let v29: u64;  // [sp-0xc8]
    let v30: u64;  // [sp-0xc0]
    let v31: void*;  // [sp-0xb8]
    let v32: u64;  // [bp-0xa8]
    let v33: u64;  // [sp-0xa0]
    let v34: u8;  // [bp-0x90]
    let v35: u8;  // [bp-0x78]
    let v36: u8;  // [bp-0x60]
    let v37: u8;  // [bp-0x48]
    let v38: u64;  // [bp+0x8]
    let v39: i8;  // [bp+0x10]
    let v40: u8;  // [bp+0x18]
    let v41: u8;  // [bp+0x20]
    let v42: u64;  // rax
    let v43: u64;  // r8
    let v44: void*;  // r14
    let v45: u64;  // rdx
    let v46: u64;  // rax
    let v47: u64;  // r12
    let v48: u64;  // rax

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
    v1 = *((&v3[11] as &char + 2) as &i8);
    if !v1 {
        v43 = "src/uu/ptx/src/ptx.rs";
        v44 = 0;
        v2 = v2;
        goto LABEL_5b7ac3;
    } else {
        v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v2, a4, a5);
        if !v42 {
            core::str::slice_error_fail(); /* do not return */
        }
        core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v42, v45, *(&v40 as &i64), *(&v41 as &i64)), v45);
        v44 = v2 - v45;
        v46 = core::cmp::max_by(v45, v44);
        v43 = "src/uu/ptx/src/ptx.rs";
LABEL_5b7ac3:
        v47 = v39;
        v48 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v44, v2, v38, v47, v43);
        v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v2, a3, a4, a5);
        if !v26 {
            v2 = a3;
        } else {
            v0 = v3;
            uu_ptx::get_output_chunks(&v7, v48, v45, v45, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a3, v47, v38, v47, "src/uu/ptx/src/ptx.rs"), v45);
            v19 = v9;
            v18 = *(&v7 as &i128);
            v21 = v12;
            v20 = *(&v10 as &i128);
            v23 = v15;
            v22 = v13;
            v25 = v17;
            v24 = v16;
            uu_ptx::format_tex_field(&v34, *((&v18 as &char + 8) as &i64), v19);
            uu_ptx::format_tex_field(&v35, *((&v20 as &char + 8) as &i64), v21);
            uu_ptx::format_tex_field(&v36, v26, v45);
            uu_ptx::format_tex_field(&v37, *((&v22 as &char + 8) as &i64), v23);
            uu_ptx::format_tex_field(&v32, *((&v24 as &char + 8) as &i64), v25);
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
            if !(!v1) || !(!*((&v3[11] as &char + 1) as &i8)) {
                uu_ptx::format_tex_field(&v27, *(&v40 as &i64), *(&v41 as &i64));
                v32 = &v27;
                v33 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = "{";
                v8 = 2;
                v11 = 0;
                v9 = &v32;
                v10 = 1;
                core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v4, &v7) as i32, "src/uu/ptx/src/ptx.rs");
            }
            a0->field_10 = v6;
            a0->field_0 = *(&v4 as &i128);
        }
    }
}
