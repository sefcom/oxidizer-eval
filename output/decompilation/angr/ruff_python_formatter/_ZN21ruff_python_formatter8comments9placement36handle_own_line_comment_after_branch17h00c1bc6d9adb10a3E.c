long long ruff_python_formatter::comments::placement::handle_own_line_comment_after_branch(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0x78]
    unsigned int v1;  // [bp-0x74]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    int v9;  // xmm0
    int v10;  // xmm1
    int v11;  // xmm2
    unsigned long v12;  // r13
    void* v13;  // r12
    void* v14;  // rcx
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2
    unsigned long long v18;  // r12
    char *v19;  // r14
    unsigned int v20;  // ebp
    unsigned long v21;  // rdx
    unsigned long v22;  // r15
    unsigned long v24;  // r15
    unsigned long v25;  // r15
    unsigned long long v26;  // rax
    unsigned long v27;  // rax
    void* v28;  // rax
    int v29;  // xmm0
    int v30;  // xmm1
    int v31;  // xmm2

    v5 = a2;
    v6 = a3;
    v8 = v5.last_child_in_body();
    if (v8 == 94)
    {
        *((int128_t *)&a0[64]) = (int128_t)a1[64];
        v9 = *((int128_t *)a1);
        v10 = (int128_t)a1[16];
        v11 = (int128_t)a1[32];
        *((int128_t *)&a0[48]) = (int128_t)a1[48];
        a0[32] = v11;
        a0[16] = v10;
        *(a0) = v9;
        return v8;
    }
    v2 = v8;
    v0 = (int)a1[64];
    v1 = (int)a1[68];
    v12 = (unsigned int)ruff_python_ast::helpers::comment_indentation_after(a2, a3, (int)a1[64], (int)a1[68], a4, a5);
    if (!ruff_python_trivia::whitespace::indentation_at_offset((unsigned int)v5.range(), a4, a5))
        v13 = 0;
    if (v13 >> 32)
    {
        1.unwrap(&g_97cc48);
    }
    else
    {
        0.unwrap(&g_97cc48);
        if ((unsigned int)v12 != (unsigned int)v13)
        {
            v3 = v2;
            v18 = 94;
            v19 = &v3;
            v2 = a4;
            v20 = v12;
            while (true)
            {
                v4 = v22;
                if (!ruff_python_trivia::whitespace::indentation_at_offset((unsigned int)v19.range(), v2, a5))
                    v24 = 0;
                else
                    v24 = v21;
                v25 = v24;
                v25 >> 32.unwrap(&g_97cc48);
                if (((unsigned int)v25 < v20) - 0 - (v20 < (unsigned int)v25) == 1)
                {
                    v26 = v19.last_child_in_body();
                    v18 = v3;
                    v12 = v4;
                    if (v26 != 94)
                    {
                        v3 = v26;
                    }
                    else
                    {
                        v27 = (char)a1[72];
LABEL_702574:
                        *((unsigned long long *)&a0[8]) = v18;
                        *((unsigned long *)&a0[16]) = v12;
                        break;
                    }
                }
                else if (!((unsigned int)v25 < v20) - 0 - (v20 < (unsigned int)v25))
                {
                    v27 = (char)a1[72];
                    *((int128_t *)&a0[8]) = *((int128_t *)&v3);
                    break;
                }
                else
                {
                    v28 = a1;
                    if (v18 == 94)
                    {
                        *((int128_t *)&a0[64]) = (int128_t)v28[64];
                        v29 = *((int128_t *)v28);
                        v30 = (int128_t)v28[16];
                        v31 = (int128_t)v28[32];
                        *((int128_t *)&a0[48]) = (int128_t)v28[48];
                        a0[32] = v31;
                        a0[16] = v30;
                        *(a0) = v29;
                        return v28;
                    }
                    v27 = (char)v28[72];
                    goto LABEL_702574;
                }
            }
            *((unsigned int *)&a0[24]) = v0;
            *((unsigned int *)&a0[28]) = v1;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v27;
            *((unsigned long long *)a0) = 95;
            return v27;
        }
    }
    v14 = a1;
    *((int128_t *)&a0[64]) = (int128_t)v14[64];
    v15 = *((int128_t *)v14);
    v16 = (int128_t)v14[16];
    v17 = (int128_t)v14[32];
    *((int128_t *)&a0[48]) = (int128_t)v14[48];
    a0[32] = v17;
    a0[16] = v16;
    *(a0) = v15;
    return a0;
}
