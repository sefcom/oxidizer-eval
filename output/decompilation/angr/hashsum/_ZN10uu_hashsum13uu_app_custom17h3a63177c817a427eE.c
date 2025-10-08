long long uu_hashsum::uu_app_custom(unsigned long a0)
{
    void* v0;  // [bp-0xb10]
    int v1;  // [bp-0xb08]
    char v2;  // [bp-0x888]
    char v3;  // [bp-0x5c0]
    char v4;  // [bp-0x2f8]
    char *v6;  // rbx
    char *v7;  // r12
    unsigned long long v8;  // r14
    char *v9;  // r15
    char *v10;  // r13

    v6 = &v4;
    uu_hashsum::uu_app_common(&v4);
    uu_hashsum::uu_app_opt_bits(&v2, &v4);
    v7 = &v3;
    uu_hashsum::uu_app_b3sum_opts(&v3, &v2);
    v8 = 24;
    do
    {
        v9 = v6;
        v10 = v7;
        memcpy(v6, v7, 712);
        v2.new(*((long long *)(v8 - -5577136)), *((long long *)(v8 - -5577144)));
        v1.long(&v2, *((long long *)(v8 - -5577136)), *((long long *)(v8 - -5577144)));
        v2.help(&v1, *((long long *)(v8 - -5577152)), *((long long *)&(&g_5519c8)[v8]));
        v1.action(&v2, 2);
        v10.arg(v9, &v1);
        v8 += 32;
        v7 = v10;
        v6 = v9;
    } while (v8 != 504);
    memcpy(v0, &v3, 712);
    return a0;
}
