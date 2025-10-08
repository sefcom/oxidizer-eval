double just::parser::Parser::advance(long long a0, long long a1)
{
    int v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xd0]
    char v2;  // [bp-0x68]
    int v3;  // [bp-0x60]
    int v4;  // [bp-0x50]
    int v5;  // [bp-0x40]
    int v6;  // [bp-0x30]
    char v7;  // [bp-0x20]
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rax
    unsigned long long v12;  // rcx
    void* v13;  // rdx
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2
    int v17;  // xmm0

    a1[7].clear();
    v9 = a1[4];
    v10 = a1[11];
    if (v10 > v9)
        core::slice::index::slice_start_index_len_fail(v10, v9, &g_8306c0); /* do not return */
    if (v10 != v9)
    {
        v11 = a1[3];
        v12 = v10 * 72;
        v13 = 0;
        do
        {
            if (*((char *)(v11 + v12 + 64)) != 36)
            {
                a1[11] = v10 - v13 + 1;
                *((long long *)&a0->field_40[0]) = *((long long *)(v11 + v12 + 64));
                v14 = *((int128_t *)(v11 + v12));
                v15 = *((int128_t *)(v11 + v12 + 16));
                v16 = *((int128_t *)(v11 + v12 + 32));
                a0->field_30 = *((int128_t *)(v11 + v12 + 48));
                *((void*)&a0->field_20) = v16;
                *((void*)&a0->field_10) = v15;
                *((void*)&a0->field_0) = v14;
                a0->field_40[8] = 37;
                return (unsigned long long)v14;
            }
            v12 += 72;
            v13 -= 1;
        } while (v9 * 72 != v12);
        a1[11] = v10 - v13;
    }
    v1.to_vec("`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with ", 53);
    v0 = 9223372036854775848;
    v2.error(a1, &v0);
    v17 = *((int128_t *)&v7);
    v0 = v3;
    *((void*)&a0->field_40[0]) = v17;
    *((void*)&a0->field_30) = v6;
    *((void*)&a0->field_20) = v5;
    *((void*)&a0->field_10) = v4;
    *((void*)&a0->field_0) = v3;
    return (unsigned long long)v17;
}
