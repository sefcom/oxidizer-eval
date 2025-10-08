long long ruff_python_formatter::comments::map::InOrderEntry::range(unsigned int a0[4])
{
    unsigned int v1;  // eax

    v1 = a0[3];
    if (!v1)
    {
        v1 = a0[2];
        if (!a0[2])
            return a0[1] - 1;
    }
    else if (!v1)
    {
        return a0[1] - 1;
    }
    return v1 - 1;
}
