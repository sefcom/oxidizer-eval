long long starship::context::get_remote_repository_info(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x120]
    unsigned long v2;  // [bp-0x110]
    int v3;  // [bp-0x108], Other Possible Types: char
    int v4;  // [bp-0xf8], Other Possible Types: char
    char v5;  // [bp-0xe8]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v7;  // [bp-0xc0], Other Possible Types: char
    char v8;  // [bp-0xb8]
    unsigned long long v10;  // r13
    unsigned long long v11;  // rax
    unsigned long long v13;  // rdx
    unsigned long v14;  // rax

    v10 = 0x8000000000000000;
    if (!a2)
    {
        *((unsigned long long *)a0) = 9223372036854775809;
        return v14;
    }
    v6.branch_remote_ref_name(a1, a2, a3, 1);
    if (*((int *)&v6) != 10)
    {
        if (v6 == 9)
        {
            v11 = *((long long *)&v7);
            memcpy(&v3, &v8, 16);
            if (v11 != 9223372036854775809)
            {
                v7 = v3;
                v6 = v11;
                starship::context::get_remote_repository_info::{{closure}}(&v0, &v6);
                goto LABEL_b709aa;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<alloc::borrow::Cow<gix_ref::FullNameRef>,gix::repository::branch_remote_ref_name::Error>>(&v6);
        }
    }
    v1 = 0x8000000000000000;
LABEL_b709aa:
    v5.branch_remote_name(a1, a2.shorten(a3), v13);
    if (*((int *)&v5) != 2)
    {
        starship::context::get_remote_repository_info::{{closure}}(&v6, &v5);
        v10 = v6;
        memcpy(&v4, &(char)v7, 16);
    }
    *((unsigned long *)&a0[16]) = v2;
    *((int128_t *)a0) = *((int128_t *)&v1);
    *((unsigned long long *)&a0[24]) = v10;
    a0[32] = v4;
    return v2;
}
