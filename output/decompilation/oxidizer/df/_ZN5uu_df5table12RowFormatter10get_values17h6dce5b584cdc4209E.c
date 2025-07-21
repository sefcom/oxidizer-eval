fn uu_df::table::RowFormatter::get_values(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x119]
    let v1: u64;  // [bp-0xd8]
    let v2: u64;  // [bp-0xd0]
    let v3: struct24;  // [bp-0xa8]
    let v4: i64;  // [bp-0x90]
    let v5: struct146;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: struct24;  // [bp-0x78]
    let v8: struct32;  // [bp-0x70]
    let v9: u64;  // [bp-0x68]
    let v10: u64;  // [bp-0x60]
    let v11: u64;  // [bp-0x58]
    let v12: u64;  // [bp-0x50]
    let v13: u64;  // [bp-0x48]
    let v14: struct16;  // [bp-0x40]
    let v16: u64;  // rcx
    let v17: u64;  // rax
    let v18: u64;  // rbp

    v3 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v16 = *((*((a1 + 8) as &i64) + 8) as &i64);
    v12 = *((*((a1 + 8) as &i64) + 16) as &i64);
    v13 = v16;
    v14 = struct16 {
        field_0: v16
        field_8: *((*((a1 + 8) as &i64) + 16) as &i64) + v16
    };
    v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14) {
        *((v4 + 16) as &i64) = 0;
        *(v4 as &i128) = *(&v3.field_0 as &i128);
        return 0;
    }
    v18 = *(a1 as &i64);
    v1 = v18 + 152;
    v11 = v18 + 16;
    v10 = v18 + 24;
    v9 = v18 + 64;
    v8 = v18 + 32;
    v0 = *((a1 + 16) as &i8);
    v2 = v18 + 128;
    v7 = v18 + 192;
    v6 = v18 + 184;
    v5 = v18 + 80;
    goto ((&g_415aa0.field_0)[*(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14) as &i8)] + &g_415aa0.field_0) as i64;
}
