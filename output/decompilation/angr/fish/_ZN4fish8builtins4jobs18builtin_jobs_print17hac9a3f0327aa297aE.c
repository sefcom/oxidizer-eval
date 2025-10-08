void fish::builtins::jobs::builtin_jobs_print(unsigned long long a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0xe8]
    void* v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    void* v3;  // [bp-0x90]
    char v4;  // [bp-0x68]
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
    unsigned int v16;  // eax
    unsigned long v17;  // r15

    v9 = v11;
    v8 = v12;
    v7 = v13;
    v6 = v14;
    v5 = v15;
    v16 = a0.get_pgid();
    v17 = a1;
    if (v16)
    {
        v0 = v16;
        v4.spec_to_string(&v0);
        v1 = 0;
        v2 = 4;
        v3 = 0;
        goto (long long)(g_9f2874[v17] + (char *)&g_9f2874[0]);
    }
    else
    {
        v4.to_vec("-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1);
        v1 = 0;
        v2 = 4;
        v3 = 0;
        goto (long long)(g_9f2874[v17] + (char *)&g_9f2874[0]);
    }
}
