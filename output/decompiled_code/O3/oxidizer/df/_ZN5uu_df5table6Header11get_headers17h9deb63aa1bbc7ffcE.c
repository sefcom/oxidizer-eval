fn uu_df::table::Header::get_headers() -> u32 {
    let v0: void*;  // [sp-0x88]
    let v1: u64;  // [sp-0x80]
    let v2: void*;  // [sp-0x78]
    let v3: struct16;  // [sp-0x70]
    let v7: &struct_0;  // rdi

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = struct16 {
        field_0: v5[1]
        field_8: v5[2] + v3
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3) {
        v7->field_10 = v2;
        v7->field_0 = *(&v0 as &i128);
        return;
    }
    goto *((4283088 + *(vvar_25{reg 16} as &i8) * 4) as &i32) + 4283088;
}
