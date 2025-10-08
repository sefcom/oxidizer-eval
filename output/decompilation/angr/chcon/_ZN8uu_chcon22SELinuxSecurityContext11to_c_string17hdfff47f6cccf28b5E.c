double uu_chcon::SELinuxSecurityContext::to_c_string(long long a0, long long a1)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    int v4;  // [bp-0x20]
    char v5;  // [bp-0x10]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long v9;  // xmm0lq
    int v10;  // xmm0
    int v11;  // xmm0
    int v12;  // xmm1

    if (a1->field_0 == 2)
    {
        v7 = a1->field_8;
        v8 = a1->field_10;
        *((unsigned long long *)&a0[8]) = (!v7) * 2;
        *((unsigned long long *)&a0[16]) = v7;
        *((unsigned long long *)&a0[24]) = v8;
        *((unsigned int *)a0) = 18;
        return v9;
    }
    v0.to_c_string(a1);
    if (*((int *)&v0) != 10)
    {
        *((long long *)&a0[48]) = *((long long *)&v5);
        v11 = *((int128_t *)&v0);
        v12 = *((int128_t *)&v2);
        a0[32] = v4;
        a0[16] = v12;
        *(a0) = v11;
        *((char **)&a0[56]) = "SELinuxSecurityContext::to_c_string() failed failed on No context is specifiedNo files are specifiedData is out of range";
        *((unsigned long long *)&a0[64]) = 37;
        return (unsigned long long)v11;
    }
    *((unsigned long long *)&a0[24]) = v3;
    v10 = *((int128_t *)&v1);
    a0[8] = v10;
    *((unsigned int *)a0) = 18;
    return (unsigned long long)v10;
}
