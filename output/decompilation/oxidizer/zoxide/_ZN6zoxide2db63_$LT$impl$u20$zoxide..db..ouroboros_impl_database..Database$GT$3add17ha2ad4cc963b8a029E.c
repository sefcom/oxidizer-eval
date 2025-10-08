fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add(a0: i64, a1: u64, a2: i128) -> long long {
    let v0: struct16;  // [bp-0x28]
    let v1: struct24;  // [bp-0x20]
    let v3: u64;  // rax

    v0 = a2;
    v1 = struct24 {
        field_0: a1
        field_8: &vvar_13{reg 224}
        field_16: &v0
    };
    v3 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add::{{closure}}(&v1, a0);
    *((a0 + 56) as &i8) = 1;
    return v3;
}
