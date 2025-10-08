long long uu_uniq::should_extract_obs_skip_fields(unsigned long long a0, unsigned long long a1, char a2, char a3)
{
    unsigned long v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = v3;
    v1 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, ::0x462fb0::core::char::methods::encode_utf8_raw(45, &v1), v4) && !((a2 | a3 | (char)core::slice::<impl [T]>::starts_with(a0, a1, "---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'p", 2)) & 1) && !(char)core::slice::<impl [T]>::starts_with(a0, a1, "-s---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - ", 2) && !(char)core::slice::<impl [T]>::starts_with(a0, a1, "-f-s---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  ", 2))
    {
        v5 = core::slice::<impl [T]>::starts_with(a0, a1, "-w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'pre", 2);
        return v5 & 0xffffffffffffff00 | (char)v5 ^ 1;
    }
    return 0;
}
