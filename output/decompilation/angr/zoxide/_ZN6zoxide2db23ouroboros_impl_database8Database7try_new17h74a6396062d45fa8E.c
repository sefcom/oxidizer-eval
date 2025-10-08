long long zoxide::db::ouroboros_impl_database::Database::try_new(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    int v3;  // [bp-0x40]
    int v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rax
    int v8;  // xmm0

    v0.try_new_or_recover(a1, a2);
    if (*((int *)&v0) == 1)
    {
        core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Heads>(&v2);
        *((unsigned long *)&a0[8]) = v1;
        v7 = 1;
    }
    else
    {
        v8 = *((int128_t *)&v1);
        *((int128_t *)&a0[56]) = *((int128_t *)&v5);
        a0[40] = v4;
        a0[24] = v3;
        a0[8] = v8;
        v7 = 0;
    }
    *((unsigned long long *)a0) = v7;
    return v7;
}
