long long just::error::Error::context(void* a0, struct_0 *a1)
{
    unsigned long v2;  // rax
    unsigned long long v4;  // rax
    int v5;  // xmm0
    int v6;  // xmm1
    int v7;  // xmm2
    int v8;  // xmm3

    v2 = a1->field_0;
    switch (v2)
    {
    case 0: case 3: case 25: case 33: case 34:
        v4 = *((long long *)&a1->field_18[16]);
        *((unsigned long long *)&a0[64]) = v4;
        v5 = *((int128_t *)&a1->field_8[0]);
        v6 = *((int128_t *)&a1->field_8[16]);
        v7 = *((int128_t *)&a1->field_10[8]);
        v8 = *((int128_t *)&a1->field_18[0]);
        break;
    case 12:
        v4 = *((long long *)&a1->field_20[0]);
        *((unsigned long long *)&a0[64]) = v4;
        v5 = *((int128_t *)&a1->field_8[8]);
        v6 = *((int128_t *)&a1->field_10[0]);
        v7 = *((int128_t *)&a1->field_10[16]);
        v8 = *((int128_t *)&a1->field_18[8]);
        break;
    default:
        *((char *)&a0[64]) = 37;
        return v2;
    }
    a0[48] = v8;
    a0[32] = v7;
    a0[16] = v6;
    *(a0) = v5;
    return v4;
}
