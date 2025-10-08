long long ruff_python_formatter::string::docstring::CodeExampleKind::code(unsigned long long a0[3])
{
    unsigned long long v1;  // rcx

    v1 = 0x8000000000000000 ^ a0[0];
    if (v1 >= 3)
        v1 = 1;
    if (v1 && v1 == 1)
        return a0.indented_code();
    return a0[2];
}
