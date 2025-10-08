long long just::function::blake3(void* *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x30]

    blake3::hash(&v0, a2, a3);
    a0 + 1.spec_to_string(&v0);
    *(a0) = 0;
    return a0;
}
