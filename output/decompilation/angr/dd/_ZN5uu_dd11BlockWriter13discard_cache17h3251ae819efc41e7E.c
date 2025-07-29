void uu_dd::BlockWriter::discard_cache(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    if ((char)(((0 ^ *(a0)) & (0 ^ -(*(a0)))) >> 63))
        a0 + 1.discard_cache(a1, a2);
    else
        a0.discard_cache(a1, a2);
    return;
}
