fn uu_cp::Attributes::parse_iter(a0: &struct20, a1: &u64) -> u64 {
    let v0: struct12;  // [sp-0xd0], Other Possible Types: unsigned long
    let v1: i32;  // [sp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i32;  // [sp-0xb8]
    let v4: struct12;  // [sp-0xa4]
    let v5: iNone;  // [sp-0x98]
    let v6: iNone;  // [sp-0x88]
    let v7: Result<struct24, struct12>;  // [sp-0x70]
    let v9: struct8;  // rax
    let v10: i64;  // rdx

    v1 = 0;
    v0 = 0;
    v6 = *((a1 + 16) as &i128);
    v5 = *(a1 as &i128);
    v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v9 {
        do {
            v7 = uu_cp::Attributes::parse_single_string(<&T as core::convert::AsRef<U>>::as_ref(v9), v10);
            v2 = *((&v7 as &char + 8) as &i64);
            v3 = *((&v7 as &char + 16) as &i32);
            v4 = uu_cp::Attributes::union(&v0, &v2);
            v0 = v4;
            v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        } while (v9);
    }
    return struct20 {
        field_0: 13
        field_8: v11
        field_16: v1
    };
}
