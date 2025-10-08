long long uu_split::number::DynamicWidthNumber::digits(unsigned long a0, unsigned long long a1, char a2)
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    struct_0 *v3;  // [bp-0x38]
    unsigned long long v5;  // r14
    unsigned long v6;  // rbx
    unsigned long v7;  // rax
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned int v11;  // edx
    unsigned long long v12;  // rbp

    v5 = a1;
    v6 = a2;
    v8 = 2;
    if (a1 >= v6 * (v6 - 1))
    {
        do
        {
            v5 -= v7;
            v8 += 1;
            v7 *= v6;
        } while (v5 >= v7);
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (v5)
    {
        if (a2)
        {
            do
            {
                v9 = v5;
                if (v9 >> 32)
                {
                    v11 = ((unsigned long long)((0 CONCAT v9) % v6) CONCAT (unsigned long long)((0 CONCAT v9) / v6)) >> 64;
                    v12 = (unsigned long long)((0 CONCAT v9) % v6) CONCAT (unsigned long long)((0 CONCAT v9) / v6);
                }
                else
                {
                    v11 = ((unsigned int)((0 CONCAT (unsigned int)v9) % (v6 & 255)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v9) / (v6 & 255))) >> 32;
                    v12 = ((unsigned int)((0 CONCAT (unsigned int)v9) % (v6 & 255)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v9) / (v6 & 255))) & 4294967295;
                }
                v0.push(v11, &g_50ac08);
                v5 = v12;
            } while (v9 >= v6);
        }
        else
        {
            core::panicking::panic_const::panic_const_rem_by_zero(&g_50abf0); /* do not return */
        }
    }
    v0.resize(v8);
    core::slice::<impl [T]>::reverse(1, v2);
    v3->field_10 = v2;
    v3->field_0 = *((int128_t *)&v0);
    return v2;
}
