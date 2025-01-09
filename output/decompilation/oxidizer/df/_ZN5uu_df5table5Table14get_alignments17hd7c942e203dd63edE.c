fn uu_df::table::Table::get_alignments(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: u32;  // [sp-0x168]
    let v1: void*;  // [sp-0x48], Other Possible Types: struct16, u64
    let v2: u64;  // [sp-0x40]
    let v3: void*;  // [sp-0x38]
    let v4: struct16;  // [bp-0x30]
    let v6: &u8;  // rax
    let v7: u128;  // xmm0

    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = struct16 {
        field_0: a1
        field_8: a2 + a1
    };
    loop {
        v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
        if !v6 {
            break;
        }
        v0 = 990;
        v1 = alloc::vec::Vec<T,A>::push((*((&v0 + ((*(v6) & 31) >> 3)) as &i8) >> (*(v6) & 31 & 7) & 1 & 1));
    }
    v7 = *(&v1 as &i128);
    return struct24 {
        field_0: v7
        field_16: v3
    };
}
