fn bat::style::StyleComponentList::expand_into(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct32;  // [bp-0x38]
    let v2: struct32;  // rax
    let v3: struct24;  // r14
    let v4: struct24;  // r12
    let v5: u64;  // rax
    let v6: u64;  // rdx
    let v7: core::result::Result<usize, core::num::error::ParseIntError>;  // rax
    let v8: struct9;  // rax

    v0 = v2;
    if !*((a0 + 16) as &i64) {
        return v2;
    }
    v3 = *((a0 + 16) as &i64) * 2;
    v4 = 0;
    loop {
        v5 = bat::style::StyleComponent::components(*((*((a0 + 8) as &i64) + v4 + 1) as &i8)) as u64;
        if *((*((a0 + 8) as &i64) + v4) as &i8) < 2 {
            v7 = <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(a1, v5, v5 + v6);
            v4 += 2;
            if v3 == v4 {
                return v7;
            }
        } else {
            v8 = hashbrown::set::HashSet<T,S,A>::retain(a1, v5, a2);
            v4 += 2;
            if v3 == v4 {
                return v8;
            }
        }
    }
}
