fn check_docs::validate_includes(a1: &struct24, a2: &struct24) -> : struct48 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0xa8]
    let v1: u64;  // [bp-0x98]
    let v2: struct24;  // [bp-0x88], Other Possible Types: struct48
    let v3: u64;  // [bp-0x78]
    let v4: iNone;  // [bp-0x70]
    let v5: u64;  // [bp-0x60]
    let v6: struct32;  // [bp-0x58], Other Possible Types: u128
    let v7: u64;  // [bp-0x48]
    let v8: i64;  // [bp-0x38]
    let v9: u8;  // [bp-0x30]
    let v10: i8;  // [bp-0x20]

    v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v8 = a2;
    v2 = itertools::Itertools::partition_map(&v6);
    v1 = v3;
    v0 = v2.field_0;
    v7 = v5;
    v6 = v4;
    v2 = struct24 {
        field_0: *((a2 + 8) as &i64)
        field_8: *((a2 + 16) as &i64) * 56 + *((a2 + 8) as &i64)
        field_16: &v0
    };
    core::iter::traits::iterator::Iterator::collect(&v9, &v2);
    return struct48 {
        field_0: v6
        field_16: v7
        field_24: v9
        field_40: *(&v10 as &i64)
    };
}
