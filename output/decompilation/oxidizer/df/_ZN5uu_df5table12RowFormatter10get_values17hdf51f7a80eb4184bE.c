fn uu_df::table::RowFormatter::get_values(a0: i64, a1: i64) -> long long {
    let v1: i64;  // [bp-0x118]
    let v4: void*;  // [bp-0xe8]
    let v5: u64;  // [bp-0xe0]
    let v6: void*;  // [bp-0xd8]
    let v7: i64;  // [bp-0xd0]
    let v19: u64;  // [bp-0x70]

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v1 = *((a1 + 8) as &i64);
    v19 = *((*((a1 + 8) as &i64) + 16) as &i64);
    *((v7 + 16) as &i64) = 0;
    *(v7 as &i64) = 0;
    *((v7 + 8) as &i64) = 8;
    return 8;
}
