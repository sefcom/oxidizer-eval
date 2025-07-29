void backdoorautomater::Param::set_param(unsigned long long a0, unsigned int a1)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xa8]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14
    unsigned long long v16;  // r13
    unsigned long long v17;  // r12
    unsigned long long v18;  // rbx

    v12 = v14;
    v11 = v15;
    v10 = v16;
    v9 = v17;
    v8 = v18;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v0.to_vec("Error ! choose a valid option.\nPut the IP of machine which will receive the reverse shell of the backdoor\n\n", 31);
    v5 = a0;
    v7 = *((long long *)&v1);
    memcpy(&v6, &v0, 16);
    goto (long long)(g_5674f4[1 + a1] + (char *)&g_5674f4[0]);
}
