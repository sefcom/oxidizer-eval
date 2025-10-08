long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_update(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    char *v4;  // [bp-0x10]
    unsigned long long v6;  // rax

    v0 = a3;
    v1 = a1;
    v2 = a2;
    v3 = &vvar_14{reg 224};
    v4 = &v0;
    v6 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_update::{{closure}}(&v1, a0);
    a0->field_38 = 1;
    return v6;
}
