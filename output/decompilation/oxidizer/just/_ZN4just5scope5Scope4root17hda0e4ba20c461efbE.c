fn just::scope::Scope::root(a0: i64) -> u64 {
    let v0: i64;  // [bp-0x100]
    let v1: struct32;  // [bp-0xf8]
    let v2: struct103;  // [bp-0xd8]
    let v3: struct24;  // [bp-0x60]
    let v4: struct8;  // [bp-0x58]
    let v7: core::option::Option<u32>;  // rax
    let v8: i64;  // rdx
    let v9: core::fmt::rt::Argument;  // xmm0
    let v10: struct24;  // [bp-0x70]

    v1 = struct32 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: 0
    };
    v4 = hashbrown::map::HashMap<K,V,S,A>::iter(just::constants::constants());
    v7 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v4);
    if let Some(_) = v7 {
        do {
            v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v8 as &i64), *((v8 + 8) as &i64));
            v2 = struct103 {
                field_0: v10.field_0
                field_16: v3
                field_24: &g_471707
                field_40: *(v7 as &i64)
                field_56: 0
                field_72: 0
                field_88: 24
                field_96: 0
                field_100: 1
                field_101: 0
                field_102: 0
            };
            just::scope::Scope::bind(&v1, &v2);
            v7 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v4);
        } while (v7);
    }
    v9 = *(&v1.field_0 as &i128);
    *((v0 + 16) as &i128) = 0;
    *(v0 as &core::fmt::rt::Argument) = v9;
    return v0;
}
