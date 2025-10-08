long long ruff_python_formatter::comments::placement::max_empty_lines(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x64]
    unsigned int v1;  // [bp-0x5c]
    char v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    unsigned int v12;  // ebx
    unsigned int v13;  // ebp
    unsigned int v14;  // eax
    unsigned int v15;  // eax

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    if (a1 >> 32)
    {
        1.unwrap(&g_97cc48);
        [D] Unsupported jumpkind Ijk_NoDecode at address 7358936()
    }
    v12 = 0;
    0.unwrap(&g_97cc48);
    v2.new(a0, a1, 0, a1 & 4294967295);
    while (true)
    {
        v13 = 0;
        while (true)
        {
            while (true)
            {
                v0.next(&v2);
                v14 = (char)v1;
                if (v14 <= 3)
                    break;
                switch (v14)
                {
                case 4:
                    v13 += 1;
                    break;
                case 90:
                    return ((int)v13.max(v12) < 1 ? 0 : (int)v13.max(v12) - 1);
                default:
                    v15 = v13.max((unsigned int)v13.max(v12));
                    return (v15 < 1 ? 0 : v15 - 1);
                }
            }
            if (!v14)
                break;
            if (v14 != 1)
            {
                v15 = v13.max((unsigned int)v13.max(v12));
                return (v15 < 1 ? 0 : v15 - 1);
            }
        }
        v12 = v13.max(v12);
    }
}
