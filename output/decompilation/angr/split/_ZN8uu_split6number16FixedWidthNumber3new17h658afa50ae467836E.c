long long uu_split::number::FixedWidthNumber::new(void* a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rcx
    unsigned long v7;  // rdi
    unsigned long long v8;  // r15
    unsigned long long v10;  // rax
    char v11;  // dl
    unsigned long long v13;  // rax

    v4 = a1;
    v0.from_elem(a2, &g_50aba8);
    v7 = *((long long *)&v2) - 1;
    do
    {
        v8 = a3;
        if (v7 == -1)
        {
            if (v8)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
            }
            break;
        }
        if (!v5)
            core::panicking::panic_bounds_check(v7, v5, &g_50abc0); /* do not return */
        if (v8 >> 32)
        {
            v10 = (unsigned long long)((0 CONCAT v8) % v6) CONCAT (unsigned long long)((0 CONCAT v8) / v6);
            v11 = ((unsigned long long)((0 CONCAT v8) % v6) CONCAT (unsigned long long)((0 CONCAT v8) / v6)) >> 64;
        }
        else
        {
            v10 = ((unsigned int)((0 CONCAT (unsigned int)v8) % (v6 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v8) / (v6 & 4294967295))) & 4294967295;
            v11 = ((unsigned int)((0 CONCAT (unsigned int)v8) % (v6 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v8) / (v6 & 4294967295))) >> 32;
        }
        v1[v7] = v11;
        v7 -= 1;
        a3 = v10;
    } while (v8 >= (v4 & 4294967295));
    v13 = *((long long *)&v2);
    *((unsigned long long *)&a0[16]) = v13;
    *((int128_t *)a0) = *((int128_t *)&v0);
    *((char *)&a0[24]) = v4;
    return v13;
}
