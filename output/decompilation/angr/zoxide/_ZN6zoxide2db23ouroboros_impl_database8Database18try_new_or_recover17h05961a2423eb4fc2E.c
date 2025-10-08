long long zoxide::db::ouroboros_impl_database::Database::try_new_or_recover(void* a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: char
    unsigned long long v4;  // [bp-0x58]
    int v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    unsigned long long v7[3];  // [bp-0x40]
    int v8;  // [bp-0x38]
    unsigned long long v10[3];  // r14
    unsigned long long v11[3];  // r15
    unsigned long long v12;  // rax

    v10 = a2.new();
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir::{{closure}}(&v0, v10[1], v10[2]);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((uint128_t *)&v8) = a1->field_0;
        v11 = a1->field_10;
        ouroboros::macro_help::unbox(a0 + 16, v10);
        *((unsigned long *)&a0[8]) = v1;
        a0[40] = v8;
        v12 = 1;
        v10 = v11;
    }
    else
    {
        v4 = v2;
        memcpy(&v3, &v0, 16);
        v7[0] = a1->field_10;
        *((uint128_t *)&v5) = a1->field_0;
        a0[8] = v3;
        *((unsigned long long *)&a0[24]) = v4;
        *((long long *)&a0[32]) = (long long)v5;
        *((unsigned long *)&a0[40]) = v6;
        *((unsigned long long *[3])&a0[48]) = v7;
        v12 = 0;
    }
    *((unsigned long long *[3])&a0[56]) = v10;
    *((char *)&a0[64]) = 0;
    *((unsigned long long *)a0) = v12;
    return v12;
}
