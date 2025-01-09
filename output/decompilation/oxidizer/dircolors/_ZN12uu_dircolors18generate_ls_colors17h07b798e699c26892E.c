fn uu_dircolors::generate_ls_colors(a0: &struct24, a1: &u8, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x278], Other Possible Types: struct16
    let v1: i64;  // [sp-0x270]
    let v2: i64;  // [sp-0x268]
    let v3: i8;  // [bp-0x25f]
    let v4: i8;  // [bp-0x25c]
    let v5: i64;  // [sp-0x258]
    let v6: i64;  // [sp-0x250]
    let v7: i64;  // [sp-0x248]
    let v8: i64;  // [sp-0x240], Other Possible Types: struct16
    let v9: i64;  // [sp-0x238]
    let v10: i64;  // [sp-0x230]
    let v11: i64;  // [bp-0x228]
    let v12: i64;  // [sp-0x220]
    let v13: i64;  // [sp-0x218]
    let v14: i64;  // [sp-0x210]
    let v15: i64;  // [sp-0x208]
    let v16: i64;  // [sp-0x200]
    let v17: i128;  // [sp-0x1f8]
    let v18: i64;  // [sp-0x1f0]
    let v19: i64;  // [sp-0x1e8]
    let v20: i128;  // [bp-0x1d8], Other Possible Types: struct24
    let v21: i64;  // [sp-0x1d0]
    let v22: i64;  // [bp-0x1b8]
    let v23: i64;  // [sp-0x1b0]
    let v24: i64;  // [sp-0x1a8]
    let v25: i64;  // [sp-0x1a0]
    let v26: i64;  // [sp-0x198]
    let v27: i64;  // [sp-0x190]
    let v28: i32;  // [bp-0x170], Other Possible Types: struct24
    let v29: i64;  // [sp-0x168]
    let v30: i64;  // [sp-0x160]
    let v31: i64;  // [sp-0x158]
    let v32: i64;  // [sp-0x150]
    let v33: i64;  // [sp-0x148]
    let v34: i8;  // [sp-0x140]
    let v35: i32;  // [bp-0x13f]
    let v36: i32;  // [sp-0x13c]
    let v37: i64;  // [sp-0x138]
    let v38: i64;  // [sp-0x128]
    let v39: i64;  // [sp-0x118]
    let v40: i64;  // [sp-0x110]
    let v41: i8;  // [sp-0x108]
    let v42: i64;  // [sp-0x100]
    let v43: i64;  // [sp-0xf0]
    let v44: i64;  // [sp-0xe0]
    let v45: i64;  // [sp-0xd8]
    let v46: i8;  // [sp-0xd0]
    let v47: i64;  // [sp-0xc8]
    let v48: i64;  // [sp-0xb8]
    let v49: i64;  // [sp-0xa8]
    let v50: i64;  // [sp-0xa0]
    let v51: i8;  // [sp-0x98]
    let v52: i32;  // [bp-0x97]
    let v53: i32;  // [sp-0x94]
    let v54: i8;  // [bp-0x90]
    let v55: i8;  // [bp-0x80]
    let v56: i8;  // [bp-0x78]
    let v57: i8;  // [bp-0x60]
    let v58: i8;  // [bp-0x48]
    let v60: i64;  // 4140
    let v61: struct8;  // rax
    let v62: struct8;  // rax
    let v63: i64;  // rbx
    let v64: i64;  // r15
    let v65: i256;  // ymm0
    let v66: i128;  // xmm0
    let v67: i64;  // rdx
    let v68: i8;  // al
    let v70: i128;  // xmm0
    let v71: i256;  // ymm0
    let v72: i128;  // xmm0
    let v73: i64;  // rdx
    let v74: i8;  // al

    v60 = *(a1 as &i8);
    if v60 == 2 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        uu_dircolors::generate_type_output(&v56, a1);
        v0 = alloc::vec::Vec<T,A>::push(&v56);
        v8 = ".tar";
        v9 = "normal";
        v62 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v62 {
            v28 = alloc::str::join_generic_copy(v1, v2, "\n");
            return v28;
        }
        do {
            v5 = *(v62 as &i64);
            v6 = *((v62 + 8) as &i64);
            v72 = *((v62 + 16) as &i128);
            v71 = v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
            v17 = v72;
            v28 = 0;
            v74 = core::slice::<impl [T]>::starts_with(v5, v6, core::char::methods::encode_utf8_raw(42, &v28), v73) as i8;
            v20 = (v74 ? 1 : &g_42333e);
            v21 = v74 ^ 1;
            v11 = &v17;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v20;
            v14 = <&T as core::fmt::Display>::fmt;
            v15 = &v5;
            v16 = <&T as core::fmt::Display>::fmt;
            v28 = 2;
            v30 = 2;
            v32 = 0;
            v33 = 32;
            v34 = 3;
            v36 = v4;
            v35 = v3;
            v37 = 2;
            v38 = 2;
            v39 = 1;
            v40 = 32;
            v41 = 3;
            v42 = 2;
            v43 = 2;
            v44 = 2;
            v45 = 32;
            v46 = 3;
            v47 = 2;
            v48 = 2;
            v49 = 0;
            v50 = 32;
            v51 = 3;
            v53 = v4;
            v52 = v3;
            v22 = "\x1b[";
            v23 = 5;
            v26 = &v28;
            v27 = 4;
            v24 = &v11;
            v25 = 3;
            core::option::Option<T>::map_or_else();
            v0 = alloc::vec::Vec<T,A>::push(&v57);
            v62 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v62);
    }
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v5 = ".tar";
    v6 = "normal";
    v61 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v61 {
        v63 = &v11;
        v64 = &v22;
        do {
            v17 = *(v61 as &i64);
            v18 = *((v61 + 8) as &i64);
            v66 = *((v61 + 16) as &i128);
            v20 = v66;
            v28 = 0;
            v64 = v64;
            v63 = v63;
            v68 = core::slice::<impl [T]>::starts_with(v17, v18, core::char::methods::encode_utf8_raw(42, &v28), v67) as i8;
            v0 = (v68 ? 1 : &g_42333e);
            v1 = v68 ^ 1;
            v11 = &v0;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v17;
            v14 = <&T as core::fmt::Display>::fmt;
            v28 = &g_41bbd8;
            v29 = 2;
            v32 = 0;
            v30 = v63;
            v31 = 2;
            core::option::Option<T>::map_or_else();
            v70 = v54;
            v65 = (v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
            v22 = v70;
            v24 = v55;
            v11 = v64;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &v20;
            v14 = <&T as core::fmt::Display>::fmt;
            v28 = &g_5270f8;
            v29 = 2;
            v32 = 0;
            v30 = v63;
            v31 = 2;
            core::option::Option<T>::map_or_else();
            v8 = alloc::vec::Vec<T,A>::push(&v58);
            v61 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v61);
    }
    uu_dircolors::get_colors_format_strings(&v28, a1);
    v7 = v30;
    v5 = v28;
    v19 = v33;
    v17 = v31;
    v28 = alloc::str::join_generic_copy(v9, v10, a2, a3);
    v20 = v28;
    uu_dircolors::generate_type_output(&v22, a1);
    v28 = &v5;
    v29 = <alloc::string::String as core::fmt::Display>::fmt;
    v30 = &v22;
    v31 = <alloc::string::String as core::fmt::Display>::fmt;
    v32 = &v20;
    v33 = <alloc::string::String as core::fmt::Display>::fmt;
    v34 = &v17;
    v37 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = &g_527118;
    v12 = 4;
    v15 = 0;
    v13 = &v28;
    v14 = 4;
    core::option::Option<T>::map_or_else();
}
