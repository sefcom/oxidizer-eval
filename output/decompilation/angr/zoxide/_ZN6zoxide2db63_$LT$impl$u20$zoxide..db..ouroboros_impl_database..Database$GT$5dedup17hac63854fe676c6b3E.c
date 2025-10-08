long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup(struct_0 *a0)
{
    char v0;  // [bp-0x9]

    a0.sort_by_path();
    v0 = 0;
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup::{{closure}}(&v0, a0);
    a0->field_38 = a0->field_38 | v0;
    return v0;
}
