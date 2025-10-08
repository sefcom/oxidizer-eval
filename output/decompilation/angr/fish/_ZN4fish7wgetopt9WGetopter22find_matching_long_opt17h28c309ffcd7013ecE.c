long long fish::wgetopt::WGetopter::find_matching_long_opt(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0xda]
    char v1;  // [bp-0xd9]
    uint128_t v2;  // [bp-0xd8]
    void* v3;  // [bp-0xc8]
    unsigned long v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xb8]
    void* v6;  // [bp-0xb0]
    int v7;  // [bp-0x98]
    char *v8;  // [bp-0x80]
    char *v9;  // [bp-0x78]
    char *v10;  // [bp-0x70]
    int v11;  // [bp-0x68]
    unsigned long v12;  // [bp-0x58]
    void* v14;  // r12
    void* v15;  // rdx
    void* v16;  // r13
    void* v17;  // r13
    int v18;  // ymm0
    uint256_t v19;  // ymm0
    void* v20;  // rdx
    unsigned long v22;  // rdx

    v3 = 0;
    v0 = 0;
    v1 = 0;
    v4 = a1->field_38;
    v5 = a1->field_38 + a1->field_40 * 24;
    v6 = 0;
    if (a2 <= a1->field_50)
    {
        v14 = v4.next();
        if ((a1->field_85 & 1))
        {
            v2 = 0x110000;
            if (!v15)
            {
                v11 = v7;
                v12 = v2;
                v4 = 3;
                v8 = &v0;
                v9 = &v3;
                v10 = &v1;
                return a0.map_or(&v11, &v4, &v8);
            }
            while (true)
            {
                v17 = v16;
                if (*((long long *)v17).starts_with((long long)v17[8], a1->field_48, a2) && a2 == (long long)v17[8])
                    break;
                v14 = v4.next();
                v15 = v15;
                if (!v15)
                {
                    v11 = v7;
                    v12 = v2;
                    v4 = 3;
                    v8 = &v0;
                    v9 = &v3;
                    v10 = &v1;
                    return a0.map_or(&v11, &v4, &v8);
                }
            }
LABEL_1425634:
            v2 = (long long)v17[16];
            *((int128_t *)&v7) = *((int128_t *)v17);
            v3 = v14;
            v0 = 1;
        }
        else
        {
            if (!v15)
                goto LABEL_14256fc;
            v19 = v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x110000;
            v2 = 0x110000;
            do
            {
                v17 = v16;
                if (!*((long long *)v17).starts_with((long long)v17[8], a1->field_48, a2))
                    continue;
                if (a2 == (long long)v17[8])
                    goto LABEL_1425634;
                v19 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2;
                if ((unsigned int)v19 == 0x110000)
                {
                    v2 = (long long)v17[16];
                    v19 = v2 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)v17);
                    *((int128_t *)&v7) = *((int128_t *)v17);
                    v3 = v14;
                }
                else
                {
                    v1 = 1;
                }
                v14 = v4.next();
                v16 = v20;
            } while (v16);
        }
    }
    else
    {
        v4.next();
        if (v22)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4ce8); /* do not return */
LABEL_14256fc:
        v2 = 0x110000;
    }
    v11 = v7;
    v12 = v2;
    v4 = 3;
    v8 = &v0;
    v9 = &v3;
    v10 = &v1;
    return a0.map_or(&v11, &v4, &v8);
}
