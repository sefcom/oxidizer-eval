fn bat::assets::lazy_theme_set::LazyThemeSet::get(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct80, struct9>;  // [bp-0x58]
    let v2: &u64;  // rax
    let v3: u64;  // rax

    v2 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2);
    if !v2 {
        return 0;
    }
    v0 = once_cell::unsync::OnceCell<T>::get_or_try_init(v2 + 3, v2);
    v3 = 0;
    if &v0 == "\r" {
        v3 = *((&v0 as &char + 8) as &i64);
        if &v0 == "\r" {
            return *((&v0 as &char + 8) as &i64);
        }
    } else if &v0 == "\r" {
        return 0;
    }
    return v3;
}
