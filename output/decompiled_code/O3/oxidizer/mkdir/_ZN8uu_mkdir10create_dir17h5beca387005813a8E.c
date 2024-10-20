fn uu_mkdir::create_dir(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x21c]
    let v1: i32;  // [sp-0x20c]
    let v2: i64;  // [sp-0x200], Other Possible Types: struct20
    let v3: i64;  // [sp-0x1f8]
    let v4: i64;  // [sp-0x1f0]
    let v5: i128;  // [bp-0x1ef]
    let v6: i64;  // [sp-0x1e8]
    let v7: i8;  // [bp-0x1df]
    let v8: i8;  // [bp-0x1d0]
    let v9: i8;  // [bp-0x1c8]
    let v10: i8;  // [bp-0x1c7]
    let v11: i8;  // [bp-0x1c6]
    let v12: i64;  // [sp-0x1c0], Other Possible Types: String
    let v13: i64;  // [sp-0x1b8]
    let v14: i8;  // [sp-0x1b0]
    let v15: i128;  // [bp-0x1af]
    let v16: i8;  // [bp-0x1a8]
    let v17: i128;  // [bp-0x19f]
    let v18: i64;  // [sp-0x190]
    let v19: i16;  // [sp-0x188]
    let v20: i8;  // [sp-0x186]
    let v21: i64;  // [sp-0x180], Other Possible Types: struct20
    let v22: i64;  // [sp-0x178]
    let v23: i128;  // [bp-0x16f]
    let v24: i8;  // [bp-0x15f]
    let v25: i8;  // [bp-0x150]
    let v26: i8;  // [bp-0x148]
    let v27: i8;  // [bp-0x147]
    let v28: i8;  // [bp-0x146]
    let v29: i64;  // [sp-0x140]
    let v30: i64;  // [sp-0x138], Other Possible Types: Enum, struct5
    let v31: i64;  // [sp-0x130]
    let v32: i8;  // [bp-0x128]
    let v33: i128;  // [bp-0x127]
    let v34: i64;  // [sp-0x120]
    let v35: i64;  // [bp-0x118]
    let v36: i128;  // [bp-0x117]
    let v37: i64;  // [sp-0x108]
    let v38: i16;  // [sp-0x100]
    let v39: i8;  // [sp-0xfe]
    let v40: i128;  // [sp-0x88]
    let v41: i128;  // [bp-0x78]
    let v42: i64;  // [sp-0x69]
    let v43: i128;  // [sp-0x58]
    let v44: i128;  // [bp-0x48]
    let v45: i64;  // [sp-0x39]
    let v47: i64;  // r12
    let v48: i64;  // rbx
    let v49: i64;  // rax
    let v50: i64;  // rbp
    let v51: i64;  // r12
    let v52: i64;  // r15
    let v53: i64;  // r13
    let v54: i128;  // xmm0
    let v55: i8;  // al
    let v56: i8;  // cl
    let v57: i8;  // al
    let v58: i128;  // xmm0
    let v59: i8;  // cl
    let v60: i16;  // dx
    let v61: i128;  // xmm1
    let v62: i64;  // r14
    let v63: i128;  // xmm0
    let v64: i8;  // cl
    let v65: i16;  // dx
    let v66: i128;  // xmm1
    let v67: i64;  // r8
    let v68: i64;  // r9
    let v69: i32;  // r13d
    let v70: i64;  // rdx
    let v71: i64;  // rcx
    let v72: i64;  // rax
    let v73: i64;  // rax
    let v74: i128;  // xmm0
    let v77: i64;  // rax

    v30 = std::sys::pal::unix::fs::stat(a0, a1);
    v47 = v30;
    if v47 != 2 && !a2 {
        v2 = a0;
        v3 = a1;
        v21 = &v2;
        v22 = <std::path::Display as core::fmt::Display>::fmt;
        v30 = &g_4e5118;
        v31 = &g_0;
        v35 = &g_0;
        v32 = &v21;
        v34 = &g_0;
        v12 = alloc::fmt::format::format_inner(&v30);
        *(&v16 as &&i64) = &g_0;
        v49 = __rust_alloc(32, &g_0);
        v54 = v12;
        *((v49 + &g_10 as &u8) as &i192) = v12;
        *(v49 as &i128) = v54;
        return v49;
    }
    v0 = a3;
    v29 = v47;
    v1 = a4;
    v48 = a1;
    v21 = std::path::Path::components(a0, a1);
    v2 = std::path::Path::components(&g_0, &g_0);
    v50 = v21;
    v51 = v22;
    v52 = v2;
    v53 = v3;
    if v51 == v53 && v26 == v9 && v27 == 2 && v10 == 2 {
        v55 = *((&v21 as &char + 16) as &i8);
        if v55 != 6 {
            v56 = *((&v2 as &char + 16) as &i8);
            if v56 != 6 && !((v56 < &g_0 ^ v55 < &g_0)) && !(bcmp(v50, v52, v51)) {
LABEL_482a06:
                return &g_0;
            }
        }
    }
    v57 = *((&v21 as &char + 16) as &i8);
    if v14 != 6 {
        v42 = v25;
        v58 = v23;
        v41 = v24;
        v40 = v58;
    }
    v59 = v28;
    v60 = v26;
    v12 = v50;
    v13 = v51;
    v14 = v57;
    v61 = v41;
    v15 = v40;
    v17 = v61;
    v18 = v42;
    v19 = v60;
    v20 = v59;
    v62 = a0;
    if v32 != 6 {
        v45 = v8;
        v63 = v5;
        v44 = v7;
        v43 = v63;
    }
    v64 = v11;
    v65 = v9;
    v30 = v52;
    v31 = v53;
    v66 = v44;
    v33 = v43;
    v36 = v66;
    v37 = v45;
    v38 = v65;
    v39 = v64;
    if !core::iter::traits::iterator::Iterator::eq_by(&v12, &v30, v38, v39, v67, v68) as i8 {
        v69 = a5;
        if a2 {
            v72 = std::path::Path::parent(v62, v48, v70, v71);
            if v72 {
                v49 = uu_mkdir::create_dir(v72, v70, &g_0, v0, &g_0, a5);
                if v49 {
                    return v49;
                }
            }
        }
        v30 = struct5 {
            field_0: 511
            field_4: &g_0
        };
        v73 = std::fs::DirBuilder::_create(&v30, v62, v48);
        if !v73 {
            if v0 {
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v21 = g_4e9fb0;
                v12 = &g_0;
                v13 = v62;
                v14 = v48;
                *(&v16 as &&i64) = &g_0;
                v2 = &v21;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &v12;
                v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                v30 = &g_4e51e0;
                v35 = &g_0;
                v32 = &v2;
                std::io::stdio::_print(&v30);
            }
            if v29 == 2 {
                if v1 {
                    5242912();
                    v69 = 5242912() & 319 ^ 511;
                }
                v69 |= uucore::features::fsxattr::get_acl_perm_bits_from_xattr(v62, v48, v70) as i32;
            }
            v77 = std::sys::pal::unix::fs::set_perm(v62, v48, v69);
            v49 = (v77 == &g_0 ? <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v77, v62, v48) : &g_0);
            return v49;
        } else if !std::path::Path::is_dir(v62, v48) as i8 {
            v30 = 0x8000000000000000;
            v34 = v73;
            v49 = __rust_alloc(32, &g_0);
            v74 = v30;
            *((v49 + &g_10 as &u8) as &i128) = *((&v30 as &char + 16) as &i128);
            *(v49 as &i128) = v74;
            return v49;
        }
    }
    goto LABEL_482a06;
}
