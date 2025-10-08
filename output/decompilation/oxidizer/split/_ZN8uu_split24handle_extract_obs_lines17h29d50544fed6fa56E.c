fn uu_split::handle_extract_obs_lines(a1: i64, a2: i32, a3: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xa1]
    let v1: void*;  // [bp-0xa0]
    let v2: u64;  // [bp-0x98]
    let v3: void*;  // [bp-0x90]
    let v4: u8;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: struct24;  // [bp-0x70], Other Possible Types: struct32
    let v8: u64;  // [bp-0x60]
    let v9: struct24;  // [bp-0x50]
    let v10: u64;  // [bp-0x40]
    let v11: struct24;  // [bp-0x38]

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v0 = 0;
    v7 = struct32 {
        field_0: a1
        field_8: a1 + a2 as u64
        field_16: &v0
        field_24: &v1
    };
    core::iter::traits::iterator::Iterator::collect(&v4, &v7);
    if !v3 {
        v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
        return Some(struct24 {
            field_0: v7.field_0
            field_16: v8
        });
    }
    v9 = core::iter::traits::iterator::Iterator::collect(0x4, 4 + v3 * 4);
    *((a3 + 16) as &u64) = v10;
    *(a3 as &u128) = v9.field_0;
    if v6 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = core::iter::traits::iterator::Iterator::collect(v5, v5 + v6 * 4);
    return Some(struct24 {
        field_0: v11.field_0
        field_16: v11.field_16
    });
}
