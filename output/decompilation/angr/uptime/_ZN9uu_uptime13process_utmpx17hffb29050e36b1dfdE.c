long long uu_uptime::process_utmpx(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x378]
    void* v1;  // [bp-0x370]
    unsigned long long v2;  // [bp-0x368]
    char v3;  // [bp-0x360]
    unsigned long long v4;  // [bp-0x358]
    unsigned long long v5[3];  // [bp-0x350]
    int v6;  // [bp-0x344]
    unsigned int v7;  // [bp-0x334]
    int v8;  // [bp-0x330]
    char v9;  // [bp-0x1b0]
    char v12;  // dl
    unsigned int v13;  // eax

    *((int *)&v2) = (!a1 ? uucore::features::utmpx::Utmpx::iter_all_records() : a1.iter_all_records_from());
    v3 = v12 & 1;
    v0 = 0;
    v1 = 0;
    while (true)
    {
        v7.next();
        if (v7 != 1)
        {
            core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v2);
            v5[0] = v0;
            v5[1] = v4;
            v5[2] = v1;
            return v5;
        }
        memcpy(&v9, &v8, 384);
        v13 = *((short *)&v9);
        switch (v13)
        {
        case 2:
            v6.login_time(&v9);
            if (v6.unix_timestamp() > 0)
            {
                v4 = v6.unix_timestamp();
                v0 = 1;
                break;
            }
            break;
        case 7:
            v1 += 1;
            break;
        default:
            continue;
        }
    }
}
