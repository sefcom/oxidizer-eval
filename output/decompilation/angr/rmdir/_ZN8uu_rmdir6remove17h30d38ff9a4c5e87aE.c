long long uu_rmdir::remove(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // r15
    unsigned long long v6;  // r15

    uu_rmdir::remove_single(&v0, a1, a2, a3);
    if (!*((long long *)&v0))
    {
        if (!((unsigned short)a3 & 0x100))
        {
            *((unsigned long long *)a0) = 0;
            return a0;
        }
        else if (!v4 || !a1.parent(a2))
        {
            *((unsigned long long *)a0) = 0;
            return a0;
        }
        else
        {
            while (true)
            {
                v6 = v5;
                uu_rmdir::remove_single(&v0, v3, v6, a3);
                if (*((long long *)&v0))
                    break;
                v3 = v3.parent(v6);
                if (!v3)
                {
                    *((unsigned long long *)a0) = 0;
                    return a0;
                }
                v4 = v4;
                if (!v5)
                {
                    *((unsigned long long *)a0) = 0;
                    return a0;
                }
            }
        }
    }
    *((long long *)&a0[16]) = *((long long *)&v1);
    *(a0) = v0;
    return a0;
}
