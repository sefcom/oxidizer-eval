long long ruff_python_formatter::statement::suite::trailing_function_or_class_def(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    unsigned long long v6;  // rdx

    *((int *)&v0) = (!a0 ? 94 : (unsigned long long)a0.from());
    v1 = v6;
    v3 = 0;
    v2 = a1;
    return v0.try_fold();
}
