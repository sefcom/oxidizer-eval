fn uu_dircolors::generate_ls_colors(a0: void*, a1: &u8, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x278], Other Possible Types: struct16
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
    let v17: i64;  // [sp-0x1f8]
    let v18: i64;  // [sp-0x1f0]
    let v19: i64;  // [sp-0x1e8]
    let v20: i128;  // [bp-0x1d8]
    let v21: i64;  // [sp-0x1d0]
    let v22: i64;  // [bp-0x1b8], Other Possible Types: struct24
    let v23: i64;  // [sp-0x1b0]
    let v24: i64;  // [sp-0x1a8]
    let v25: i64;  // [sp-0x1a0]
    let v26: i64;  // [sp-0x198]
    let v27: i64;  // [sp-0x190]
    let v28: i192;  // [bp-0x170], Other Possible Types: struct24, Arguments
    let v29: i64;  // [sp-0x160]
    let v30: i64;  // [sp-0x150]
    let v31: i64;  // [sp-0x148]
    let v32: i8;  // [sp-0x140]
    let v33: i32;  // [bp-0x13f]
    let v34: i32;  // [sp-0x13c]
    let v35: i64;  // [sp-0x138]
    let v36: i64;  // [sp-0x128]
    let v37: i64;  // [sp-0x118]
    let v38: i64;  // [sp-0x110]
    let v39: i8;  // [sp-0x108]
    let v40: i64;  // [sp-0x100]
    let v41: i64;  // [sp-0xf0]
    let v42: i64;  // [sp-0xe0]
    let v43: i64;  // [sp-0xd8]
    let v44: i8;  // [sp-0xd0]
    let v45: i64;  // [sp-0xc8]
    let v46: i64;  // [sp-0xb8]
    let v47: i64;  // [sp-0xa8]
    let v48: i64;  // [sp-0xa0]
    let v49: i8;  // [sp-0x98]
    let v50: i32;  // [bp-0x97]
    let v51: i32;  // [sp-0x94]
    let v52: struct24;  // [sp-0x90], Other Possible Types: i192
    let v53: struct24;  // [sp-0x78], Other Possible Types: i192
    let v54: i192;  // [sp-0x60], Other Possible Types: struct24
    let v55: struct24;  // [sp-0x48], Other Possible Types: i192
    let v57: i64;  // 4140
    let v58: struct8;  // rax
    let v59: struct8;  // rax
    let v60: i64;  // r15
    let v61: i256;  // ymm0
    let v62: i128;  // xmm0
    let v63: i64;  // rdx
    let v64: i8;  // al
    let v67: i128;  // xmm0
    let v68: i256;  // ymm0
    let v69: i128;  // xmm0
    let v70: i64;  // rdx
    let v71: i8;  // al
    let v73: i64;  // r15

    v57 = *(a1 as &i8);
    if v57 == 2 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v53 = uu_dircolors::generate_type_output(a1);
        v0 = alloc::vec::Vec<T,A>::push(&v53);
        v8 = ".tar";
        v9 = "normal";
        v59 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v59 {
            do {
                v5 = *(v59 as &i64);
                v6 = *((v59 + 8) as &i64);
                v69 = *((v59 + 16) as &i128);
                v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
                v17 = v69;
                v28 = 0;
                v71 = core::slice::<impl [T]>::starts_with(v5, v6, core::char::methods::encode_utf8_raw(42, &v28), v70) as i8;
                v20 = (v71 ? 1 : &g_423435);
                v21 = v71 ^ 1;
                v11 = &v17;
                v12 = <&T as core::fmt::Display>::fmt;
                v13 = &v20;
                v14 = <&T as core::fmt::Display>::fmt;
                v15 = &v5;
                v16 = <&T as core::fmt::Display>::fmt;
                v28 = 2;
                v29 = 2;
                v30 = 0;
                v31 = 32;
                v32 = 3;
                v34 = v4;
                v33 = v3;
                v35 = 2;
                v36 = 2;
                v37 = 1;
                v38 = 32;
                v39 = 3;
                v40 = 2;
                v41 = 2;
                v42 = 2;
                v43 = 32;
                v44 = 3;
                v45 = 2;
                v46 = 2;
                v47 = 0;
                v48 = 32;
                v49 = 3;
                v51 = (&v3)[3];
                v50 = v3;
                v22 = "\x1b[";
                v23 = 5;
                v26 = &v28;
                v27 = 4;
                v24 = &v11;
                v25 = 3;
                v54 = core::option::Option<T>::map_or_else(&v22);
                v0 = alloc::vec::Vec<T,A>::push(&v54);
                v59 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v59);
        }
        v28 = alloc::str::join_generic_copy(v0.field_8, v2, &g_423433, 1);
        v73 = a0;
        *((v73 + 16) as &struct24) = v28.field_16;
        *(v73 as &i192) = v28;
        return v73;
    } else {
        v8 = 0;
        v9 = 8;
        v10 = 0;
        v5 = ".tar";
        v6 = "normal";
        v58 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v58 {
            v60 = &v22;
            do {
                v17 = *(v58 as &i64);
                v18 = *((v58 + 8) as &i64);
                v62 = *((v58 + 16) as &i128);
                v20 = v62;
                v28 = 0;
                v60 = v60;
                v64 = core::slice::<impl [T]>::starts_with(v17, v18, core::char::methods::encode_utf8_raw(42, &v28), v63) as i8;
                v0 = (v64 ? 1 : &g_423435);
                v1 = v64 ^ 1;
                v11 = &v0;
                v12 = <&T as core::fmt::Display>::fmt;
                v13 = &v17;
                v14 = <&T as core::fmt::Display>::fmt;
                v28 = Arguments {
                    pieces: ["", ""]
                    args: &[Argument] {
                        ptr: v66
                        len: 2
                    }
                    fmt: 0
                };
                v52 = core::option::Option<T>::map_or_else(&v28);
                v67 = v52;
                v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
                v22 = v67;
                v24 = *((&v52 as &char + 16) as &i64);
                v11 = v60;
                v12 = <alloc::string::String as core::fmt::Display>::fmt;
                v13 = &v20;
                v14 = <&T as core::fmt::Display>::fmt;
                v28 = Arguments {
                    pieces: ["", "="]
                    args: &[Argument] {
                        ptr: v66
                        len: 2
                    }
                    fmt: 0
                };
                v55 = core::option::Option<T>::map_or_else(&v28);
                v8 = alloc::vec::Vec<T,A>::push(&v55);
                v58 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v58);
        }
        uu_dircolors::get_colors_format_strings(&v28, a1);
        v73 = a0;
        v7 = v29;
        v5 = *(&v28.pieces.ptr as &i128);
        v19 = v31;
        v17 = *(&v28.args.len as &i128);
        v28 = alloc::str::join_generic_copy(v8.field_8, v10, a2, a3);
        v20 = v28;
        v22 = uu_dircolors::generate_type_output(a1);
        v0 = format!("{:?}{:?}:{:?}:{:?}", &v5, &v22, &v20, &v17);
        *((v73 + 16) as &i64) = v2;
        *(v73 as &i192) = v0;
        return v73;
    }
}
