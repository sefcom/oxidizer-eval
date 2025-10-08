long long ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue(unsigned int *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x290]
    unsigned long long v1;  // [bp-0x1c0]
    unsigned long long v2;  // [bp-0x150]
    char v3;  // [bp-0x120]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v6;  // r15
    unsigned long long v7;  // rax

    v4 = v6;
    v3.pop_front(a1);
    if (*((long long *)&v3) == 9223372036854775815)
    {
        core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleAddAction>>(&v3);
        *(a0) = 4;
        return a0;
    }
    v2 = 9223372036854775815;
    v1 = 9223372036854775814;
    v0 = 0x8000000000000000;
    v7 = *((long long *)&v3) - -9223372036854775805;
    if (4 <= v7)
        v7 = 2;
    goto (long long)(g_487b2c[v7] + (char *)&g_487b2c[0]);
}
