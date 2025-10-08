fn ruff_python_formatter::comments::map::MultiMap<K,V>::push_dangling(a0: i64, a1: u64, a2: i64, a3: void*) -> long long {
    let v0: u64;  // [bp-0x60]
    let v1: u64;  // [bp-0x58]
    let v2: struct16;  // [bp-0x50]
    let v3: u8;  // [bp-0x40]
    let v5: i64;  // rax
    let v6: u64;  // r15
    let v7: u64;  // rax
    let v8: u64;  // rdi
    let v9: u64;  // rdi
    let v10: u64;  // rdx

    v0 = a1;
    v5 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a0 + 48, &v0);
    if !v5 {
        alloc::vec::Vec<T,A>::push(a0, a3, "crates/ruff_python_formatter/src/comments/map.rs");
        v2 = ruff_python_formatter::comments::map::InOrderEntry::dangling(*((a0 + 16) as &i64), *((a0 + 16) as &i64));
        return hashbrown::map::HashMap<K,V,S,A>::insert(&v3, a0 + 48, v0, v1, &v2);
    }
    if !*((v5 + 16) as &i32) {
        return alloc::vec::Vec<T,A>::push(v9, a3, v10);
    }
    v6 = v5 + 16;
    if !*((v5 + 28) as &i32) {
        v7 = ruff_python_formatter::comments::map::InOrderEntry::range(v6);
        if *((a0 + 16) as &i64) == v7 {
            alloc::vec::Vec<T,A>::push(a0, a3, "crates/ruff_python_formatter/src/comments/map.rs");
            return ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range(v6);
        }
    }
    v8 = *(ruff_python_formatter::comments::map::MultiMap<K,V>::entry_to_out_of_order(v6, *((a0 + 8) as &i64), *((a0 + 16) as &i64), a0 + 24) as &i64) + 1;
    return alloc::vec::Vec<T,A>::push(v9, a3, v10);
}
