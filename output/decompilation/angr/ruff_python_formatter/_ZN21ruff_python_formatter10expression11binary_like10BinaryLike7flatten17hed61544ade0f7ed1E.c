long long ruff_python_formatter::expression::binary_like::BinaryLike::flatten(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x110]
    void* v1;  // [bp-0x10]
    unsigned long long v3;  // r9

    v3 = a3;
    v1 = 0;
    if (!a1)
    {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(a2, 4, 0, 4, 0, a3, a4, a5, &v0);
    }
    else if (a1 == 1)
    {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(a2, 4, 0, 4, 0, a3, a4, a5, &v0);
    }
    else
    {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(a2, 4, 0, 4, 0, a3, a4, a5, &v0);
    }
    return ::libc.so.0::memcpy(a0, &v0, 264);
}
