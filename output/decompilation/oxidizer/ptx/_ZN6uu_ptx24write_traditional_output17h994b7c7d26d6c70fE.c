fn uu_ptx::write_traditional_output(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u128;  // [bp-0x168]
    let v2: u32;  // [bp-0x150]
    let v3: u32;  // [bp-0x14c]
    let v4: u64;  // [bp-0x148]
    let v5: u128;  // [bp-0x130]
    let v6: core::result::Result<alloc::string::String, core::char::decode::DecodeUtf16Error>;  // [bp-0x120], Other Possible Types: u64
    let v7: struct56;  // [bp-0x120]
    let v8: u64;  // [bp-0x118]
    let v9: i64;  // [bp-0x110]
    let v10: u64;  // [bp-0x108]
    let v11: void*;  // [bp-0x100]
    let v12: i64;  // [bp-0xf0]
    let v13: u64;  // [bp-0xe8]
    let v14: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: struct32, struct72
    let v15: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0xe0], Other Possible Types: u64
    let v16: u192;  // [bp-0x98]
    let v17: u192;  // [bp-0x98]
    let v18: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x60]
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v24: u32;  // ebp
    let v25: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rbx
    let v26: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // r15
    let v27: u64;  // r14
    let v28: u64;  // r12
    let v29: u64;  // r13
    let v30: u256;  // ymm0
    let v31: i64;  // rax
    let v34: &[u8];  // ymm0, Other Possible Types: u256
    let v35: core::option::Option<&str>;  // r15
    let v36: u64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "-") as i8 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    } else {
        v14 = std::fs::File::create(a3, a4);
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v14);
        match v6 {
            Ok(_) => {
                return v6 as i64;
            },
            Err(_) => {
                alloc::boxed::Box<T>::new(*((&v6 as &char + 8) as &i32));
            },
        }
    }
    v18 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
    regex::regex::string::Regex::new(*((a0 + 56) as &i64), *((a0 + 64) as &i64), a3);
    v14 = core::result::Result<T,E>::unwrap("src/uu/ptx/src/ptx.rs", a3);
    v21 = *(a2 as &i64);
    v22 = v21;
    if v22 {
        v22 = *((a2 + 16) as &i64);
    }
    v14 = struct72 {
        field_0: (v21) as u8 as u64
        field_8: 0
        field_16: v21
        field_24: *((a2 + 8) as &i64)
        field_32: v15
        field_40: 0
        field_48: v21
        field_56: *((a2 + 8) as &i64)
        field_64: v22
    };
    v24 = *((a0 + 93) as &i8);
    v3 = *((a0 + 89) as &i8);
    v2 = *((a0 + 90) as &i8);
    v4 = "src/uu/ptx/src/ptx.rs";
    do {
        v15 = alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
            range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Immut, std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
                front: <UNKNOWN>
                back: <UNKNOWN>
            }
            length: <UNKNOWN>
        };
        v25 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v15) as u64;
        if let None = v25 {
            return 0;
        }
        v26 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, v25 + 24, a2);
        if let None = v26 {
            core::option::expect_failed("Missing file in file map"); /* do not return */
        }
        v27 = *((v25 + 56) as &i64);
        v28 = *((v26 + 32) as &i64);
        v29 = v27 * 3;
        v30 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v15.length as &i128);
        uu_ptx::get_reference(v3, v2, v25 as u8, *((v28 + v29 * 8 + 8) as &i64), *((v28 + v29 * 8 + 16) as &i64), *(&v15.length as &i128), *(&v15.length as &i128), v0);
        v31 = v28 + v29 * 8;
        if v24 == 1 {
            v34 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((*((v26 + 56) as &i64) + v29 * 8 + 8) as &i128);
            v0 = v5;
            v35 = &v15 as u192;
            uu_ptx::format_roff_line(&v15 as u192, a0, *((v25 + 64) as &i64), *((v25 + 72) as &i64), *((v31 + 8) as &i64), *((v31 + 16) as &i64), *((*((v26 + 56) as &i64) + v29 * 8 + 8) as &i128), *((*((v26 + 56) as &i64) + v29 * 8 + 8) as &i128), v5, v5);
            v17 = v16;
        } else if v24 == 2 {
            v34 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((*((v26 + 56) as &i64) + v29 * 8 + 8) as &i128);
            v0 = v5;
            v35 = &v15 as u192;
            uu_ptx::format_tex_line(&v15 as u192, a0, *((v25 + 64) as &i64), *((v25 + 72) as &i64), *((v31 + 8) as &i64), *((v31 + 16) as &i64), *((*((v26 + 56) as &i64) + v29 * 8 + 8) as &i128), *((*((v26 + 56) as &i64) + v29 * 8 + 8) as &i128), v5, v5);
        } else {
            v6 = 0;
            v6 = v7 & -0x100;
            v36 = alloc::boxed::Box<T>::new(&v6);
        }
        v12 = v35;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &g_6ee250;
        v8 = 2;
        v11 = 0;
        v9 = &v12;
        v10 = 1;
        v36 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::Write::write_fmt(&v18, &v6));
    } while (!v36);
    return v36;
}
