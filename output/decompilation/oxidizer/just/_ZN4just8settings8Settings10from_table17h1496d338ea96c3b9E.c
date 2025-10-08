fn just::settings::Settings::from_table(a1: &struct24) -> : struct328 {
    let a0: u64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x268]
    let v1: u64;  // [bp-0x250]
    let v2: struct24;  // [bp-0x238]
    let v3: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // [bp-0x1f0]
    let v4: struct81;  // [bp-0x1a8]
    let v5: core::option::Option<&str>;  // [bp-0x190]
    let v6: u64;  // [bp-0x148]
    let v7: void*;  // [bp-0x130]
    let v8: u32;  // [bp-0x129]
    let v9: u16;  // [bp-0x125]
    let v10: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x120]
    let v11: Result<struct16, struct64>;  // [bp-0x78]
    let v12: struct24;  // [bp-0x28]
    let v13: struct32;  // [bp-0x10]
    let v15: struct32;  // r15
    let v16: struct24;  // r12

    v13 = v15;
    v12 = v16;
    v0 = 0x8000000000000000;
    v7 = 0;
    v1 = 0x8000000000000000;
    v8 = 0;
    v2 = 0x8000000000000000;
    v3 = 0x8000000000000000;
    v4 = 0x8000000000000000;
    v9 = 0;
    v5 = 0x8000000000000000;
    v6 = 0x8000000000000000;
    v11 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v10 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v11);
    memcpy(a0, &v0, 328);
    return;
}
