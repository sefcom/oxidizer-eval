fn uu_ptx::write_traditional_output(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x178]
    let v1: i128;  // [sp-0x168]
    let v2: i32;  // [sp-0x150]
    let v3: i32;  // [sp-0x14c]
    let v4: i64;  // [sp-0x148]
    let v5: struct24;  // [sp-0x138], Other Possible Types: i192
    let v6: i128;  // [sp-0x120], Other Possible Types: Result<struct16, struct12>, struct1
    let v7: i64;  // [sp-0x118]
    let v8: i64;  // [sp-0x110]
    let v9: i64;  // [sp-0x108]
    let v10: i64;  // [sp-0x100]
    let v11: i64;  // [sp-0xf0]
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xe0], Other Possible Types: Result<struct4, struct8>, struct32
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc8]
    let v17: Result<struct4, struct8>;  // [sp-0xc0]
    let v18: i64;  // [sp-0xb8]
    let v19: i64;  // [sp-0xb0]
    let v20: i64;  // [sp-0xa8]
    let v21: i64;  // [sp-0xa0]
    let v22: struct24;  // [sp-0x98], Other Possible Types: i192
    let v23: struct32;  // [sp-0x80], Other Possible Types: i256
    let v24: struct41;  // [sp-0x60], Other Possible Types: i328
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rbx
    let v29: i64;  // rcx
    let v30: i64;  // r8
    let v31: i64;  // r9
    let v32: i64;  // rax
    let v34: i64;  // rax
    let v36: i32;  // ebp
    let v37: i256;  // ymm0
    let v38: i256;  // ymm1
    let v39: i64;  // rbx
    let v40: i64;  // r15
    let v41: i64;  // r14
    let v42: i64;  // r12
    let v43: i64;  // r13
    let v44: i128;  // xmm0
    let v45: i256;  // ymm0
    let v46: i64;  // rax
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "-") as i8 {
        v26 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v27 = &g_6ee2c0;
    } else {
        v13 = std::fs::File::create(a3, a4);
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v13);
        v28 = v6;
        if v28 {
            return v28;
        }
        v26 = alloc::boxed::Box<T>::new(*((&v6 as &char + 8) as &i32));
        v27 = &g_6ee270;
    }
    v24 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, v26, v27);
    v13 = regex::regex::string::Regex::new(*((a0 + 56) as &i64), *((a0 + 64) as &i64), v29, v30, v31);
    v23 = core::result::Result<T,E>::unwrap(&v13, "src/uu/ptx/src/ptx.rs");
    v32 = *(a2 as &i64);
    v34 = v32;
    if v32 {
        v34 = *((a2 + 16) as &i64);
    }
    v13 = -0x100 | v32;
    v14 = 0;
    v15 = v32;
    v16 = *((a2 + 8) as &i64);
    v17 = v13;
    v18 = 0;
    v19 = v32;
    v20 = v16;
    v21 = v34;
    v36 = *((a0 + 93) as &i8);
    v3 = *((a0 + 89) as &i8);
    v2 = *((a0 + 90) as &i8);
    v4 = "src/uu/ptx/src/ptx.rs";
    loop {
        v39 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v13);
        if !v39 {
            return 0;
        }
        v40 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, v39 + 24);
        if !v40 {
            core::option::expect_failed(); /* do not return */
        }
        v41 = *((v39 + 56) as &i64);
        v42 = *((v40 + 32) as &i64);
        v43 = v41 * 3;
        v44 = v23;
        v45 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
        v0 = v44;
        v5 = uu_ptx::get_reference(v3, v2, v39, *((v42 + v43 * 8 + 8) as &i64), *((v42 + v43 * 8 + 16) as &i64));
        v46 = v42 + v43 * 8;
        if v36 == 1 {
            if v41 >= *((v40 + 64) as &i64) {
                v4 = "src/uu/ptx/src/ptx.rs";
            }
            v47 = *((*((v40 + 56) as &i64) + v43 * 8 + 8) as &i128);
            v37 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
            v48 = *((&v5 as &char + 8) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
            v1 = v48;
            v0 = v47;
            v22 = uu_ptx::format_roff_line(a0, *((v39 + 64) as &i64), *((v39 + 72) as &i64), *((v46 + 8) as &i64), *((v46 + 16) as &i64));
        } else {
            if v36 == 2 {
                v49 = *((*((v40 + 56) as &i64) + v43 * 8 + 8) as &i128);
                v37 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
                v50 = *((&v5 as &char + 8) as &i128);
                v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
                v1 = v50;
                v0 = v49;
                v22 = uu_ptx::format_tex_line(a0, *((v39 + 64) as &i64), *((v39 + 72) as &i64), *((v46 + 8) as &i64), *((v46 + 16) as &i64));
            } else {
                v6 = struct1 {
                    field_0: 0
                };
                v28 = alloc::boxed::Box<T>::new(&v6);
                break;
            }
        }
        v11 = &v22;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &g_6ee250;
        v7 = 2;
        v10 = 0;
        v8 = &v11;
        v9 = 1;
        v28 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::Write::write_fmt(&v24, &v6));
        if v28 {
            break;
        }
    }
    return v28;
}
