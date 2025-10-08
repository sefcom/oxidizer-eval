long long ruff_python_formatter::context::IndentLevel::to_ascii_spaces(unsigned short a0, char a1)
{
    unsigned long v1;  // cc_ndep
    unsigned int v2;  // edi

    if ((char)_ccall(0, 46, (unsigned long long)a1, ((char)_ccall(2, 6, (unsigned long long)a0, 1, v1) ? 0 : v2 & 0xffff0000 | a0 - 1) & 65535, v1))
        return a1 * (short)((char)_ccall(2, 6, (unsigned long long)a0, 1, v1) ? 0 : v2 & 0xffff0000 | a0 - 1) & 0xffffffffffff0000 | 65535;
    return a1 * (short)((char)_ccall(2, 6, (unsigned long long)a0, 1, v1) ? 0 : v2 & 0xffff0000 | a0 - 1);
}
