fn zoxide::db::ouroboros_impl_database::Database::try_new(a1: &struct24, a2: i64) -> Result<struct64, struct8> {
    let a0: i64;  // rdi
    let v0: Result<struct57, struct33>;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: u128;  // [bp-0x40]
    let v3: u128;  // [bp-0x30]
    let v5: struct24;  // rax
    let v6: iNone;  // xmm0
    let v7: struct20;  // rax
    let v8: u64;  // rax

    v0 = zoxide::db::ouroboros_impl_database::Database::try_new_or_recover(a1, a2);
    match v0 {
        Ok(_) => {
            v6 = *((&v0 as &char + 8) as &i128);
            v7 = 0;
            return struct72 {
                field_0: v8
                field_8: v6
                field_24: v2
                field_40: v3
                field_56: *((&v0 as &char + 56) as &i128)
            };
        },
        Err(_) => {
            *((a0 + 8) as &u64) = v1;
            v5 = 1;
        },
    }
}
