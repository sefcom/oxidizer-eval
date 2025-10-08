fn uu_cp::Attributes::parse_iter(a0: i64, a1: i64) -> int {
    let v0: Result<struct1, struct8>;  // [bp-0xc0]
    let v1: u32;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: u32;  // [bp-0xa8]
    let v4: i64;  // [bp-0xa0]
    let v5: struct12;  // [bp-0x94]
    let v6: u32;  // [bp-0x8c]
    let v7: u128;  // [bp-0x88]
    let v8: u128;  // [bp-0x78]
    let v9: Result<struct24, struct12>;  // [bp-0x68]
    let v10: i64;  // [bp-0x60]
    let v11: u32;  // [bp-0x58]
    let v12: u128;  // [bp-0x54]
    let v13: u128;  // [bp-0x44]
    let v14: i8;  // [bp-0x34]
    let v16: void*;  // rax
    let v18: u64;  // rdx

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
                *((v4 + 52) as &i32) = *(&v14 as &i32);
                *((v4 + 36) as &u128) = v13;
                *((v4 + 20) as &u128) = v12;
                *((v4 + 16) as &u32) = v3;
                *((v4 + 8) as &u64) = v2;
                *(v4 as &i64) = v9 as i64;
                return;
            }
            v5 = uu_cp::Attributes::union(&v0, &v2);
            v1 = v6;
            v0 = *(&v5.field_0 as &i64);
            v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
        } while (v16);
    }
    *((v4 + 16) as &u32) = v1;
    *((v4 + 8) as &Result<struct1, struct8>) = v0;
    *(v4 as &i64) = 9223372036854775820;
    return;
}
