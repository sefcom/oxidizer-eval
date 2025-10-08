long long fish::input::InputMappingSet::erase(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v0[3];  // [bp-0xc0]
    unsigned long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    void* v3;  // [bp-0xa0]
    char v4;  // [bp-0x98]
    unsigned long long v6[3];  // r14
    unsigned long long v7[3];  // 4096
    unsigned long long v8;  // rax
    unsigned long long v9[9];  // rdx
    unsigned long long v10[9];  // rbx
    unsigned long long v11[9];  // rbx

    v6 = a0 + 1;
    if (a5)
        v7 = a0;
    else
        v7 = v6;
    v1 = v7[1];
    v2 = v7[2] * 104 + v7[1];
    v3 = 0;
    v8 = v1.next();
    if (v9)
    {
        v0[0] = v7;
        do
        {
            v11 = v10;
            if ((char)v11[1].equal(v11[2], a1, a2) && (char)v11[7].equal(v11[8], a3, a4))
            {
                v4.remove(v0, v8);
                return (unsigned long long)core::ptr::drop_in_place<fish::input::InputMapping>(&v4) & 0xffffffffffffff00 | 1;
            }
            v8 = v1.next();
            v9 = v9;
        } while (v9);
    }
    return 0;
}
