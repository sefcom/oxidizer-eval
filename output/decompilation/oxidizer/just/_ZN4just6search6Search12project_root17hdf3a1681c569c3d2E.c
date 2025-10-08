fn just::search::Search::project_root(a0: i64, a1: i64, a2: u32, a3: i64, a4: u64) -> int {
    let v0: struct128;  // [bp-0x160]
    let v1: void*;  // [bp-0x158]
    let v2: core::option::Option<&str>;  // [bp-0x148]
    let v3: u192;  // [bp-0x148]
    let v4: u64;  // [bp-0x140]
    let v5: u64;  // [bp-0x138]
    let v6: struct128;  // [bp-0x130]
    let v7: &u8;  // [bp-0x128]
    let v8: struct24;  // [bp-0x120]
    let v9: struct80;  // [bp-0x118]
    let v10: struct89;  // [bp-0x110]
    let v11: u64;  // [bp-0x108]
    let v12: u64;  // [bp-0xf8]
    let v13: struct24;  // [bp-0xf0]
    let v14: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0xe8], Other Possible Types: struct32
    let v15: struct20;  // [bp-0xe8]
    let v16: struct80;  // [bp-0xe0]
    let v17: alloc::collections::btree::map::IntoIter<std::ffi::os_str::OsString, std::ffi::os_str::OsString, alloc::alloc::Global>;  // [bp-0xd8]
    let v18: iNone;  // [bp-0xd0]
    let v19: struct9;  // [bp-0xa8]
    let v20: struct20;  // [bp-0xa8]
    let v21: struct9;  // [bp-0xa8]
    let v22: struct80;  // [bp-0xa8]
    let v23: u64;  // [bp-0xa0]
    let v24: iNone;  // [bp-0x98]
    let v25: u64;  // [bp-0x88]
    let v26: struct24;  // [bp-0x68]
    let v28: struct24;  // r14
    let v29: struct89;  // al
    let v30: core::option::Option<&str>;  // 4096
    let v32: iNone;  // xmm0
    let v33: struct32;  // [bp-0x150], Other Possible Types: struct24

    v28 = a4;
    v0 = std::path::Path::parent(a3, a4);
    v19 = std::fs::read_dir(a3, a4);
    if v19.field_8 == 2 {
        v30 = a3;
    } else {
        v11 = a4;
        v30 = a3;
        do {
            v8 = v13;
            v7 = v6;
            v6 = v0;
            v9 = v22;
            v10 = v29;
            loop {
                v14 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v9);
                if let None = v14 {
                    break;
                }
                if !v16 {
                    v33 = just::search::Search::project_root::{{closure}}(v7 as u32, v8, *((&v14 as &char + 16) as &i64));
                    v26 = v3;
                    *(&v1[24] as &u64) = v5;
                    *(&v1[8] as &u128) = v26.field_0;
                    *(v1 as &i64) = v33.field_0;
                    return;
                }
                v25 = *((&v14 as &char + 40) as &i64);
                v24 = v18;
                v22 = v16;
                v23 = *((&v14 as &char + 16) as &i64);
                v33 = std::fs::DirEntry::file_name(&v22);
                if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v4, ".bzr") {
                    v33 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7 as u32);
                    *(&v1[24] as &u64) = v4;
                    *(&v1[8] as &u128) = v33.field_0;
                    *(v1 as &i64) = 9223372036854775814;
                    return;
                }
                v33 = std::fs::DirEntry::file_name(&v22);
                if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v4, ".git") {
                    v33 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7 as u32);
                    *(&v1[24] as &u64) = v4;
                    *(&v1[8] as &u128) = v33.field_0;
                    *(v1 as &i64) = 9223372036854775814;
                    return;
                }
                v33 = std::fs::DirEntry::file_name(&v22);
                if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v4, ".hg") {
                    v33 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7 as u32);
                    *(&v1[24] as &u64) = v4;
                    *(&v1[8] as &u128) = v33.field_0;
                    *(v1 as &i64) = 9223372036854775814;
                    return;
                }
                v33 = std::fs::DirEntry::file_name(&v22);
                if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v4, ".svn") {
                    v33 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7 as u32);
                    *(&v1[24] as &u64) = v4;
                    *(&v1[8] as &u128) = v33.field_0;
                    *(v1 as &i64) = 9223372036854775814;
                    return;
                }
                v33 = std::fs::DirEntry::file_name(&v22);
                if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v4, "_darcs") {
                    v33 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7 as u32);
                    *(&v1[24] as &u64) = v4;
                    *(&v1[8] as &u128) = v33.field_0;
                    *(v1 as &i64) = 9223372036854775814;
                    return;
                }
            }
            if v12 {
                v20 = std::path::Path::components(v7, v8);
                v15 = std::path::Path::components(v12, a2);
                if <std::path::Components as core::cmp::PartialEq>::eq(&v20, &v15) {
                    std::sys::pal::unix::os::split_paths::bytes_to_path(v1 + 8, a3 as u32);
                    *(v1 as &i64) = 9223372036854775814;
                    return;
                }
            }
            if !v0 {
                std::sys::pal::unix::os::split_paths::bytes_to_path(v1 + 8, a3 as u32);
                *(v1 as &i64) = 9223372036854775814;
                return;
            }
            v0 = std::path::Path::parent(v6, v28);
            v21 = std::fs::read_dir(v6, v28);
        } while (v21.field_8 != 2);
    }
    v14 = just::search::Search::project_root::{{closure}}(v30 as u32, v28, v22);
    v32 = v14.field_0;
    *(&v1[17] as &i64) = *((&v14.field_16 as &char + 1) as &i64);
    *(&v1[24] as &u64) = v14.field_24;
    *(v1) = v32;
    *(&v1[16] as &alloc::collections::btree::map::IntoIter<std::ffi::os_str::OsString, std::ffi::os_str::OsString, alloc::alloc::Global>) = v17;
    return;
}
