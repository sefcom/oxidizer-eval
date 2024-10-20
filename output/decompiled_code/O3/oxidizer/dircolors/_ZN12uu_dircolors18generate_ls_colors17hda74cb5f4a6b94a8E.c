fn uu_dircolors::generate_ls_colors(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x298], Other Possible Types: struct16, String
    let v1: i64;  // [sp-0x290]
    let v2: i64;  // [sp-0x288]
    let v3: i64;  // [sp-0x280]
    let v4: i64;  // [sp-0x278], Other Possible Types: struct16
    let v5: i64;  // [sp-0x270]
    let v6: i64;  // [sp-0x268]
    let v7: i8;  // [bp-0x25f]
    let v8: i8;  // [bp-0x25c]
    let v9: i128;  // [sp-0x258]
    let v10: i64;  // [sp-0x250]
    let v11: i64;  // [sp-0x248]
    let v12: i128;  // [bp-0x238]
    let v13: i64;  // [sp-0x230]
    let v14: i64;  // [sp-0x228]
    let v15: i64;  // [bp-0x218], Other Possible Types: Arguments, Argument
    let v16: i64;  // [sp-0x210], Other Possible Types: Argument
    let v17: i64;  // [sp-0x208], Other Possible Types: Argument
    let v18: i64;  // [sp-0x200]
    let v19: i64;  // [sp-0x1f8]
    let v20: i64;  // [sp-0x1f0]
    let v21: i128;  // [sp-0x1e8]
    let v22: i64;  // [sp-0x1e0]
    let v23: i64;  // [sp-0x1d8]
    let v24: i128;  // [sp-0x1c8], Other Possible Types: Arguments, struct24
    let v25: i64;  // [sp-0x1b8]
    let v26: i64;  // [bp-0x170], Other Possible Types: struct24, Argument
    let v27: i64;  // [sp-0x168], Other Possible Types: Argument
    let v28: i64;  // [sp-0x160], Other Possible Types: Argument
    let v29: i64;  // [sp-0x158], Other Possible Types: Argument
    let v30: i64;  // [sp-0x150]
    let v31: i64;  // [sp-0x148]
    let v32: i64;  // [sp-0x140]
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
    let v52: i192;  // [sp-0x90], Other Possible Types: struct24
    let v53: String;  // [sp-0x78], Other Possible Types: i192
    let v54: i192;  // [sp-0x60], Other Possible Types: String
    let v55: i8;  // [bp-0x48]
    let v56: i8;  // [bp-0x38]
    let v58: i64;  // r15
    let v59: i64;  // rbp
    let v61: i64;  // rbx
    let v62: i256;  // ymm0
    let v63: i128;  // xmm0
    let v64: i8;  // al
    let v65: i64;  // rcx
    let v66: i128;  // xmm0
    let v67: i64;  // rbp
    let v68: i64;  // rax
    let v69: i64;  // rcx
    let v70: i128;  // xmm0
    let v71: i64;  // rax
    let v72: i128;  // xmm0
    let v73: i256;  // ymm0
    let v74: i256;  // ymm0
    let v75: i64;  // r13
    let v76: i128;  // xmm0
    let v77: i8;  // al
    let v78: i64;  // rcx
    let v79: i64;  // r12
    let v80: i64;  // rax
    let v81: i64;  // rcx
    let v82: i128;  // xmm0
    let v83: i64;  // r12

    if vvar_721 != 2 {
        v4 = 0;
        v5 = &g_8;
        v6 = 0;
        v58 = &g_18;
        v59 = &v15;
        v61 = alloc::fmt::format::format_inner;
        v3 = &v4;
        do {
            v9 = *((v58 - -5194040) as &i64);
            v10 = *((v58 - -5194048) as &i64);
            v63 = *((v58 - -5194056) as &i128);
            v12 = v63;
            if !v10 {
                v64 = 0;
                v65 = &g_422901;
            } else {
                v64 = v9 | -0x100 | *(v9 as &i8) == 42;
                if *(v9 as &i8) == 42 {
                    v65 = 1;
                } else {
                    v65 = &g_422901;
                }
            }
            v0 = v65;
            v1 = v64 ^ 1;
            v15 = &v0;
            v16 = <&T as core::fmt::Display>::fmt;
            v17 = &v9;
            v18 = <&T as core::fmt::Display>::fmt;
            v26 = &g_417e08;
            v27 = 2;
            v30 = 0;
            v28 = v59;
            v29 = 2;
            v61();
            v66 = v55;
            v24 = v66;
            v25 = v56;
            v15 = &v24;
            v16 = <alloc::string::String as core::fmt::Display>::fmt;
            v17 = &v12;
            v18 = <&T as core::fmt::Display>::fmt;
            v26 = &g_4f31b0;
            v27 = 2;
            v30 = 0;
            v28 = v59;
            v29 = 2;
            v54 = alloc::fmt::format::format_inner(&v26);
            v67 = v6;
            if v67 == v4 {
                v4 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v68 = v5;
            v69 = 3 * v67;
            *((v68 + v69 * &g_8 + &g_8 as &u8) as &i64) = *((&v54 as &char + 16) as &i64);
            v70 = v54;
            vvar_20{reg 224} = ((((((vvar_20{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_212{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_248{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_273{reg 224}))
            *((v68 + v69 * &g_8) as &i128) = v70;
            v6 = v67 + 1;
            v58 += 32;
        } while (v58 != 4184);
        uu_dircolors::get_colors_format_strings(&v26, a1);
        v23 = v28;
        v21 = v26;
        v11 = v31;
        v9 = v29;
        v26 = alloc::str::join_generic_copy(v5, v6, a2, a3);
        v14 = v28;
        v12 = v26;
        v24 = uu_dircolors::generate_type_output(a1);
        v26 = Argument {
            value: &v21
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v27 = Argument {
            value: <alloc::string::String as core::fmt::Display>::fmt
            formatter: &v24
        };
        v28 = Argument {
            value: &v24
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v29 = Argument {
            value: <alloc::string::String as core::fmt::Display>::fmt
            formatter: &v12
        };
        v31 = <alloc::string::String as core::fmt::Display>::fmt;
        v32 = &v9;
        v35 = <alloc::string::String as core::fmt::Display>::fmt;
        v15 = Arguments {
            pieces: [&g_4f3170, &g_4f3180, ":", ":"]
            args: [&v26, &v27, &v28, &v29]
            fmt: None
        };
        v0 = alloc::fmt::format::format_inner(&v15);
        v83 = a0;
        *((v83 + &g_8 as &u8) as &i64) = v2;
        *(v83 as &i192) = v0;
        if !v4 {
            return v83;
        }
    } else {
        v0 = 0;
        v1 = &g_8;
        v2 = 0;
        v52 = uu_dircolors::generate_type_output(a1);
        v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v71 = v1;
        *((v71 + &g_8 as &u8) as &i64) = *((&v52 as &char + 16) as &i64);
        v72 = v52;
        vvar_34{reg 224} = ((vvar_296{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_295{reg 224}))
        *(v71 as &i128) = v72;
        v2 = 1;
        v75 = &g_18;
        v3 = &v0;
        do {
            v21 = *((v75 - -5194040) as &i64);
            v22 = *((v75 - -5194048) as &i64);
            v76 = *((v75 - -5194056) as &i128);
            v9 = v76;
            if !v22 {
                v77 = 0;
                v78 = &g_422901;
            } else {
                v77 = v21 | -0x100 | *(v21 as &i8) == 42;
                if *(v21 as &i8) == 42 {
                    v78 = 1;
                } else {
                    v78 = &g_422901;
                }
            }
            v12 = v78;
            v13 = v77 ^ 1;
            v15 = Argument {
                value: &v9
                formatter: <&T as core::fmt::Display>::fmt
            };
            v16 = Argument {
                value: <&T as core::fmt::Display>::fmt
                formatter: &v12
            };
            v17 = Argument {
                value: &v12
                formatter: <&T as core::fmt::Display>::fmt
            };
            v19 = &v21;
            v20 = <&T as core::fmt::Display>::fmt;
            v26 = 2;
            v28 = 2;
            v30 = 0;
            v31 = 32;
            v32 = 3;
            v34 = v8;
            v33 = v7;
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
            v51 = v8;
            v50 = v7;
            v24 = Arguments {
                pieces: ["\x1b[", "m", &g_4f3140, "\t", "\x1b[0m"]
                args: [&v15, &v16, &v17]
                fmt: 
            };
            v53 = alloc::fmt::format::format_inner(&v24);
            v79 = v2;
            if v79 == v0 {
                v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v80 = v1;
            v81 = v79 * 3;
            *((v80 + v81 * &g_8 + &g_8 as &u8) as &i64) = *((&v53 as &char + 16) as &i64);
            v82 = v53;
            vvar_34{reg 224} = ((((vvar_34{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_311{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_364{reg 224}))
            *((v80 + v81 * &g_8) as &i128) = v82;
            v2 = v79 + 1;
            v75 += 32;
        } while (v75 != 4184);
        v26 = alloc::str::join_generic_copy(v1, v2, &g_4228ff, 1);
        v83 = a0;
        *((v83 + &g_8 as &u8) as &i64) = v28;
        *(v83 as &i192) = v26;
        if !v0 {
            return v83;
        }
    }
    return v83;
}
