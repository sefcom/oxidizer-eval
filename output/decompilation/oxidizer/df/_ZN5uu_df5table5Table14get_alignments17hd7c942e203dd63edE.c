fn uu_df::table::Table::get_alignments(a0: &struct24, a1: i64, a2: i64) -> long long {
    let v0: u32;  // [bp-0x168]
    let v1: struct24;  // [bp-0x48]
    let v2: struct16;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: void*;  // [bp-0x38]
    let v5: u64;  // [bp-0x30]
    let v6: u64;  // [bp-0x28]
    let v8: i64;  // rax

    v1 = 0;
    v3 = 1;
    v4 = 0;
    v5 = a1;
    v6 = a2 + a1;
    loop {
        v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
        if !v8 {
            break;
        }
        v0 = 990;
        v2 = alloc::vec::Vec<T,A>::push((*((&v0 + ((*(v8 as &i8) & 31) >> 3)) as &i8) >> (*(v8 as &i8) & 31 & 7) & 1));
    }
    return struct24 {
        field_0: *(&v2.field_0 as &i128)
        field_16: 0
    };
}
