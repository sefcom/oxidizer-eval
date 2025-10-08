long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v0 = a1;
    v1 = a0[1];
    v2 = a0[1] + a0[2] * 40;
    v4 = v1.position(&v0);
    if (((char)v4 & 1))
        a0.swap_remove(v5);
    return (unsigned int)v4 & 0xffffff00 | (char)v4 & 1;
}
