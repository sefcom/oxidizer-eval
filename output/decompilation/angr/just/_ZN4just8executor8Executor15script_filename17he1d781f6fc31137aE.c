long long just::executor::Executor::script_filename(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    char *v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    char *v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    void* v12;  // [bp-0x18]
    unsigned long long v14;  // 4096
    unsigned long long v15;  // 4096
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rdx

    v0 = a2;
    v1 = a3;
    v14 = a2;
    v15 = a5;
    if (!a4)
    {
        a4 = just::executor::Executor::script_filename::{{closure}}(a1);
        v14 = v16;
        v15 = v16;
    }
    v17 = v14;
    v2 = a4;
    v3 = v15;
    v4 = &v0;
    v5 = <&T as core::fmt::Display>::fmt;
    v6 = &v2;
    v7 = <&T as core::fmt::Display>::fmt;
    v8 = &g_46ca80;
    v9 = 2;
    v12 = 0;
    v10 = &v4;
    v11 = 2;
    return a0.map_or_else(0, v17, &v8);
}
