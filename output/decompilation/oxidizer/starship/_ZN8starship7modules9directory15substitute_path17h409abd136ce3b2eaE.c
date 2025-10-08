fn starship::modules::directory::substitute_path(a1: i64, a2: i128, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x68]
    let v1: struct32;  // [bp-0x60]
    let v2: struct24;  // [bp-0x58]
    let v3: core::fmt::rt::Argument;  // [bp-0x48]
    let v4: struct24;  // [bp-0x40]
    let v5: u128;  // [bp-0x38]
    let v6: i8;  // [bp-0x28]
    let v8: struct24;  // rax
    let v9: i64;  // rdx
    let v10: u128;  // xmm0

    v2 = *((a1 + 16) as &i64);
    v3 = a2;
    v4 = a3 * 48 + a2;
    v8 = <indexmap::map::iter::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v8 {
        do {
            alloc::str::<impl str>::replace(&v5, v1, v2, v8, *(v9 as &i64), *((v9 + 8) as &i64));
            v2 = *(&v6 as &i64);
            v0 = v5;
            v8 = <indexmap::map::iter::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v3);
        } while (v8);
    }
    return struct24 {
        field_0: v10
        field_16: v2
    };
}
