fn zoxide::db::ouroboros_impl_database::Database::try_new_or_recover(a1: i64, a2: i64) -> Result<struct57, struct33> {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x80]
    let v1: u64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: u64;  // [bp-0x70]
    let v4: iNone;  // [bp-0x68]
    let v5: u64;  // [bp-0x58]
    let v6: u128;  // [bp-0x50]
    let v7: u64;  // [bp-0x48]
    let v8: struct157;  // [bp-0x40]
    let v9: u128;  // [bp-0x38]
    let v11: struct24;  // r14
    let v12: struct157;  // r15
    let v13: struct12;  // rax
    let v14: struct157;  // r14
    let v15: void*;  // rax
    let v16: u64;  // r14
    let v17: u64;  // rax

    v11 = alloc::boxed::Box<T>::new(a2) as u64;
    v0 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir::{{closure}}(*((v11 + 8) as &i64), *((v11 + 16) as &i64));
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v5 = v3;
        v4 = v0 as i128;
        v8 = *((a1 + 16) as &i64);
        v6 = *(a1 as &i128);
        v15 = 0;
        return struct72 {
            field_0: v17
            field_8: v4
            field_24: v5
            field_32: v6 as i64
            field_40: v7
            field_48: v8
            field_56: v16
            field_64: 0
        };
    }
    v9 = *(a1 as &i128);
    v12 = *((a1 + 16) as &i64);
    ouroboros::macro_help::unbox(a0 + 16, v11);
    *((a0 + 8) as &u64) = v2;
    *((a0 + 40) as &u128) = v9;
    v13 = 1;
    v14 = v12;
}
