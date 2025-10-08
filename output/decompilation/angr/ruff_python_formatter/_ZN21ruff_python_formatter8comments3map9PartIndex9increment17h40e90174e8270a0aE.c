long long ruff_python_formatter::comments::map::PartIndex::increment(unsigned int *a0)
{
    unsigned long long v1;  // rax

    v1 = *(a0).incremented();
    *(a0) = v1;
    return v1;
}
