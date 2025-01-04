fn uu_cp::Attributes::parse_iter(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0xd0]
    let v1: i32;  // [sp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i32;  // [sp-0xb8]
    let v4: struct12;  // [sp-0xa4], Other Possible Types: i96
    let v5: i128;  // [sp-0x98]
    let v6: i128;  // [sp-0x88]
    let v7: Result<struct24, struct12>;  // [sp-0x70], Other Possible Types: i192
    let v8: i8;  // [bp-0x4c]
    let v9: i128;  // [bp-0x40]
    let v11: struct8;  // rax
    let v12: i64;  // rdx
    let v13: i64;  // rax
    let v14: i128;  // xmm0
    let v15: i128;  // xmm1
    let v16: i64;  // rdx
    let v17: i64;  // rcx
    let v18: i64;  // rax

    v1 = 0;
    v0 = 0;
    v6 = *((a1 + 16) as &i128);
    v5 = *(a1 as &i128);
    v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    v1 = v1;
    v0 = v0;
    if v11 {
        do {
            v7 = uu_cp::Attributes::parse_single_string(<&T as core::convert::AsRef<U>>::as_ref(v11), v12);
            v13 = v7;
            v2 = *((&v7 as &char + 8) as &i64);
            v3 = *((&v7 as &char + 16) as &i32);
            match v7 {
                Ok(_) => {
                    v14 = v7;
                    v15 = v8;
                    v16 = a0;
                    *((v16 + 48) as &i128) = v9;
                    *((v16 + 36) as &i128) = v15;
                    *((v16 + 20) as &i128) = v14;
                    *((v16 + 16) as &i32) = v3;
                    *((v16 + 8) as &i64) = v2;
                    *(v16 as &i64) = v13;
                    return v18;
                },
                Err(_) => {
                    v4 = uu_cp::Attributes::union(&v0, &v2);
                    v0 = v4;
                    v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
                    v1 = v1;
                    v0 = v0;
                },
            }
        } while (v11);
    }
    v17 = a0;
    *((v17 + 16) as &i32) = v1;
    v18 = v0;
    *((v17 + 8) as &i64) = v18;
    *(v17 as &i64) = 13;
    return v18;
}
