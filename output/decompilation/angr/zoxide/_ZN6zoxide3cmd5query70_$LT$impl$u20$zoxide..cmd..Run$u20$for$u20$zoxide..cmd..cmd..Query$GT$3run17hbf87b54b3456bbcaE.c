long long zoxide::cmd::query::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Query>::run(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    int v2;  // [bp-0x78]
    char v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x48]
    int v7;  // [bp-0x40]
    int v8;  // [bp-0x30]
    char v9;  // [bp-0x20]
    char v10;  // [bp-0x10]
    unsigned long long v12;  // rax

    v5.open();
    if (*((int *)&v5) == 1)
        return v6;
    v4 = *((long long *)&v10);
    memcpy(&v3, &v9, 16);
    v2 = v8;
    v1 = v7;
    v0 = v6;
    v5 = a0.query(&v0);
    v12 = v5.and(v0.save());
    core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v0);
    return v12;
}
