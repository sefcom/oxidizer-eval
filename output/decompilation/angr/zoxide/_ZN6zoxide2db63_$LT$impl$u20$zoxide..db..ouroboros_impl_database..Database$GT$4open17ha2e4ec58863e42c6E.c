long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open(unsigned long long a0[2])
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]

    zoxide::config::data_dir(&v0);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v3 = v0;
        v4 = v1;
        v5 = v2;
        return (unsigned long long)a0.open_dir(&v3);
    }
    a0[1] = v1;
    a0[0] = 1;
    return v1;
}
