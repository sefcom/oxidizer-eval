long long starship::context::Context::new(unsigned long long a0, unsigned long long a1[17], unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x158]
    int v1;  // [bp-0x158]
    int v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x148]
    int v4;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    int v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x108]
    int v9;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v10;  // [bp-0xe8]
    int v11;  // [bp-0xe0], Other Possible Types: char
    char v12;  // [bp-0xd0]
    unsigned int v14;  // eax
    unsigned long v15;  // r12
    int v16;  // xmm0

    v14 = starship::context::Context::get_shell();
    if ((char)(((0 ^ a1[11]) & (0 ^ -(a1[11]))) >> 63))
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        v11.spec_to_string(a1[12], a1[13]);
        v3 = *((long long *)&v12);
        v2 = v11;
    }
    v11.or_else(&v2);
    v2.or_else(&v11);
    v15 = &a1[14];
    v11.or_else(&v2, v15);
    if ((long long)v11 == 0x8000000000000000)
    {
        v4 = 0;
        v5 = 1;
        v6 = 0;
        if (*((long long *)v15) == 0x8000000000000000)
            goto LABEL_b6d051;
LABEL_b6d007:
        v11.spec_to_string(a1[15], a1[16]);
        v3 = *((long long *)&v12);
        v1 = v11;
    }
    else
    {
        v6 = *((long long *)&v12);
        v4 = v11;
        if (*((long long *)v15) != 0x8000000000000000)
            goto LABEL_b6d007;
LABEL_b6d051:
        v0 = 0x8000000000000000;
    }
    v9.or_else(&v1);
    if (*((long long *)&v9) == 0x8000000000000000)
    {
        v11.spec_to_string(v5, v6);
        v8 = *((long long *)&v12);
        v16 = v11;
    }
    else
    {
        v8 = v10;
        v16 = v9;
    }
    v7 = v16;
    memcpy(&v11, a1, 176);
    a0.new_with_shell_and_path(&v11, v14, a2, &v4, &v7);
    return a0;
}
