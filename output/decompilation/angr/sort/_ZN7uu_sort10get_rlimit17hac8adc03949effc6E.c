long long uu_sort::get_rlimit(unsigned long long a0[2])
{
    struct rlimit v0[2];  // [bp-0x48]
    char v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x18]
    void* v4;  // rax
    unsigned long long v5;  // rcx

    *((uint128_t *)&v0) = 0;
    if (getrlimit(7, &v0))
    {
        v1.to_vec("Failed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by the first ", 22);
        v2 = 2;
        v4 = v1.new();
        v5 = &g_58d250;
    }
    else
    {
        v5 = *((long long *)&v0[0].rlim_cur);
        v4 = 0;
    }
    a0[1] = v5;
    a0[0] = v4;
    return a0;
}
