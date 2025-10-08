long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    char *v3;  // [bp-0x10]
    unsigned long long v5;  // rax

    v0 = a2;
    v1 = a1;
    v2 = &vvar_13{reg 224};
    v3 = &v0;
    v5 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add::{{closure}}(&v1, a0);
    a0->field_38 = 1;
    return v5;
}
