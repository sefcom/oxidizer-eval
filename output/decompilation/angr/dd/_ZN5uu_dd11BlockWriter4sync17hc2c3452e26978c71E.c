long long uu_dd::BlockWriter::sync(unsigned long long *a0)
{
    if (!((char)(((0 ^ *(a0)) & (0 ^ -(*(a0)))) >> 63)))
        return a0.sync();
    return a0 + 1.sync();
}
