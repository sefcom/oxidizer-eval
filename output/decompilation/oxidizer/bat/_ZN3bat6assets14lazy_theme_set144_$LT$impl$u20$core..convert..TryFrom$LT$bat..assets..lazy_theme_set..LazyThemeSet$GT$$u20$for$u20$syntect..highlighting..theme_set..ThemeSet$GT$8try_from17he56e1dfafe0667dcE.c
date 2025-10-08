fn bat::assets::lazy_theme_set::<impl core::convert::TryFrom<bat::assets::lazy_theme_set::LazyThemeSet> for syntect::highlighting::theme_set::ThemeSet>::try_from(a0: u64, a1: &u64) -> long long {
    let v0: void*;  // [bp-0x4f8]
    let v1: struct41;  // [bp-0x4f0]
    let v2: void*;  // [bp-0x4e0]
    let v3: iNone;  // [bp-0x4d8]
    let v4: iNone;  // [bp-0x4c8]
    let v5: iNone;  // [bp-0x4b8]
    let v6: iNone;  // [bp-0x4a8]
    let v7: iNone;  // [bp-0x498]
    let v8: Result<struct16, struct64>;  // [bp-0x488]
    let v9: alloc::collections::btree::map::IntoIter<std::ffi::os_str::OsString, std::ffi::os_str::OsString, alloc::alloc::Global>;  // [bp-0x488]
    let v10: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x440]
    let v11: u64;  // [bp-0x420]
    let v12: Option<struct248>;  // [bp-0x318]
    let v13: iNone;  // [bp-0x310]
    let v14: iNone;  // [bp-0x300]
    let v15: Option<struct24>;  // [bp-0x2f0]
    let v16: struct24;  // [bp-0x2e0]
    let v17: Result<struct40, struct16>;  // [bp-0x2d0]
    let v18: struct88;  // [bp-0x220]
    let v19: Result<struct40, struct16>;  // [bp-0x1c8]
    let v20: Option<struct248>;  // [bp-0x128]
    let v22: u1280;  // [bp-0x2c0]

    v1 = 0;
    v2 = 0;
    v8 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    loop {
        v9 = alloc::collections::btree::map::IntoIter<std::ffi::os_str::OsString, std::ffi::os_str::OsString, alloc::alloc::Global> {
            range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Dying, std::ffi::os_str::OsString, std::ffi::os_str::OsString> {
                front: <UNKNOWN>
                back: <UNKNOWN>
            }
            length: <UNKNOWN>
            alloc: alloc::alloc::Global { }
        };
        v10 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        match v10 {
            None => {
                *(&v0[24] as &i64) = 0;
                *(&v0[8] as &i128) = *(&v1.field_0 as &i128);
                *(v0 as &i8) = 13;
                return a0;
            },
            Some(_) => {
                v12 = bat::assets::lazy_theme_set::LazyTheme::deserialize(v11, *((&v10 as &char + 40) as &i64));
                v3 = v13;
                v4 = v14;
                v5 = v15;
                v6 = v16;
                v7 = v17;
                match v12 {
                    None => {
                        v0[64] = v7;
                        v0[48] = v6;
                        v0[32] = v5;
                        v0[16] = v4;
                        *(v0) = v3;
                        return a0;
                    },
                    Some(_) => {
                        memcpy(&v19, &v22, 160);
                        v18 = struct88 {
                            field_0: v12
                            field_8: v3
                            field_24: v4
                            field_40: v5
                            field_56: v6
                            field_72: v7
                        };
                        v20 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v1, &v10, &v18);
                    },
                }
            },
        }
    }
}
