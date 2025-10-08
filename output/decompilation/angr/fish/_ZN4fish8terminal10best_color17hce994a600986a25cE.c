long long fish::terminal::best_color(uint128_t a0[2], char a1)
{
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x48]
    unsigned long long v3;  // rax
    unsigned int v4;  // r14d
    unsigned int v5;  // ebp
    char v6;  // r13b
    char v7;  // bl
    unsigned int v8;  // ebp
    unsigned int v9;  // r12d
    char v10;  // al
    unsigned int v11;  // ecx
    unsigned int v12;  // ecx
    unsigned int v13;  // eax
    unsigned int v14;  // ecx
    unsigned int v15;  // r15d
    unsigned int v16;  // r12d

    *((uint128_t *)&v1) = a0[1];
    *((uint128_t *)&v0) = a0[0];
    if ((char)v0.next() == 4)
    {
        v4 = 4;
        v5 = 0;
        v6 = 4;
        v7 = 4;
    }
    else
    {
        do
        {
            v11 = (unsigned int)v3 >> 8;
            v12 = v11;
            v8 = v12;
            v4 = (1 ? v10 : 4);
            v13 = v10;
            if (v13 == 2)
                v14 = v11;
            else
                v14 = v9;
            v9 = v14;
            if (v13 == 1)
                v15 = v11;
            else
                v15 = v15;
            v3 = v0.next();
        } while ((char)v3 != 4);
        v5 = v8 * 0x100;
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::color::Color>>(&v0);
    if ((char)((v7 == 4 || (a1 & v6 != 4)) == 1 ? v6 : v7) == 4)
        return v5 | v4;
    if (v7 == 4 || (a1 & v6 != 4))
        v16 = v9;
    else
        v16 = v15;
    return ((v7 == 4 || (a1 & v6 != 4)) == 1 ? v6 : v7) | v16 * 0x100;
}
