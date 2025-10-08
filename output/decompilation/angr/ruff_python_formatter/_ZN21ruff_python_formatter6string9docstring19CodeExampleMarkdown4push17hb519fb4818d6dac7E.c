long long ruff_python_formatter::string::docstring::CodeExampleMarkdown::push(unsigned long long a0, void* a1)
{
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx

    v6 = a0 + 24.trim_start_str(*((long long *)a1), (long long)a1[8]);
    v2 = (long long)a1[32];
    *((int128_t *)&v1) = (int128_t)a1[16];
    *((int128_t *)&v0) = *((int128_t *)a1);
    v3 = v6;
    v4 = v7;
    return a0.push(&v0, &g_97f510);
}
