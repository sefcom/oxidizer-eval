fn just::table::Table<V>::pop(a0: &struct256, a1: i64) -> u64 {
    let v0: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x58]
    let v2: struct16;  // rax
    let v3: i64;  // rdx
    let v4: struct16;  // rax
    let v6: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax

    v2 = *(a1 as &i64);
    v3 = v2;
    v4 = v2;
    if v4 {
        v4 = *((a1 + 16) as &i64);
    }
    v0 = alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
        range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Immut, std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
            front: (v2) as u8 as u64
            back: v2
        }
        length: <UNKNOWN>
    };
    v6 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
    match v6 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            return alloc::collections::btree::map::BTreeMap<K,V,A>::remove(a0, a1, *(v6 as &i64), *((v6 + 8) as &i64)) as u64;
        },
    }
}
