fn just::config::Config::parse_module_path(a0: i64, a1: i64, a2: u32) -> int {
    let v0: u8;  // [bp-0xb0]
    let v1: i64;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u8;  // [bp-0x98]
    let v4: struct72;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: struct16;  // [bp-0x80], Other Possible Types: struct8
    let v7: u64;  // [bp-0x80]
    let v8: Option<struct25>;  // [bp-0x80]
    let v9: struct40;  // [bp-0x70]
    let v10: u16;  // [bp-0x48]
    let v11: u128;  // [bp-0x40]
    let v12: i8;  // [bp-0x30]
    let v15: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // r12
    let v16: u64;  // r12
    let v17: iNone;  // xmm0
    let v18: u64;  // r12

    v6 = <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(a1, a2);
    v10 = *((a1 + 56) as &i64);
    core::iter::traits::iterator::Iterator::collect(&v0, &v6);
    if v2 == 1 && <char as core::str::pattern::Pattern>::is_contained_in(32, *(v1 as &i64), *((v1 + 8) as &i64)) {
        v9 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(*(v1 as &i64), *((v1 + 8) as &i64));
        v6 = struct16 {
            field_0: 0
            field_8: *((v1 + 8) as &i64)
        };
        v10 = 1;
        core::iter::traits::iterator::Iterator::collect(&v3, &v6);
    } else {
        v5 = v2;
        v3 = *(&v0 as &i128);
    }
    v8 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from(v4, v5);
    if (((0 ^ v8 as i64) & (0 ^ -(v7))) >> 63) as char {
        core::iter::traits::iterator::Iterator::collect(&v11, a1);
        v15 = 9223372036854775810;
        return struct32 {
            field_0: v16
            field_8: v11
            field_24: *(&v12 as &i64)
        };
    } else {
        v17 = v8 as i128;
        *((a0 + 24) as &i128) = *((&v8 as &char + 16) as &i128);
        *((a0 + 8) as void*) = v17;
        v18 = 9223372036854775815;
    }
    return;
}
