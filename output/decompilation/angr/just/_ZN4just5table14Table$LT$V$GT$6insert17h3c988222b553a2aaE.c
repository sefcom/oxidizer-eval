long long just::table::Table<V>::insert(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xb0]
    unsigned long long v3;  // rdx

    v0.insert(a0, a1.key(), v3, a1);
    return core::ptr::drop_in_place<core::option::Option<just::set::Set>>(&v0);
}
