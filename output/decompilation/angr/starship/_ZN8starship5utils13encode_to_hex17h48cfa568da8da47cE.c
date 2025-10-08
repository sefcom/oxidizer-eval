long long starship::utils::encode_to_hex(unsigned long long a0, char *a1)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    char v3;  // [bp-0x78]
    void* v4;  // [bp-0x68]
    char v5;  // [bp-0x58]
    unsigned long long v7;  // rdx
    char *v8;  // rbp
    unsigned int v9;  // r15d

    v0 = 40.with_capacity_in(1, 1, &g_11f7540);
    v1 = v7;
    v2 = 0;
    v8 = 0;
    while (v8 != 20)
    {
        v9 = *((char *)(a1 + v8));
        v0.push(*((int *)(5519384 + 4 * (v9 >> 4))), &g_11f7558);
        v8 += 1;
        v0.push(*((int *)(5519384 + 4 * (v9 & 15))), &g_11f7570);
    }
    v4 = 0;
    memcpy(&v3, &v0, 16);
    v5.from_utf8(&v3);
    return a0.unwrap(&v5);
}
