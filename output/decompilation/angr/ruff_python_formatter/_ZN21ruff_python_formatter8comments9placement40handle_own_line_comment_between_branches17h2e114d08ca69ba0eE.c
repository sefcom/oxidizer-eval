long long ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0x64]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned int v8;  // r13d
    unsigned int v9;  // r15d
    void* v10;  // r12
    char v11;  // cl
    char v12;  // cl
    unsigned long v13;  // rax
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2

    v3 = a2;
    v7 = (long long)a1[32];
    if (v7 != 94)
    {
        v4 = v7;
        v5 = (long long)a1[40];
        v1 = *((long long *)a1);
        v2 = (long long)a1[8];
        v7 = v4.is_first_statement_in_alternate_body(*((long long *)a1), (long long)a1[8]);
        if ((char)v7)
        {
            v8 = (int)a1[68];
            v0 = (int)a1[64];
            v9 = ruff_python_ast::helpers::comment_indentation_after(a2, a3, (int)a1[64], (int)a1[68], a4, a5);
            if (!ruff_python_trivia::whitespace::indentation_at_offset((unsigned int)v3.range(), a4, a5))
                v10 = 0;
            v10 >> 32.unwrap(&g_97cc48);
            if (!((char)_ccall(4, 13, (unsigned long long)(char)((unsigned int)v10 < v9), (unsigned long long)(char)(v9 < (unsigned int)v10), (unsigned long long)(char)(v9 < (unsigned int)v10))))
            {
                v7 = ((unsigned int)v10 < v9) - 0 - (v9 < (unsigned int)v10);
                if ((unsigned int)v7 != 1)
                {
                    if (v4 != 60 && (unsigned int)v4 != 87)
                    {
                        v13 = (char)a1[72];
                        *((unsigned long *)&a0[8]) = v1;
                        *((unsigned long *)&a0[16]) = v2;
                        *((unsigned int *)&a0[24]) = v0;
                        *((unsigned int *)&a0[28]) = v8;
                        *((char *)&a0[32]) = 0;
                        *((char *)&a0[33]) = v13;
                        *((unsigned long long *)a0) = 96;
                        return v13;
                    }
                    v11 = (char)a1[72];
                    *((unsigned long long *)&a0[8]) = v4;
                    *((unsigned long long *)&a0[16]) = v5;
                    *((unsigned int *)&a0[24]) = v0;
                    *((unsigned int *)&a0[28]) = v8;
                    *((char *)&a0[32]) = 0;
                    *((char *)&a0[33]) = v11;
                    *((unsigned long long *)a0) = 94;
                    return v0;
                }
            }
            else if (v3 == 60)
            {
                v13 = (char)a1[72];
                *((unsigned long *)&a0[8]) = v1;
                *((unsigned long *)&a0[16]) = v2;
                *((unsigned int *)&a0[24]) = v0;
                *((unsigned int *)&a0[28]) = v8;
                *((char *)&a0[32]) = 0;
                *((char *)&a0[33]) = v13;
                *((unsigned long long *)a0) = 96;
                return v13;
            }
            else if ((unsigned int)v3 != 87)
            {
                v12 = (char)a1[72];
                *((unsigned long long *)&a0[8]) = v3;
                *((unsigned long long *)&a0[16]) = a3;
                *((unsigned int *)&a0[24]) = v0;
                *((unsigned int *)&a0[28]) = v8;
                *((char *)&a0[32]) = 0;
                *((char *)&a0[33]) = v12;
                *((unsigned long long *)a0) = 95;
                return v0;
            }
            else
            {
                v13 = (char)a1[72];
                *((unsigned long *)&a0[8]) = v1;
                *((unsigned long *)&a0[16]) = v2;
                *((unsigned int *)&a0[24]) = v0;
                *((unsigned int *)&a0[28]) = v8;
                *((char *)&a0[32]) = 0;
                *((char *)&a0[33]) = v13;
                *((unsigned long long *)a0) = 96;
                return v13;
            }
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v14 = *((int128_t *)a1);
    v15 = (int128_t)a1[16];
    v16 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v16;
    a0[16] = v15;
    *(a0) = v14;
    return v7;
}
