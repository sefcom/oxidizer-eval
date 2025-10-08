fn just::justfile::Justfile::get_recipe(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0x30]
    let v2: &mut [u8];  // rax
    let v3: i64;  // rdi

    v2 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*((a0 + 696) as &i64), *((a0 + 704) as &i64), a1, a2);
    v3 = (!v2 ? 0 : *(v2 as &i64) + 16);
    v0 = struct24 {
        field_0: a0
        field_8: a1
        field_16: a2
    };
    v0 = struct24 {
        field_0: a0
        field_8: a1
        field_16: a2
    };
    return core::option::Option<T>::or_else((!v2 ? 0 : *(v2 as &i64) + 16), &v0);
}
