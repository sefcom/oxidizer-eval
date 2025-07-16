fn uu_df::table::RowFormatter::get_values(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x119]
    let v1: u64;  // [bp-0xd8]
    let v2: u64;  // [bp-0xd0]
    let v3: &mut [u8];  // [bp-0xa8]
    let v4: u64;  // [bp-0xa0]
    let v5: void*;  // [bp-0x98]
    let v6: i64;  // [bp-0x90]
    let v7: u64;  // [bp-0x88]
    let v8: struct24;  // [bp-0x80]
    let v9: struct146;  // [bp-0x78]
    let v10: struct32;  // [bp-0x70]
    let v11: u64;  // [bp-0x68]
    let v12: u64;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: u64;  // [bp-0x50]
    let v15: u64;  // [bp-0x48]
    let v16: u128;  // [bp-0x40]
    let v18: u64;  // rcx
    let v19: u64;  // rax
    let v20: u64;  // rbp

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v18 = *((*((a1 + 8) as &i64) + 8) as &i64);
    v14 = *((*((a1 + 8) as &i64) + 16) as &i64);
    v15 = v18;
    v16 = struct16 {
        field_0: v18
        field_8: *((*((a1 + 8) as &i64) + 16) as &i64) + v18
    };
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16) {
        *((v6 + 16) as &i64) = 0;
        *(v6 as &i128) = *(&v3.data_ptr as &i128);
        return 0;
    }
    v20 = *(a1 as &i64);
    v1 = v20 + 152;
    v13 = v20 + 16;
    v12 = v20 + 24;
    v11 = v20 + 64;
    v10 = v20 + 32;
    v0 = *((a1 + 16) as &i8);
    v2 = v20 + 128;
    v9 = v20 + 192;
    v8 = v20 + 184;
    v7 = v20 + 80;
    goto ((&g_415aa0.field_0)[*(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16) as &i8)] + &g_415aa0.field_0) as i64;
}
