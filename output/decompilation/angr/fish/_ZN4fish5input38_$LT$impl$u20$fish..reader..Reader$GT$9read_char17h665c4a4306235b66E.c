void fish::input::<impl fish::reader::Reader>::read_char(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x140]
    char v1;  // [bp-0x138]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x30]
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    unsigned long long v8;  // [bp-0x18]
    unsigned long long v9;  // [bp-0x10]
    unsigned long long v11;  // r15
    unsigned long long v12;  // r14
    unsigned long long v13;  // r13
    unsigned long long v14;  // r12
    unsigned long long v15;  // rbx
    void* v16;  // rcx

    v9 = v11;
    v8 = v12;
    v7 = v13;
    v6 = v14;
    v5 = v15;
    v0 = a0;
    fish::reader::reader_reset_interrupted();
    v4 = &g_15a99b0;
    v3 = &g_15a99a0;
    v2 = a1;
    v1.readch(a1);
    v16 = 9223372036854775809 + *((long long *)&v1);
    if (9223372036854775812 <= *((long long *)&v1))
        v16 = 0;
    goto (long long)(*((int *)((char *)&g_9f41dc[0] + 0x4 * v16)) + (char *)&g_9f41dc[0]);
}
