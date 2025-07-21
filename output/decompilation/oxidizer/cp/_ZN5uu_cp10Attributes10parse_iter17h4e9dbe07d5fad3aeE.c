fn uu_cp::Attributes::parse_iter(a0: i64, a1: i64) -> int {
    let v0: alloc::string::String;  // [bp-0xd0], Other Possible Types: struct12
    let v1: u32;  // [bp-0xc8]
    let v2: u64;  // [bp-0xc0]
    let v3: u32;  // [bp-0xb8]
    let v4: i64;  // [bp-0xb0]
    let v5: u64;  // [bp-0xa4]
    let v6: u32;  // [bp-0x9c]
    let v7: u128;  // [bp-0x98]
    let v8: u128;  // [bp-0x88]
    let v9: Result<struct24, struct12>;  // [bp-0x70]
    let v10: u64;  // [bp-0x68]
    let v11: u32;  // [bp-0x60]
    let v12: core::fmt::Arguments;  // [bp-0x5c]
    let v13: i8;  // [bp-0x4c]
    let v14: u128;  // [bp-0x40]
    let v16: &u64;  // rax
    let v18: u32;  // rdx
    let v19: u128;  // xmm1

    v1 = 0;
    v0 = 0;
    v8 = *((a1 + 16) as &i128);
    v7 = *(a1 as &i128);
    v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v16 {
        do {
            v9 = uu_cp::Attributes::parse_single_string(<&T as core::convert::AsRef<U>>::as_ref(v16), v18);
            v2 = v10;
            v3 = v11;
            if let Ok(_) = v9 {
                v19 = *(&v13 as &i128);
                *((v4 + 48) as &u128) = v14;
                *((v4 + 36) as &u128) = v19;
                *((v4 + 20) as &core::fmt::Arguments) = v12;
                *((v4 + 16) as &u32) = v3;
                *((v4 + 8) as &u64) = v2;
                *(v4 as &i64) = v9 as i64;
                return;
            }
            v0 = uu_cp::Attributes::union(&v2, v11);
            v1 = v6;
            v0 = v5;
            v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
        } while (v16);
    }
    *((v4 + 16) as &u32) = v1;
    *((v4 + 8) as &alloc::string::String) = v0;
    *(v4 as &i64) = 13;
    return;
}
