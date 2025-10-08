long long uu_tail::chunks::BytesChunk::fill(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx

    v0 = v2;
    v3 = (unsigned long long)a2.read(a3, a1);
    if (((char)v3 & 1))
    {
        v5 = v4.from();
        *((unsigned long long *)&a0[8]) = v5;
        *((unsigned long long *)&a0[16]) = v4;
        *((unsigned long long *)a0) = 1;
        return v5;
    }
    a1->field_2000 = v6;
    if (v6)
    {
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)&a0[16]) = v6;
        *((unsigned long long *)a0) = 0;
    }
    else
    {
        *((uint128_t *)a0) = 0;
    }
    return v3;
}
