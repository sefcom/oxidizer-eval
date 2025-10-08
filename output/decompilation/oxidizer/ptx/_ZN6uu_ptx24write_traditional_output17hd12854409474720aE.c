fn uu_ptx::write_traditional_output(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u64;  // [bp-0x150]
    let v1: u64;  // [bp-0x138]
    let v2: iNone;  // [bp-0x130]
    let v3: Result<struct16, struct12>;  // [bp-0x120], Other Possible Types: u64
    let v4: u8;  // [bp-0x120]
    let v5: u64;  // [bp-0x118]
    let v6: i64;  // [bp-0x110]
    let v7: u64;  // [bp-0x108]
    let v8: void*;  // [bp-0x100]
    let v9: i64;  // [bp-0xf0]
    let v10: u64;  // [bp-0xe8]
    let v11: Result<struct4, struct8>;  // [bp-0xe0], Other Possible Types: struct32, struct72
    let v12: u64;  // [bp-0xe0]
    let v13: struct32;  // [bp-0x98]
    let v14: struct41;  // [bp-0x78]
    let v15: u8;  // [bp-0x48]
    let v17: struct24;  // rax
    let v18: u64;  // rdx
    let v19: u64;  // rax
    let v20: u64;  // rax
    let v22: u32;  // r15d
    let v23: core::fmt::rt::Argument;  // ymm0
    let v24: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rbx
    let v25: i64;  // r14
    let v26: u64;  // rcx
    let v27: u256;  // ymm0
    let v28: core::option::Option<&str>;  // rdi
    let v29: u64;  // rsi
    let v30: i64;  // rsi
    let v31: u64;  // rdx
    let v32: struct24;  // rdx
    let v33: void*;  // rbx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "-") {
        v17 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    } else {
        v11 = std::fs::File::create(a3, a4);
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, a3, a4);
        match v3 {
            Ok(_) => {
                return v3 as i64;
            },
            Err(_) => {
                v17 = alloc::boxed::Box<T>::new(v5 as u32);
            },
        }
    }
    v14 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v17, v18);
    v11 = regex::regex::string::Regex::new(*((a0 + 56) as &i64), *((a0 + 64) as &i64));
    v13 = core::result::Result<T,E>::unwrap(&v11, "src/uu/ptx/src/ptx.rs");
    v19 = *(a2 as &i64);
    v20 = v19;
    if v20 {
        v20 = *((a2 + 16) as &i64);
    }
    v11 = struct72 {
        field_0: (v19) as u8 as u64
        field_8: 0
        field_16: v19
        field_24: *((a2 + 8) as &i64)
        field_32: v12
        field_40: 0
        field_48: v19
        field_56: *((a2 + 8) as &i64)
        field_64: v20
    };
    v22 = *((a0 + 93) as &i8);
    v0 = "src/uu/ptx/src/ptx.rs";
    do {
        v24 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v11) as u64;
        match v24 {
            Some(_) => {
                v25 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, v24 + 24);
                if !v25 {
                    core::option::expect_failed("Missing file in file map"); /* do not return */
                }
                v26 = *((v24 + 56) as &i64) * 3;
                v27 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v13.field_0 as &i128) as u128 as u256;
                uu_ptx::get_reference(&v1, *((a0 + 89) as &i8), *((a0 + 90) as &i8) as u8 as u32, v24, *((*((v25 + 32) as &i64) + v26 * 8 + 8) as &i64), *((*((v25 + 32) as &i64) + v26 * 8 + 16) as &i64), *(&v13.field_0 as &i128) as i64, *(&v13.field_0 as &i128) as i64);
                if v22 == 1 {
                    v28 = *((v24 + 56) as &i64);
                    v30 = *((v25 + 40) as &i64);
                    v32 = v28 * 24;
                    v23 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((*((v25 + 56) as &i64) + v32 + 8) as &i128) as u128 as u256;
                    uu_ptx::format_roff_line(&v15, a0, *((v24 + 64) as &i64), *((v24 + 72) as &i64), *((*((v25 + 32) as &i64) + v32 + 8) as &i64), *((*((v25 + 32) as &i64) + v32 + 16) as &i64) as i32, *((*((v25 + 56) as &i64) + v32 + 8) as &i128) as i64, *((*((v25 + 56) as &i64) + v32 + 8) as &i128) as i64, v2 as u64, v2 as u64);
                } else if v22 == 2 {
                    v28 = *((v24 + 56) as &i64);
                    v29 = *((v25 + 40) as &i64);
                    v31 = v28 * 24;
                    v23 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((*((v25 + 56) as &i64) + v31 + 8) as &i128) as u128 as u256;
                    uu_ptx::format_tex_line(&v15, a0, *((v24 + 64) as &i64), *((v24 + 72) as &i64), *((*((v25 + 32) as &i64) + v31 + 8) as &i64), *((*((v25 + 32) as &i64) + v31 + 16) as &i64) as i32, *((*((v25 + 56) as &i64) + v31 + 8) as &i128) as i64, *((*((v25 + 56) as &i64) + v31 + 8) as &i128) as i64, v2 as u64, v2 as u64);
                } else {
                    v4 = 0;
                    v33 = alloc::boxed::Box<T>::new(&v4 as u64) as u64;
                }
            },
            None => {
                v33 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v14));
            },
        }
        v9 = &v15;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_651cc8;
        v5 = 2;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        v33 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::Write::write_fmt(&v14, &v3));
    } while (!v33);
    return v33;
}
