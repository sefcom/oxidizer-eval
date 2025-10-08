long long ruff_python_formatter::context::IndentLevel::increment(unsigned short a0)
{
    unsigned long v1;  // cc_op
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // cc_dep2
    unsigned long v4;  // cc_ndep
    unsigned int v5;  // edi

    return ((char)_ccall(5, 22, (unsigned long long)(a0 + 1), 0, _ccall(v1, v2, v3, v4)) ? v5 & 0xffff0000 | a0 + 1 : 65535);
}
