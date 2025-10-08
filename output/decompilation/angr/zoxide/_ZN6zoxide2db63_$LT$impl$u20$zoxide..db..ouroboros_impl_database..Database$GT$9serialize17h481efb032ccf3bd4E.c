long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]

    v0 = a1;
    v1 = a2;
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize::{{closure}}(&v2, &v0);
    return a0.context(&v2);
}
