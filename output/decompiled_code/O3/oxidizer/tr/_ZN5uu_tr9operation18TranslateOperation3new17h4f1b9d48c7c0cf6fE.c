fn uu_tr::operation::TranslateOperation::new(a0: void*, a1: void*, a2: void*) -> u64 {
    let v0: struct90;  // [bp-0x90]
    let v1: i64;  // [sp-0x48]
    let v6: i64;  // fs
    let v7: i64;  // rax
    let v8: i64;  // r15
    let v9: i64;  // r12
    let v10: i64;  // rax

    if *((a2 + 16) as &i64) {
        v0 = struct90 {
            field_0: v3
            field_8: v3
            field_16: *(a1 as &i64)
            field_24: *((a1 + 16) as &i64) + v3
            field_32: 0
            field_48: 0
            field_56: v4
            field_64: v4
            field_72: *(a2 as &i64)
            field_80: v5 + v4
            field_88: 1
            field_89: *((v4 + v5 - 1) as &i8)
        };
        <std::collections::hash::map::HashMap<K,V,S> as core::iter::traits::collect::FromIterator<(K,V)>>::from_iter(a0, &v0, v1);
        return a0;
    }
    if *((a1 + 16) as &i64) {
        *((a0 + 8) as &i64) = 9223372036854775813;
        *(a0 as &i64) = 0;
    } else {
        if *((*(v6 as &i64) - 48) as &i64) {
            v7 = *(v6 as &i64) - 48;
            v8 = *((v7 + 8) as &i64);
            v9 = *((v7 + 16) as &i64);
        } else {
            v8 = std::sys::pal::unix::rand::hashmap_random_keys();
            v10 = *(v6 as &i64) - 48;
            *(v10 as &i64) = 1;
            *((v10 + 8) as &i64) = v8;
            *((v10 + 16) as &i64) = v9;
        }
        *((*(v6 as &i64) + -40) as &i64) = v8 + 1;
        *((a0 + 16) as &i128) = g_4ee4e0;
        *(a0 as &i128) = g_4ee4d0;
        *((a0 + 32) as &i64) = v8;
        *((a0 + 40) as &i64) = v9;
    }
    return a0;
}
