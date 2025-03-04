fn uu_ptx::write_traditional_output(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x178]
    let v1: i8;  // [bp-0x170]
    let v2: i8;  // [bp-0x168]
    let v3: i8;  // [bp-0x160]
    let v4: i32;  // [sp-0x150]
    let v5: i32;  // [sp-0x14c]
    let v6: i64;  // [sp-0x148]
    let v7: struct24;  // [sp-0x138]
    let v8: i8;  // [sp-0x120], Other Possible Types: Result<struct16, struct4>, unsigned long
    let v9: i64;  // [sp-0x118]
    let v10: i64;  // [sp-0x110]
    let v11: i64;  // [sp-0x108]
    let v12: i64;  // [sp-0x100]
    let v13: i64;  // [sp-0xf0]
    let v14: i64;  // [sp-0xe8]
    let v15: Result<struct4, struct8>;  // [sp-0xe0], Other Possible Types: struct32, unsigned long
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i64;  // [sp-0xc8]
    let v19: i64;  // [sp-0xc0]
    let v20: i64;  // [sp-0xb8]
    let v21: i64;  // [sp-0xb0]
    let v22: i64;  // [sp-0xa8]
    let v23: i64;  // [sp-0xa0]
    let v24: i8;  // [bp-0x98]
    let v25: struct32;  // [sp-0x80]
    let v26: struct41;  // [sp-0x60]
    let v28: i64;  // rax
    let v29: i64;  // rcx
    let v30: i64;  // rbx
    let v31: i64;  // rbx
    let v32: i64;  // rax
    let v34: i64;  // rsi
    let v35: i32;  // ebp
    let v36: iNone;  // ymm0
    let v37: iNone;  // ymm1
    let v38: i64;  // rbx
    let v39: i64;  // r15
    let v40: i64;  // r14
    let v41: i64;  // r12
    let v42: i64;  // r13
    let v43: iNone;  // ymm0
    let v44: i64;  // rax
    let v46: i64;  // rbx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "-") as i8 {
        v28 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v29 = &g_6ee2c0;
    } else {
        v15 = std::fs::File::create(a3, a4);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v15);
        v30 = v8 as i64;
        match v8 {
            Ok(_) => {
                v31 = v30;
                return v31;
            },
            Err(_) => {
                v28 = alloc::boxed::Box<T>::new(*((&v8 as &char + 8) as &i32) as u32 as u64);
                v29 = &g_6ee270;
            },
        }
    }
    v26 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, v28, v29);
    v15 = regex::regex::string::Regex::new(*((a0 + 56) as &i64), *((a0 + 64) as &i64));
    v25 = core::result::Result<T,E>::unwrap(&v15, "src/uu/ptx/src/ptx.rs");
    v32 = *(a2 as &i64);
    v34 = v32;
    if v32 {
        v34 = *((a2 + 16) as &i64);
    }
    v15 = v32;
    v16 = 0;
    v17 = v32;
    v18 = *((a2 + 8) as &i64);
    v19 = v15;
    v20 = 0;
    v21 = v32;
    v22 = v18;
    v23 = v34;
    v35 = *((a0 + 93) as &i8);
    v5 = *((a0 + 89) as &i8);
    v4 = *((a0 + 90) as &i8);
    v6 = "src/uu/ptx/src/ptx.rs";
    loop {
        v38 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v15);
        if !v38 {
            return 0;
        }
        v39 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, v38 + 24);
        if !v39 {
            core::option::expect_failed("Missing file in file map", "src/uu/ptx/src/ptx.rs"); /* do not return */
        }
        v40 = *((v38 + 56) as &i64);
        v41 = *((v39 + 32) as &i64);
        v42 = v40 * 3;
        v43 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v25.field_0 as &i128);
        v7 = uu_ptx::get_reference(v5 as u64, v4 as u64, v38, *((v41 + v42 * 8 + 8) as &i64), *((v41 + v42 * 8 + 16) as &i64), *(&v0 as &i64), *(&v1 as &i64));
        v44 = v41 + v42 * 8;
        if v35 == 1 {
            if v40 >= *((v39 + 64) as &i64) {
                v6 = "src/uu/ptx/src/ptx.rs";
            }
            v36 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((*((v39 + 56) as &i64) + v42 * 8 + 8) as &i128);
            v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v7.field_0 as &char + 8) as &i128);
            uu_ptx::format_roff_line(&v24, a0, *((v38 + 64) as &i64), *((v38 + 72) as &i64), *((v44 + 8) as &i64), *((v44 + 16) as &i64), *(&v0 as &i64), *(&v1 as &i64), *(&v2 as &i64), *(&v3 as &i64));
        } else {
            if v35 == 2 {
                v36 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((*((v39 + 56) as &i64) + v42 * 8 + 8) as &i128);
                v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v7.field_0 as &char + 8) as &i128);
                uu_ptx::format_tex_line(&v24, a0, *((v38 + 64) as &i64), *((v38 + 72) as &i64), *((v44 + 8) as &i64), *((v44 + 16) as &i64), *(&v0 as &i64), *(&v1 as &i64), *(&v2 as &i64), *(&v3 as &i64));
            } else {
                *(&v8 as &i8) = 0;
                alloc::boxed::Box<T>::new(&v8);
                return v31;
            }
        }
        v13 = &v24;
        v14 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v8 as &&i64) = &g_6ee250;
        v9 = 2;
        v12 = 0;
        v10 = &v13;
        v11 = 1;
        if <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::Write::write_fmt(&v26, &v8)) {
            v31 = v46;
            return v31;
        }
    }
}
