long long uu_uniq::filter_args(unsigned long long a0[3], unsigned long long a1[3], unsigned long long *a2, unsigned long long a3, char *a4, char *a5)
{
    unsigned long long *v0;  // [bp-0x78], Other Possible Types: unsigned long long
    char v1;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long v6;  // [bp-0x50]
    unsigned long long *v7;  // [bp-0x48]
    unsigned long long v9;  // r12
    unsigned int v10;  // r13d
    unsigned int v11;  // ebx
    unsigned long long v12;  // r13
    unsigned long long v13;  // rbx

    v0 = a2;
    v9 = a1[2];
    v6 = a1[1];
    core::str::converts::from_utf8(&v1, a1[1], v9);
    if (*((int *)&v1) == 1)
    {
        a0[0] = a1[0];
        a0[1] = v6;
        a0[2] = v9;
        return a0;
    }
    v10 = *(a4);
    v11 = *(a5);
    if ((char)uu_uniq::should_extract_obs_skip_fields(v2, v3, v10, v11))
    {
        uu_uniq::handle_extract_obs_skip_fields(&v1, v2, v3, v0);
        goto LABEL_466dcf;
    }
    else if ((char)uu_uniq::should_extract_obs_skip_chars(v2, v3, v10, v11))
    {
        uu_uniq::handle_extract_obs_skip_chars(&v1, v2, v3, a3);
LABEL_466dcf:
        v12 = v1;
        v5 = v2;
        v4 = v3;
    }
    else
    {
        v1.to_vec(v2, v3);
        v12 = v1;
        v5 = v2;
        if ((char)core::slice::<impl [T]>::starts_with(v2, v3, "-f-s---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  ", 2))
        {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v0);
            *(v0) = 0x8000000000000000;
        }
        v4 = v3;
        if ((char)core::slice::<impl [T]>::starts_with(v2, v4, "-s---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - ", 2))
        {
            v0 = v12;
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v7);
            *(v7) = 0x8000000000000000;
            v12 = v0;
            v4 = v3;
        }
    }
    v13 = v4;
    uu_uniq::handle_preceding_options(v2, v3, a4, a5);
    a0[0] = v12;
    a0[1] = v5;
    a0[2] = v13;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(a1[0], v6);
    return a0;
}
