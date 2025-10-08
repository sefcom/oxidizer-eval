long long ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x59]
    char v1;  // [bp-0x58], Other Possible Types: unsigned int
    int v2;  // [bp-0x54]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]
    unsigned long v6;  // [bp-0x40]
    void* v7;  // [bp-0x38]
    char *v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long v13;  // r14

    v0 = 0;
    v13 = a0 + 8;
    v6 = (long long)a0[32];
    v7 = a0;
    v8 = &v0;
    v9 = a1;
    v10 = a2;
    v11 = &g_97e6a0;
    if ((int)a0[8] == 4)
    {
        ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::{{closure}}(&v1, &v6);
    }
    else
    {
        v1 = (int)a0[8];
        *((int128_t *)&v2) = (int128_t)a0[12];
        v5 = (int)a0[28];
    }
    *((long long *)(v13 + 16)) = *((long long *)&v4);
    *((unsigned int *)v13) = v1;
    *((long long *)(v13 + 4)) = (long long)v2;
    *((unsigned int *)(v13 + 12)) = v3;
    return a0;
}
