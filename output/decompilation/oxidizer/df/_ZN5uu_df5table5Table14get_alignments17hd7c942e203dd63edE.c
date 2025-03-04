fn uu_df::table::Table::get_alignments(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: u32;  // [sp-0x168]
    let v1: u64;  // [sp-0x48], Other Possible Types: struct16
    let v2: void*;  // [sp-0x38]
    let v3: struct16;  // [bp-0x30]
    let v5: &u8;  // rax
    let v6: u128;  // xmm0

    v1 = 0;
    v1 = 1;
    v2 = 0;
    v3 = struct16 {
        field_0: a1
        field_8: a2 + a1
    };
    loop {
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
        if !v5 {
            break;
        }
        v0 = 990;
        v1 = alloc::vec::Vec<T,A>::push((*((&v0 + ((*(v5) & 31) >> 3)) as &i8) >> (*(v5) & 31 & 7) & 1 & 1));
    }
    v6 = *(&v1 as &i128);
    return struct24 {
        field_0: v6
        field_16: v2
    };
}
