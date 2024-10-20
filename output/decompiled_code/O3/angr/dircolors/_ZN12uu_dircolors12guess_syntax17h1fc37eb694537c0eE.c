long long uu_dircolors::guess_syntax::h1fc37eb694537c0e(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x18]
    unsigned long long v5;  // rsi
    unsigned long v6;  // rbx
    unsigned int v7;  // ebx
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rcx
    unsigned short *v12;  // rax
    unsigned long long v14;  // cc_op
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // cc_dep2
    unsigned long v17;  // cc_ndep

    std::env::_var::h2f29fdf15fefb03a(&v0, "SHELLcsh", 5);
    if (*((long long *)&v0))
    {
        v5 = *((long long *)&v1);
        v7 = v6 | -0x100 | 3;
        if (v5 == 0x8000000000000000)
        {
            return v7;
        }
        else if (!v5)
        {
            return v7;
        }
        goto LABEL_48fc61;
    }
    else
    {
        if (!*((long long *)&v3))
        {
            v7 = v6 | -0x100 | 3;
            goto LABEL_48fcbf;
        }
        v9 = *((long long *)&v2);
        v12 = std::path::Path::file_name::h79ecbb7850a9c7f3(v9, *((long long *)&v3), v10, v11);
        if (v12)
        {
            if (v10 == 4)
            {
                v14 = 7;
                v15 = *((int *)&v12);
                v16 = 1752392564;
                goto LABEL_48fcd1;
            }
            if (v10 == 3)
            {
                v14 = 18;
                v15 = (unsigned short)((char)v12[1] ^ 104) | (unsigned short)(*(v12) ^ 29539);
                v16 = 0;
LABEL_48fcd1:
                v7 = v9 | -0x100 | amd64g_calculate_condition(4, v14, v15, v16, v17) & 255;
                if (!*((long long *)&v1))
                    return v7;
LABEL_48fc61:
                __rust_dealloc(*((long long *)&v2));
                return v7;
            }
        }
        v7 = 0;
LABEL_48fcbf:
        if (*((long long *)&v1))
        {
            __rust_dealloc(*((long long *)&v2));
            return v7;
        }
        return v7;
    }
}
