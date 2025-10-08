long long ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements(uint128_t *a0, unsigned long a1, unsigned long long a2[3], char a3, unsigned long long a4[2], char a5)
{
    unsigned int v0;  // [bp-0x8c]
    char v1[32];  // [bp-0x88]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    int v5;  // [bp-0x50]
    unsigned int v6;  // [bp-0x44]
    char v7;  // [bp-0x40]
    unsigned long long v9;  // rbx
    unsigned long long *v10;  // r12
    int v12;  // xmm0
    int v13;  // xmm0

    if (a2[2])
    {
        v9 = a2[1];
        v4 = a4[0];
        v3 = a4[1];
        v2 = v9 + 8;
        v10 = 0;
        v0 = a3;
        do
        {
            if (*((long long *)(v9 + (char *)v10)) == 9223372036854775809)
            {
                v7.from_str(v4.slice(v3, v2 + (char *)v10), a2, v0, a5);
                v5.merge(&v1, &v7);
                if ((char)v6 == 2)
                    core::option::expect_failed("Merge to succeed because all parts have the same flagsSuppressed node to have leading commentscrates/ruff_python_formatter/src/verbatim.rs", 54, &g_97f6e8); /* do not return */
                v12 = (int128_t)v5;
            }
            else
            {
                if (*((long long *)(v9 + (char *)v10)) != 0x8000000000000000 || !*((long long *)(64 + v9 + (char *)v10)))
                    continue;
                v7.merge_interpolated_string_elements(&v1, *((long long *)(64 + v9 + (char *)v10)), v0, a4, a5);
                v12 = *((int128_t *)&v7);
            }
            *((void*)v1) = v12;
            v10 += 10;
        } while (a2[2] * 80 != v10);
    }
    *((void*)a0) = v13;
    return a0;
}
