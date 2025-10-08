fn uu_df::Options::get_intersected_types(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) {
    let v0: void*;  // [bp-0x70]
    let v1: struct16;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: void*;  // [bp-0x60]
    let v4: void*;  // [bp-0x58], Other Possible Types: struct16
    let v5: alloc::string::String;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: void*;  // [bp-0x48]
    let v8: void*;  // [bp-0x38]
    let v9: void*;  // [bp-0x38]
    let v11: struct120;  // rbp
    let v12: struct120;  // rbp
    let v13: u64;  // rbp

    v0 = 0;
    v2 = 8;
    v3 = 0;
    if a2 {
        do {
            v12 = v11;
            if <T as core::slice::cmp::SliceContains>::slice_contains(a1, a3, a4) {
                v5 = <alloc::string::String as core::clone::Clone>::clone(a1);
                v1 = alloc::vec::Vec<T,A>::push(&v5, "src/uu/df/src/df.rs");
            }
            a1 += 24;
            v13 = v12 - 24;
            v11 = v13;
        } while (v12 != 24);
        v7 = v3;
        *(&v4.field_0 as &i128) = *(&v1.field_0 as &i128);
        v8 = v9;
        if v3 {
            *(&v9[16] as &void*) = v3;
            *(v9 as &i128) = *(&v1.field_0 as &i128);
            return;
        }
    } else {
        v7 = v3;
        v4 = v0;
        v6 = 8;
    }
    *(a0 as &i64) = 0x8000000000000000;
    return;
}
