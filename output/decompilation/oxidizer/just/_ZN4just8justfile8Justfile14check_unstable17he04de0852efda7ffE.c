fn just::justfile::Justfile::check_unstable(a1: i64, a2: i32) -> : struct104 {
    let a0: i64;  // rdi
    let v0: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0xd0]
    let v1: struct104;  // [bp-0xd0]
    let v2: u128;  // [bp-0x80]
    let v3: u64;  // [bp-0x70]
    let v4: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x68]
    let v6: u64;  // rbp
    let v7: struct24;  // rax
    let v8: struct24;  // rax
    let v10: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax
    let v12: core::option::Option<u32>;  // rax
    let v13: core::option::Option<u32>;  // rax
    let v15: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax
    let v16: void*;  // rdx
    let v17: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // xmm0
    let v18: struct24;  // xmm1
    let v19: iNone;  // xmm2

    v6 = a2;
    v7 = *((a1 + 720) as &i64);
    v8 = v7;
    if v8 {
        v8 = *((a1 + 736) as &i64);
    }
    v0 = alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
        range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Immut, std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
            front: (v7) as u8 as u64
            back: v7
        }
        length: <UNKNOWN>
    };
    v10 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
    if let Some(_) = v10 {
        if !(v6 as u8 & 1) && !*((a1 + 491) as &i8) {
            return struct2 {
                field_0: 54
                field_1: *(v10 as &i8)
            };
        }
    }
    v12 = *((a1 + 672) as &i64);
    v13 = v12;
    if let Some(_) = v13 {
        v13 = *((a1 + 688) as &i64);
    }
    v4 = alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
        range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Immut, std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
            front: (v12) as u8 as u64
            back: v12
        }
        length: <UNKNOWN>
    };
    v15 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v4) as u64;
    if let Some(_) = v15 {
        do {
            v1 = just::justfile::Justfile::check_unstable(v16, v6 & 4294967295);
            if &v1 != "8" {
                v17 = v1.field_0;
                v18 = v1.field_16;
                v19 = v1.field_32;
                return struct104 {
                    field_0: v17
                    field_16: v18
                    field_32: v19
                    field_48: v1.field_48
                    field_64: v1.field_64
                    field_80: v2
                    field_96: v3
                };
            }
            v15 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v4) as u64;
        } while (v15);
    }
    return struct1 {
        field_0: 56
    };
}
