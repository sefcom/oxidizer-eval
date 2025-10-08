fn uu_df::table::Table::get_alignments(a0: &struct24, a1: i64, a2: i64) -> u64 {
    let v0: u32;  // [bp-0x168]
    let v1: struct24;  // [bp-0x48]
    let v2: struct16;  // [bp-0x48]
    let v4: struct146;  // r13
    let v5: i64;  // r13
    let v6: u64;  // r13

    v1 = struct24 {
        field_0: 0
        field_8: ""
    };
    v4 = 0;
    loop {
        v5 = v4;
        if a2 == v5 {
            break;
        }
        v6 = v5 + 1;
        v0 = 990;
        v2 = alloc::vec::Vec<T,A>::push((*((&v0 + ((*((a1 + v5) as &i8) & 31) >> 3)) as &i8) >> (*((a1 + v5) as &i8) & 31 & 7) & 1));
        v4 = v6;
    }
    return struct24 {
        field_0: *(&v1.field_0 as &i128)
        field_16: 0
    };
}
