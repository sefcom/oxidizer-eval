long long uu_pr::trailer_content(unsigned long long a0[3], char a1, char a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx

    v1 = 8;
    if (!(a1 & 1) || (a2 & 1))
    {
        v2 = 0;
    }
    else
    {
        v1 = 8.alloc_impl(120);
        if (!v1)
            alloc::alloc::handle_alloc_error(8, 120); /* do not return */
        *((unsigned long long *)v1) = 0;
        *((unsigned long long *)(v1 + 8)) = 1;
        *((uint128_t *)(v1 + 16)) = 0;
        *((unsigned long long *)(v1 + 32)) = 1;
        *((uint128_t *)(v1 + 40)) = 0;
        *((unsigned long long *)(v1 + 56)) = 1;
        *((uint128_t *)(v1 + 64)) = 0;
        *((unsigned long long *)(v1 + 80)) = 1;
        *((uint128_t *)(v1 + 88)) = 0;
        *((unsigned long long *)(v1 + 104)) = 1;
        *((unsigned long long *)(v1 + 112)) = 0;
        v2 = 5;
    }
    a0[0] = v2;
    a0[1] = v1;
    a0[2] = v2;
    return v1;
}
