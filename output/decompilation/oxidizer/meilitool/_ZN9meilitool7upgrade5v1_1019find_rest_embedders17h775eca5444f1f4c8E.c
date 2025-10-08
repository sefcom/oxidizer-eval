fn meilitool::upgrade::v1_10::find_rest_embedders(a0: i64, a1: i192, a2: i704, a3: u64, a4: u64) -> int {
    let v0: struct16;  // [bp-0x1d8]
    let v1: void*;  // [bp-0x1d8]
    let v2: u64;  // [bp-0x1d0]
    let v3: void*;  // [bp-0x1c8]
    let v4: iNone;  // [bp-0x1b8]
    let v5: struct20;  // [bp-0x1a0]
    let v6: struct81;  // [bp-0x198]
    let v7: struct32;  // [bp-0x190]
    let v8: Option<struct160>;  // [bp-0x170], Other Possible Types: u64
    let v9: Option<struct160>;  // [bp-0x170]
    let v10: u32;  // [bp-0x168]
    let v11: u8;  // [bp-0x160]
    let v12: iNone;  // [bp-0xe8]
    let v13: struct32;  // [bp-0xd0]
    let v14: u64;  // [bp-0xd0]
    let v15: Result<struct12, struct8>;  // [bp-0xd0]
    let v16: u128;  // [bp-0xc8]
    let v18: u64;  // rax

    v5 = a1;
    v6 = a2;
    v15 = meilitool::try_opening_poly_database(a3, a4, "main");
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v8, &v15, &v5);
    if *(&v8 as &i32) == 1 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v10
        };
    }
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v13 = heed::databases::database::Database<KC,DC,C,CDUP>::get(v10, *(&v11 as &i32));
    v18 = *(&v13.field_8 as &i64);
    v4 = v13.field_16;
    if v13.field_0 as i32 == 1 {
        *(&v16 as void*) = v4;
        v14 = v18;
        return struct16 {
            field_0: 0x8000000000000000
            field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v14)
        };
    }
    if !((((0 ^ v13.field_0) & (0 ^ -(v14))) >> 63) as char) {
        *(&v10 as void*) = v4;
    }
    v8 = v18;
    v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
    v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    if let None = v8 {
        return struct24 {
            field_0: *(&v0.field_0 as &i128)
            field_16: 0
        };
    }
    do {
        memcpy(&v13, &v8, 160);
        if v13.field_0 as i32 < 2 {
            v0 = alloc::vec::Vec<T,A>::push(&v12, "crates/meilitool/src/upgrade/v1_10.rs");
        }
        v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    } while (v9 as i32 != 6);
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: 0
    };
}
