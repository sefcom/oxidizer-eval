fn just::function::append(a0: i64, a1: i64, a2: u64, a3: i64, a4: u64, a5: u64) -> long long {
    let v0: u8;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: u32;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: core::option::Option<&str>;  // [bp-0x60]
    let v5: struct16;  // [bp-0x58], Other Possible Types: struct24
    let v6: struct40;  // [bp-0x40]
    let v7: core::option::Option<&str>;  // [bp-0x18]

    v3 = a2;
    v4 = a3;
    v6 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(a4, a5);
    v7 = 1;
    v5 = struct16 {
        field_0: &v3
        field_8: 0
    };
    core::iter::traits::iterator::Iterator::collect(&v0, &v5);
    v5 = alloc::str::join_generic_copy(v1, v2, " ");
    return struct32 {
        field_0: 0
        field_8: v5.field_0
        field_24: a5
    };
}
