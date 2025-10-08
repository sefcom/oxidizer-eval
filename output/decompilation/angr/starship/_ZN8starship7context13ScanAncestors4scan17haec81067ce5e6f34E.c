long long starship::context::ScanAncestors::scan(unsigned long a0, unsigned long long a1[6])
{
    unsigned long long v0;  // [bp-0x68]
    void* v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned long v4;  // [bp-0x48]
    unsigned long v5;  // [sp-0x40]
    unsigned long v6;  // [bp-0x40]
    unsigned long long v8;  // rbp
    char v9;  // al
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rbx
    unsigned long long v17;  // rdx
    unsigned long v18;  // r15
    unsigned long v19;  // r15
    unsigned long v20;  // r15
    unsigned long v21;  // r15

    v8 = a1[1];
    v9 = a1[0].device_id(v8);
    v0 = v8 + 15.with_capacity_in(1, 1, &g_11f36f8);
    v1 = 0;
    a1[0].clone_into(v8, &v0);
    v5 = a1[2];
    v10 = a1[3] * 16 + a1[2];
    v4 = a1[4];
    v11 = a1[5] * 16 + a1[4];
    if (!(v9 & 1))
    {
        while (true)
        {
            v6 = v5;
            while (true)
            {
                v18 = v6;
                if (v18 == v10)
                    break;
                v0.push(v18);
                if (!(char)v17.is_file(v1))
                {
                    v19 = v18 + (v18 != v10) * 16;
                    v0.pop();
                    v6 = v19;
                }
                else
                {
                    v0.pop();
                    goto LABEL_b70851;
                }
            }
            v3 = v4;
            while (true)
            {
                v20 = v3;
                if (v20 == v11)
                    break;
                v0.push(v20);
                if ((char)v17.is_dir(v1))
                {
                    v0.pop();
LABEL_b70851:
                    *((void* *)&v2[16]) = v1;
                    *((int128_t *)v2) = *((int128_t *)&v0);
                    return a0;
                }
                v21 = v20 + (v20 != v11) * 16;
                v0.pop();
                v3 = v21;
            }
        }
    }
}
