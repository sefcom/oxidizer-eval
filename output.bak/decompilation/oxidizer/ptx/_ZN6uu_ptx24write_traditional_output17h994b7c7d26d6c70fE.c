fn uu_ptx::write_traditional_output(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i128;  // [sp-0x178]
    let v1: i128;  // [sp-0x168]
    let v2: i32;  // [sp-0x150]
    let v3: i32;  // [sp-0x14c]
    let v4: i64;  // [sp-0x148]
    let v5: i192;  // [sp-0x138], Other Possible Types: struct24
    let v6: i136;  // [sp-0x120], Other Possible Types: struct1, Result<struct16, struct4>
    let v7: i64;  // [sp-0x118]
    let v8: i64;  // [sp-0x110]
    let v9: i64;  // [sp-0x108]
    let v10: i64;  // [sp-0x100]
    let v11: i64;  // [sp-0xf0]
    let v12: i64;  // [sp-0xe8]
    let v13: i256;  // [sp-0xe0], Other Possible Types: struct32, Result<struct4, struct8>
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc8]
    let v17: Result<struct4, struct8>;  // [sp-0xc0]
    let v18: i64;  // [sp-0xb8]
    let v19: i64;  // [sp-0xb0]
    let v20: i64;  // [sp-0xa8]
    let v21: i64;  // [sp-0xa0]
    let v22: struct24;  // [sp-0x98], Other Possible Types: i192
    let v23: i256;  // [sp-0x80], Other Possible Types: struct32
    let v24: struct41;  // [sp-0x60], Other Possible Types: i328
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rbx
    let v29: i64;  // rax
    let v31: i64;  // rax
    let v33: i32;  // ebp
    let v34: i256;  // ymm0
    let v35: i256;  // ymm1
    let v36: i64;  // rbx
    let v37: i64;  // r15
    let v38: i64;  // r14
    let v39: i64;  // r12
    let v40: i64;  // r13
    let v41: i128;  // xmm0
    let v42: i256;  // ymm0
    let v43: i64;  // rax
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "-") as i8 {
        v26 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v27 = &g_6ee2c0;
    } else {
        v13 = std::fs::File::create(a3, a4) as u64;
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v13);
        v28 = v6;
        if v28 {
            return v28;
        }
        v26 = alloc::boxed::Box<T>::new(*((&v6 as &char + 8) as &i32));
        v27 = &g_6ee270;
    }
    v24 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, v26, v27);
    v13 = regex::regex::string::Regex::new(*((a0 + 56) as &i64), *((a0 + 64) as &i64));
    v23 = core::result::Result<T,E>::unwrap(&v13, "src/uu/ptx/src/ptx.rs");
    v29 = *(a2 as &i64);
    v31 = v29;
    if v29 {
        v31 = *((a2 + 16) as &i64);
    }
    v13 = -0x100 | v29;
    v14 = 0;
    v15 = v29;
    v16 = *((a2 + 8) as &i64);
    v17 = v13;
    v18 = 0;
    v19 = v29;
    v20 = v16;
    v21 = v31;
    v33 = *((a0 + 93) as &i8);
    v3 = *((a0 + 89) as &i8);
    v2 = *((a0 + 90) as &i8);
    v4 = "src/uu/ptx/src/ptx.rs";
    loop {
        v36 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v13);
        if !v36 {
            return 0;
        }
        v37 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, v36 + 24);
        if !v37 {
            core::option::expect_failed("Missing file in file map", "src/uu/ptx/src/ptx.rs"); /* do not return */
        }
        v38 = *((v36 + 56) as &i64);
        v39 = *((v37 + 32) as &i64);
        v40 = v38 * 3;
        v41 = v23;
        v42 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
        v0 = v41;
        v5 = uu_ptx::get_reference(v3, v2, v36, *((v39 + v40 * 8 + 8) as &i64), *((v39 + v40 * 8 + 16) as &i64));
        v43 = v39 + v40 * 8;
        if v33 == 1 {
            if v38 >= *((v37 + 64) as &i64) {
                v4 = "src/uu/ptx/src/ptx.rs";
            }
            v44 = *((*((v37 + 56) as &i64) + v40 * 8 + 8) as &i128);
            v34 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
            v45 = *((&v5 as &char + 8) as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
            v1 = v45;
            v0 = v44;
            v22 = uu_ptx::format_roff_line(a0, *((v36 + 64) as &i64), *((v36 + 72) as &i64), *((v43 + 8) as &i64), *((v43 + 16) as &i64));
        } else {
            if v33 == 2 {
                v46 = *((*((v37 + 56) as &i64) + v40 * 8 + 8) as &i128);
                v34 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v47 = *((&v5 as &char + 8) as &i128);
                v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
                v1 = v47;
                v0 = v46;
                v22 = uu_ptx::format_tex_line(a0, *((v36 + 64) as &i64), *((v36 + 72) as &i64), *((v43 + 8) as &i64), *((v43 + 16) as &i64));
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
