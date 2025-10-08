long long fish::io::SeparatedBuffer::last_inferred(unsigned long a0, unsigned long a1)
{
    if (!a1)
        return 0;
    return *((char *)(a0 + a1 * 32 - 8)) ^ 1;
}
