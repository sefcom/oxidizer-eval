fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_update(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x30]
    let v1: struct32;  // [bp-0x28]
    let v3: u64;  // rax

    v0 = a3;
    v1 = struct32 {
        field_0: a1
        field_8: a2
        field_16: &vvar_14{reg 224}
        field_24: &v0
    };
    v3 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_update::{{closure}}(&v1, a0);
    *((a0 + 56) as &i8) = 1;
    return v3;
}
