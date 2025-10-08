fn just::search::Search::justfile(a1: i64, a2: i64, a3: i64, a4: i384) -> : struct8 {
    let a0: struct80;  // rdi
    let v0: void*;  // [bp-0x170]
    let v1: i64;  // [bp-0x168]
    let v2: u64;  // [bp-0x160]
    let v3: void*;  // [bp-0x158]
    let v4: void*;  // [bp-0x148]
    let v5: struct16;  // [bp-0x138]
    let v6: struct24;  // [bp-0x128]
    let v7: struct103;  // [bp-0x120]
    let v8: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x118]
    let v9: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x110]
    let v10: struct20;  // [bp-0x110]
    let v12: struct32;  // [bp-0x110]
    let v13: u64;  // [bp-0x110]
    let v14: struct112;  // [bp-0x108]
    let v15: Option<struct1>;  // [bp-0x108]
    let v16: u128;  // [bp-0x100]
    let v17: struct16;  // [bp-0xf8]
    let v18: struct44;  // [bp-0xf0]
    let v19: u64;  // [bp-0xb0]
    let v20: u64;  // [bp-0xa8]
    let v22: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x88], Other Possible Types: struct20, struct9
    let v23: struct16;  // [bp-0x88]
    let v24: struct24;  // [bp-0x88]
    let v25: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x88]
    let v26: Result<struct40, struct16>;  // [bp-0x80]
    let v27: Result<struct105, struct17>;  // [bp-0x78]
    let v29: struct24;  // [bp-0x48]
    let v31: struct72;  // r12
    let v32: core::option::Option<&str>;  // r13
    let v33: u64;  // 4096
    let v34: u64;  // r8
    let v35: u64;  // rbp
    let v36: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // rax
    let v37: u64;  // rdx
    let v38: u64;  // rdx
    let v41: struct25;  // xmm0
    let v42: struct16;  // al
    let v43: struct80;  // rcx
    let v44: core::fmt::rt::Argument;  // rax
    let v45: struct32;  // [bp-0xff]

    v33 = a4;
    loop {
        v34 = v37;
        v1 = a3;
        v2 = v34;
        a3 = std::path::Path::parent(a3, v34);
        v3 = 0;
        v4 = 0;
        v22 = std::fs::read_dir(v1, v2);
        match v26 {
            Ok(_) => {
                v5 = v23;
            },
            Err(_) => {
                v12 = just::search::Search::project_root::{{closure}}(v1, v2, v22.field_0);
                v41 = v12.field_1;
                v42 = v12.field_16 as i8;
                *(&v0[17] as &i64) = v45.field_1 as i64;
                *(&v0[24] as &struct16) = v17;
                *(v0 as &struct25) = v41;
                *(&v0[16] as &struct16) = v42;
                break;
            },
        }
        loop {
            v22 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v5);
            if let None = v22 {
                break;
            }
            if let Ok(_) = v26 {
                *((v32 + 16) as &i64) = *((v31 + 16) as &i64);
                *(v32 as &i128) = *(v31 as &i128);
                v19 = v26;
                v20 = v27;
                v6 = std::fs::DirEntry::file_name(&v19);
                v9 = core::str::converts::from_utf8(v7, v8);
                if let Ok(_) = v9 {
                    v35 = *((&v9 as &char + 16) as &i64);
                    v13 = 0;
                    v14 = 2;
                    v18 = *(&g_82e5c0 as &i128);
                    v16 = g_82e5b0.field_0;
                    core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v13);
                    if v36 {
                        v38 = v37;
                        do {
                            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v15, v35, v36, v37) as u8 {
                                v29 = std::fs::DirEntry::path(&v19);
                                alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v3, &v29);
                            }
                            core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v13);
                        } while (v36);
                    }
                }
            }
        }
        if !v4 {
            if a1 {
                v22 = std::path::Path::components(v1, v2);
                v10 = std::path::Path::components(a1, a2);
                if <std::path::Components as core::cmp::PartialEq>::eq(&v22, &v10) {
                    *(a0 as &core::fmt::rt::Argument) = v44;
                    return;
                }
            }
            if let None = a3 {
                v43 = a0;
                *(v43 as &core::fmt::rt::Argument) = v44;
                return;
            }
        } else if v4 == 1 {
            v9 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
            v25 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v9);
            if (((0 ^ v25 as i64) & (0 ^ -(v24))) >> 63) as char {
                core::option::unwrap_failed(); /* do not return */
            }
            *(&v0[16] as &i128) = v26 as i128;
            *(&v0[8] as &i64) = v25 as i64;
            *(v0 as &i64) = 9223372036854775814;
            return;
        } else {
            v43 = a0;
            *(&v0[24] as &void*) = v4;
            *(&v0[8] as &i128) = *(&v3 as &i128);
            *(v43 as &core::fmt::rt::Argument) = v44;
            return;
        }
    }
    return;
}
