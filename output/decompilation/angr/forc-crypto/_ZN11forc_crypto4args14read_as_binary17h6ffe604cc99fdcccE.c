long long forc_crypto::args::read_as_binary(void* a0, unsigned long long a1[3])
{
    void* v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x18]

    if (!((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63)))
    {
        forc_crypto::args::read_as_binary::{{closure}}(&v0, a1[1], a1[2]);
        *((int128_t *)&a0[8]) = *((int128_t *)&v1);
        *((void* *)a0) = v0;
        return v0;
    }
    *((unsigned long long *)&a0[8]) = 1;
    *((unsigned long long *)&a0[16]) = 0;
    *((unsigned long long *)a0) = 0;
    return 0;
}
