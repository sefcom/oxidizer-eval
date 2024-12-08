fn uu_dircolors::generate_ls_colors(a0: void*, a1: &u8, a2: u32, a3: u32) -> u64 {
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
    let v11: i64;  // [sp-0x228]
    let v12: i64;  // [sp-0x220]
    let v13: i64;  // [sp-0x218]
    let v14: i64;  // [sp-0x210]
    let v15: i64;  // [sp-0x208]
    let v16: i64;  // [sp-0x200]
    let v17: i128;  // [sp-0x1f8]
    let v18: i64;  // [sp-0x1f0]
    let v19: i64;  // [sp-0x1e8]
    let v20: i128;  // [bp-0x1d8]
    let v21: i64;  // [sp-0x1d0]
    let v22: i64;  // [sp-0x1c8]
    let v23: i64;  // [bp-0x1b8], Other Possible Types: struct24
    let v24: i64;  // [sp-0x1b0]
    let v25: i64;  // [sp-0x1a8]
    let v26: i64;  // [sp-0x1a0]
    let v27: i64;  // [sp-0x198]
    let v28: i64;  // [sp-0x190]
    let v29: i192;  // [bp-0x170], Other Possible Types: Arguments, struct24
    let v30: i64;  // [sp-0x160]
    let v31: i64;  // [sp-0x150]
    let v32: i64;  // [sp-0x148]
    let v33: i8;  // [sp-0x140]
    let v34: i32;  // [bp-0x13f]
    let v35: i32;  // [sp-0x13c]
    let v36: i64;  // [sp-0x138]
    let v37: i64;  // [sp-0x128]
    let v38: i64;  // [sp-0x118]
    let v39: i64;  // [sp-0x110]
    let v40: i8;  // [sp-0x108]
    let v41: i64;  // [sp-0x100]
    let v42: i64;  // [sp-0xf0]
    let v43: i64;  // [sp-0xe0]
    let v44: i64;  // [sp-0xd8]
    let v45: i8;  // [sp-0xd0]
    let v46: i64;  // [sp-0xc8]
    let v47: i64;  // [sp-0xb8]
    let v48: i64;  // [sp-0xa8]
    let v49: i64;  // [sp-0xa0]
    let v50: i8;  // [sp-0x98]
    let v51: i32;  // [bp-0x97]
    let v52: i32;  // [sp-0x94]
    let v53: i192;  // [sp-0x90], Other Possible Types: struct24
    let v54: i192;  // [sp-0x78], Other Possible Types: struct24
    let v55: i192;  // [sp-0x60], Other Possible Types: struct24
    let v56: i192;  // [sp-0x48], Other Possible Types: struct24
    let v58: i64;  // 4140
    let v59: struct8;  // rax
    let v60: struct8;  // rax
    let v61: i64;  // r15
    let v62: i256;  // ymm0
    let v63: i128;  // xmm0
    let v64: i64;  // rdx
    let v65: i8;  // al
    let v68: i128;  // xmm0
    let v69: i256;  // ymm0
    let v70: i128;  // xmm0
    let v71: i64;  // rdx
    let v72: i8;  // al
    let v74: i64;  // r15

    v58 = *(a1 as &i8);
    if v58 == 2 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v54 = uu_dircolors::generate_type_output(a1);
        v0 = alloc::vec::Vec<T,A>::push(&v54);
        v8 = ".tar";
        v9 = "normal";
        v60 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v60 {
            do {
                v5 = *(v60 as &i64);
                v6 = *((v60 + 8) as &i64);
                v70 = *((v60 + 16) as &i128);
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
                v17 = v70;
                v29 = 0;
                v72 = core::slice::<impl [T]>::starts_with(v5, v6, core::char::methods::encode_utf8_raw(42, &v29), v71) as i8;
                v20 = (v72 ? 1 : &g_423435);
                v21 = v72 ^ 1;
                v11 = &v17;
                v12 = <&T as core::fmt::Display>::fmt;
                v13 = &v20;
                v14 = <&T as core::fmt::Display>::fmt;
                v15 = &v5;
                v16 = <&T as core::fmt::Display>::fmt;
                v29 = 2;
                v30 = 2;
                v31 = 0;
                v32 = 32;
                v33 = 3;
                v35 = v4;
                v34 = v3;
                v36 = 2;
                v37 = 2;
                v38 = 1;
                v39 = 32;
                v40 = 3;
                v41 = 2;
                v42 = 2;
                v43 = 2;
                v44 = 32;
                v45 = 3;
                v46 = 2;
                v47 = 2;
                v48 = 0;
                v49 = 32;
                v50 = 3;
                v52 = v4;
                v51 = v3;
                v23 = "\x1b[";
                v24 = 5;
                v27 = &v29;
                v28 = 4;
                v25 = &v11;
                v26 = 3;
                v55 = core::option::Option<T>::map_or_else(&v23);
                v0 = alloc::vec::Vec<T,A>::push(&v55);
                v60 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v60);
        }
        v29 = alloc::str::join_generic_copy(v0.field_8, v2, &g_423433, 1);
        v74 = a0;
        *((v74 + 16) as &struct24) = v29.field_16;
        *(v74 as &i192) = v29;
        return v74;
    } else {
        v8 = 0;
        v9 = 8;
        v10 = 0;
        v5 = ".tar";
        v6 = "normal";
        v59 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v59 {
            v61 = &v23;
            do {
                v17 = *(v59 as &i64);
                v18 = *((v59 + 8) as &i64);
                v63 = *((v59 + 16) as &i128);
                v20 = v63;
                v29 = 0;
                v61 = v61;
                v65 = core::slice::<impl [T]>::starts_with(v17, v18, core::char::methods::encode_utf8_raw(42, &v29), v64) as i8;
                v0 = (v65 ? 1 : &g_423435);
                v1 = v65 ^ 1;
                v11 = &v0;
                v12 = <&T as core::fmt::Display>::fmt;
                v13 = &v17;
                v14 = <&T as core::fmt::Display>::fmt;
                v29 = Arguments {
                    pieces: ["", ""]
                    args: &[Argument] {
                        ptr: v67
                        len: 2
                    }
                    fmt: 0
                };
                v53 = core::option::Option<T>::map_or_else(&v29);
                v68 = v53;
                v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
                v23 = v68;
                v25 = *((&v53 as &char + 16) as &i64);
                v11 = v61;
                v12 = <alloc::string::String as core::fmt::Display>::fmt;
                v13 = &v20;
                v14 = <&T as core::fmt::Display>::fmt;
                v29 = Arguments {
                    pieces: ["", "="]
                    args: &[Argument] {
                        ptr: v67
                        len: 2
                    }
                    fmt: 0
                };
                v56 = core::option::Option<T>::map_or_else(&v29);
                v8 = alloc::vec::Vec<T,A>::push(&v56);
                v59 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v59);
        }
        uu_dircolors::get_colors_format_strings(&v29, a1);
        v74 = a0;
        v7 = v30;
        v5 = *(&v29.pieces.ptr as &i128);
        v19 = v32;
        v17 = *(&v29.args.len as &i128);
        v29 = alloc::str::join_generic_copy(v8.field_8, v10, a2, a3);
        v22 = v29.field_16;
        v20 = v29;
        v23 = uu_dircolors::generate_type_output(a1);
        v0 = format!("{:?}{:?}:{:?}:{:?}", &v5, &v23, &v20, &v17);
        *((v74 + 16) as &i64) = v2;
        *(v74 as &i192) = v0;
        return v74;
    }
}
