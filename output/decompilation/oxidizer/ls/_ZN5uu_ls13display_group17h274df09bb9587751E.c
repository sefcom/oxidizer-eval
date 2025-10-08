fn uu_ls::display_group(a0: i32, a1: i8, a2: i64) -> u64 {
    let v0: u128;  // [bp-0x48]
    let v1: void*;  // [bp-0x48]
    let v2: u128;  // [bp-0x40]
    let v3: u64;  // [bp-0x38]
    let v4: struct20;  // [bp-0x28]

    v4 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(a2 + 184, a0);
    if v4.field_0 {
        v3 = *(&v4.field_16 as &i64);
        v0 = *(&v4.field_0 as &i128);
    } else {
        v2 = *(&v4.field_8 as &i128);
        v1 = 0;
    }
    return std::collections::hash::map::Entry<K,V>::or_insert_with(&v1 as u8, a1, a0);
}
