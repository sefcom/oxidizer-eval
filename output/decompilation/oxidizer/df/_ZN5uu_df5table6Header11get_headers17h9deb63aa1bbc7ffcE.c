fn uu_df::table::Header::get_headers(a0: &struct24, a1: u64) -> int {
    let v0: void*;  // [sp-0x88]
    let v1: u64;  // [sp-0x80]
    let v2: void*;  // [sp-0x78]
    let v3: struct16;  // [sp-0x70]
    let v6: u128;  // xmm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = struct16 {
        field_0: a1[1]
        field_8: a1[2] + v3
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3) {
        v6 = *(&v0 as &i128);
        return struct24 {
            field_0: v6
            field_16: v2
        };
    }
    goto *((4283088 + *(vvar_27{reg 16} as &i8) * 4) as &i32) + 4283088;
}
