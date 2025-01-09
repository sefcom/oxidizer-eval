fn uu_cp::Attributes::parse_iter(a0: &Result<struct68, struct12>, a1: &u64) -> u64 {
    let v0: i64;  // [sp-0xd0], Other Possible Types: struct12
    let v1: i32;  // [sp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i32;  // [sp-0xb8]
    let v4: struct12;  // [sp-0xa4]
    let v5: i128;  // [sp-0x98]
    let v6: i128;  // [sp-0x88]
    let v7: i200;  // [sp-0x70], Other Possible Types: Result<struct24, struct12>
    let v11: struct8;  // rax
    let v12: i64;  // rdx

    v1 = 0;
    v0 = 0;
    v6 = *((a1 + 16) as &i128);
    v5 = *(a1 as &i128);
    v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v11 {
        do {
            v7 = uu_cp::Attributes::parse_single_string(<&T as core::convert::AsRef<U>>::as_ref(v11), v12);
            v2 = *((&v7 as &char + 8) as &i64);
            v3 = *((&v7 as &char + 16) as &i32);
            match v7 {
                Ok(_) => {
                    return Ok(struct68 {
                        field_0: v13
                        field_8: v2
                        field_16: v3
                        field_20: v14
                        field_36: v15
                        field_48: <UNKNOWN>
                    });
                },
                Err(_) => {
                    v4 = uu_cp::Attributes::union(&v0, &v2);
                    v0 = v4;
                    v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
                },
            }
        } while (v11);
    }
    return Err(struct12 {
        field_0: v18
        field_8: v1
    });
}
