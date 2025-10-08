long long ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement(unsigned int a0[4], unsigned int a1[4], unsigned int a2, char a3)
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if (a0)
    {
        if (a2 > a0[2] && a3 && a2 < a0[0])
            return 0;
        if (a2 > a0[1] && !a3)
        {
            v2 = v1 & 0xffffffffffffff00 | 1;
            if (a2 < a0[3])
                return v1 & 0xffffffffffffff00 | 1;
        }
    }
    v3 = v2 & 0xffffffffffffff00 | 4;
    if (!a1)
        return v3;
    v4 = v3;
    if (a2 > a1[2])
    {
        v4 = v3;
        if (a3)
        {
            v4 = v3 & 0xffffffffffffff00 | 2;
            if (a2 < a1[0])
                return v3 & 0xffffffffffffff00 | 2;
        }
    }
    if (a2 > a1[1])
        return (a2 < a1[3] ? a3 + 3 : 4);
    return v4 & 0xffffffffffffff00 | 4;
}
