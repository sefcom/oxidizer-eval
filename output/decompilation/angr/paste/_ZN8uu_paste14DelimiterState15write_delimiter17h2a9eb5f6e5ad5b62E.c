long long uu_paste::DelimiterState::write_delimiter(void* a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    void* v2;  // rax
    unsigned long long v3;  // rax

    v1 = *((long long *)a0);
    if (!v1)
    {
        return v1;
    }
    else if ((unsigned int)v1 == 1)
    {
        return a1.spec_extend((long long)a0[8], (long long)a0[16] + (long long)a0[8]);
    }
    else
    {
        v2 = a0 + 40.next();
        if (!v2)
            core::option::unwrap_failed(&g_4dedb8); /* do not return */
        v3 = a1.spec_extend(*((long long *)v2), (long long)v2[8] + *((long long *)v2));
        *((int128_t *)&a0[8]) = *((int128_t *)v2);
        return v3;
    }
}
