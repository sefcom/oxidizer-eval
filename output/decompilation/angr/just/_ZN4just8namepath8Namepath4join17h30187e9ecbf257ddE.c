long long just::namepath::Namepath::join(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3)
{
    char v0;  // [bp-0x68]

    v0.chain(a1, a1 + a2 * 72, a3);
    return a0.collect(&v0);
}
