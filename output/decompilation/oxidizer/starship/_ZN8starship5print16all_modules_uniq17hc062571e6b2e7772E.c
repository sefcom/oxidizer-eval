fn starship::print::all_modules_uniq(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0x88]
    let v1: struct16;  // [bp-0x88]
    let v2: i64;  // [bp-0x70]
    let v3: struct24;  // [bp-0x68]
    let v4: struct24;  // [bp-0x48]
    let v5: u192;  // [bp-0x48]
    let v7: Option<struct48>;  // r13

    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    v7 = 8;
    do {
        if !alloc::collections::btree::map::BTreeMap<K,V,A>::get(a1, a2, *((v7 - -18820104) as &i64), *((v7 + "username") as &i64)) {
            v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v7 - -18820104) as &i64), *((v7 + "username") as &i64));
            v3 = v5;
            v1 = alloc::vec::Vec<T,A>::push(&v3);
        }
        v7 += 16;
    } while (v7 != 1592);
    *((v2 + 16) as &i64) = 0;
    *(v2 as &i128) = *(&v0.field_0 as &i128);
    return 0;
}
