long long uu_dd::BlockWriter::write_blocks(void* a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3)
{
    if (!((char)(((0 ^ *(a1)) & (0 ^ -(*(a1)))) >> 63)))
        return a0.write_blocks(a1, a2, a3);
    return a0.write_blocks(a1 + 1, a2, a3);
}
