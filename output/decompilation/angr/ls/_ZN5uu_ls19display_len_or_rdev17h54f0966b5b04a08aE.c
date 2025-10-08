long long uu_ls::display_len_or_rdev(void* a0, struct_0 *a1, unsigned long long a2, char a3)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    unsigned long v1;  // [bp-0x48]
    int v2;  // [bp-0x40], Other Possible Types: char
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x22]
    unsigned long long v6;  // r14
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    if ((0xb000 & a1->field_38 | 0x4000) == 0x6000)
    {
        v6 = a1->field_48;
        v0.to_vec(core::fmt::num::imp::<impl u32>::_fmt((unsigned int)(v6 >> 32) & 0xfffff000 | (unsigned int)((v6 & 4294967295) >> 8) & 4095, &v2, 10), a2);
        v2.to_vec(core::fmt::num::imp::<impl u32>::_fmt((unsigned int)(v6 >> 12) & 0xffffff00 | (unsigned int)v6, &v4, 10), a2);
        *((long long *)&a0[40]) = *((long long *)&v3);
        a0[24] = v2;
        *((unsigned long *)&a0[16]) = v1;
        *(a0) = v0;
        return v1;
    }
    else if (a2)
    {
        v9 = a1->field_50;
        if ((v9 | a2) >> 32)
        {
            v10 = (unsigned long long)((0 CONCAT v9) % a2) CONCAT (unsigned long long)((0 CONCAT v9) / a2);
            v11 = ((unsigned long long)((0 CONCAT v9) % a2) CONCAT (unsigned long long)((0 CONCAT v9) / a2)) >> 64;
        }
        else
        {
            v10 = ((unsigned int)((0 CONCAT (unsigned int)v9) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v9) / (a2 & 4294967295))) & 4294967295;
            v11 = ((unsigned int)((0 CONCAT (unsigned int)v9) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v9) / (a2 & 4294967295))) >> 32;
        }
        uu_ls::display_size(a0 + 8, v10 + 1 - (v11 < 1), a3);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    else
    {
        core::panicking::panic_const::panic_const_div_by_zero(&g_686d28); /* do not return */
    }
}
