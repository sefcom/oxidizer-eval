long long uu_cat::splice::write_fast_using_splice(void* a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbp
    unsigned int v7;  // eax

    v5 = uucore::features::pipes::pipe();
    if ((unsigned int)v5 == -1)
    {
        *((unsigned long long *)a0) = 9223372036854775809;
        *((unsigned int *)&a0[8]) = v1;
        return 9223372036854775809;
    }
    v0 = v5;
    v1 = v5 >> 32;
    do
    {
        nix::fcntl::splice(&v2, a1, &v1);
        if ((int)v2 == 1)
        {
            *((char *)&a0[8]) = 1;
            *((unsigned long long *)a0) = 9223372036854775814;
            core::ptr::drop_in_place<std::fs::File>(v1);
            return core::ptr::drop_in_place<std::fs::File>(v0);
        }
        if (!*((long long *)&v3))
        {
            *((char *)&a0[8]) = 0;
            *((unsigned long long *)a0) = 9223372036854775814;
            core::ptr::drop_in_place<std::fs::File>(v1);
            return core::ptr::drop_in_place<std::fs::File>(v0);
        }
    } while ((int)uucore::features::pipes::splice_exact(&v0, v6) == 134);
    v7 = uu_cat::splice::copy_exact(v0, v6);
    if (v7 != 134)
    {
        *((unsigned long long *)a0) = 9223372036854775809;
        *((unsigned int *)&a0[8]) = v7;
        core::ptr::drop_in_place<std::fs::File>(v1);
        return core::ptr::drop_in_place<std::fs::File>(v0);
    }
    *((char *)&a0[8]) = 1;
    *((unsigned long long *)a0) = 9223372036854775814;
    core::ptr::drop_in_place<std::fs::File>(v1);
    return core::ptr::drop_in_place<std::fs::File>(v0);
}
