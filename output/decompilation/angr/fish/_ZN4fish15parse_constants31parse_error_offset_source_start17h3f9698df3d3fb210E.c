long long fish::parse_constants::parse_error_offset_source_start(unsigned long long a0[3], unsigned long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    void* v3;  // rdx
    unsigned long v4;  // rdi
    unsigned long v5;  // rax

    if (!a1)
    {
        return v5;
    }
    else if (a0[2])
    {
        v1 = a0[1];
        v2 = a0[2] * 16;
        v3 = 0;
        while (true)
        {
            v4 = *((long long *)(24 + v1 + (char *)v3));
            if (v4 != -1)
            {
                if (!((char)__CFADD__(v4, a1)))
                    *((unsigned long *)(24 + v1 + (char *)v3)) = v4 + a1;
                else
                    core::panicking::panic_const::panic_const_add_overflow(&g_14dcba8); /* do not return */
            }
            v3 += 48;
            if (v2 * 3 == v3)
                return v5;
        }
    }
    else
    {
        return v5;
    }
}
