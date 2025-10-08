long long ruff_python_formatter::comments::placement::handle_parameter_comment(void* a0, void* a1, struct_0 *a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x49]
    void* v1;  // [bp-0x48], Other Possible Types: char
    char v2;  // [bp-0x40]
    unsigned long v4;  // rax
    char v5;  // cl
    unsigned int v6;  // edx
    int v7;  // xmm0
    int v8;  // xmm1
    int v9;  // xmm2

    if (a2->field_8)
    {
        ruff_python_trivia::tokenizer::first_non_trivia_token(&v1, a2->field_14, a3, a4);
        if (v2 == 90)
            core::option::expect_failed("A annotated parameter should have a colon following its name when it is valid syntax.", 85, &g_97d168); /* do not return */
        v0 = v2;
        if (v0 != 12)
        {
            v1 = 0;
            core::panicking::assert_failed(0, &v0, &g_48a9b3, &v1, &g_97d180); /* do not return */
        }
        v4 = (int)a1[64];
        if ((unsigned int)v4 >= *((int *)&v1))
        {
            *((int128_t *)&a0[64]) = (int128_t)a1[64];
            v7 = *((int128_t *)a1);
            v8 = (int128_t)a1[16];
            v9 = (int128_t)a1[32];
            *((int128_t *)&a0[48]) = (int128_t)a1[48];
            a0[32] = v9;
            a0[16] = v8;
            *(a0) = v7;
            return v4;
        }
    }
    else
    {
        v4 = (int)a1[64];
        if ((unsigned int)v4 >= a2->field_10)
        {
            *((int128_t *)&a0[64]) = (int128_t)a1[64];
            v7 = *((int128_t *)a1);
            v8 = (int128_t)a1[16];
            v9 = (int128_t)a1[32];
            *((int128_t *)&a0[48]) = (int128_t)a1[48];
            a0[32] = v9;
            a0[16] = v8;
            *(a0) = v7;
            return v4;
        }
    }
    v5 = (char)a1[72];
    v6 = (int)a1[68];
    *((unsigned long long *)&a0[8]) = 80;
    *((struct_0 **)&a0[16]) = a2;
    *((unsigned int *)&a0[24]) = v4;
    *((unsigned int *)&a0[28]) = v6;
    *((char *)&a0[32]) = 0;
    *((char *)&a0[33]) = v5;
    *((unsigned long long *)a0) = 94;
    return v4;
}
