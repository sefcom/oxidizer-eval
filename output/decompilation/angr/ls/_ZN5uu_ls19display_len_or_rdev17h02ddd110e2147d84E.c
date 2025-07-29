long long uu_ls::display_len_or_rdev(struct_0 *a0, struct_1 *a1, unsigned long a2, char a3)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    int v2;  // [bp-0x38], Other Possible Types: char
    unsigned long v3;  // [bp-0x28]
    int v4;  // [bp-0x20], Other Possible Types: char
    char v5;  // [bp-0x10]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    if ((0xb000 & a1->field_38 | 0x4000) == 0x6000)
    {
        v7 = a1->field_48;
        v0 = (unsigned int)(v7 >> 32) & 0xfffff000 | (unsigned int)((v7 & 4294967295) >> 8) & 4095;
        v1 = (unsigned int)(v7 >> 12) & 0xffffff00 | (unsigned int)v7;
        v2.spec_to_string(&v0);
        v4.spec_to_string(&v1);
        a0->field_10 = v3;
        *((void*)&a0->field_0) = v2;
        *((void*)&(&a0->field_10)[1]) = v4;
        v8 = *((long long *)&v5);
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
        return v8;
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
        uu_ls::display_size(&a0->padding_1[7], v10 + 1 - (v11 < 1), a3);
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    else
    {
        core::panicking::panic_const::panic_const_div_by_zero(&g_69f8d0); /* do not return */
    }
}
