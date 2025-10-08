long long zoxide::db::ouroboros_impl_database::Database::new(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    char v1;  // [bp-0x38]
    int v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned long v4;  // [bp-0x20]
    unsigned long long v6;  // rax

    v6 = a2.new();
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir::{{closure}}(&v0);
    v4 = a1->field_10;
    *((uint128_t *)&v2) = a1->field_0;
    *((void*)&a0->field_0) = v0;
    a0->field_20 = v3;
    a0->field_28 = v4;
    a0->field_10 = *((int128_t *)&v1);
    a0->field_30 = v6;
    a0->field_38 = 0;
    return v4;
}
