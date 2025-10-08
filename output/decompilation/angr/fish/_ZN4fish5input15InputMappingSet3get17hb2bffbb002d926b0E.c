long long fish::input::InputMappingSet::get(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, uint128_t *a5, char a6, unsigned long long a7[2], char *a8)
{
    unsigned long long v0[3];  // rax
    unsigned long long v1[3];  // 4096
    unsigned long long v2;  // rbp
    void* v3;  // rbx
    void* v4;  // rax
    unsigned long v5;  // rcx

    v0 = a0 + 1;
    if (a6)
        v1 = a0;
    else
        v1 = v0;
    if (!v1[2])
        return 0;
    v2 = v1[1];
    v3 = 0;
    do
    {
        if ((char)*((long long *)(8 + v2 + (char *)v3)).equal(*((long long *)(16 + v2 + (char *)v3)), a1, a2) && (char)*((long long *)(56 + v2 + (char *)v3)).equal(*((long long *)(64 + v2 + (char *)v3)), a3, a4))
        {
            *(a5) = *((int128_t *)(32 + v2 + (char *)v3));
            v4 = 0;
            if (!((char)(((0 ^ *((long long *)(72 + v2 + (char *)v3))) & (0 ^ -(*((long long *)(72 + v2 + (char *)v3))))) >> 63)))
            {
                v4 = *((long long *)(80 + v2 + (char *)v3));
                v5 = *((long long *)(88 + v2 + (char *)v3));
            }
            a7[0] = v4;
            a7[1] = v5;
            *(a8) = *(100 + v2 + (char *)v3);
            return 1;
        }
        v3 += 104;
    } while (v1[2] * 104 != v3);
    return 0;
}
