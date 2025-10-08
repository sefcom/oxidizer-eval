long long uu_uniq::handle_preceding_options(unsigned long long a0, unsigned long long a1, char *a2, char *a3)
{
    unsigned int v0;  // [bp-0x3c]
    char *v1;  // [bp-0x38]
    char *v3;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // r13
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v3 = a2;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, "---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'p", 2))
    {
        v1 = a2;
        v4 = a0.get(a1);
        if (!v4)
            core::str::slice_error_fail(a0, a1, 2, a1, &g_4f58f8); /* do not return */
        v5 = v4;
        if (!(char)v4.equal(v6, "skip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 10) && !(char)v5.equal(v6, "skip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11) && !(char)v5.equal(v6, "check-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11) && !(char)v5.equal(v6, "groupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 5))
            v5.equal(v6, "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 12);
        v3 = v1;
        *(v1) = 1;
    }
    if (!(char)a0.equal(a1, "-s---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - ", 2) && !(char)a0.equal(a1, "-f-s---w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  ", 2))
        a0.equal(a1, "-w--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'pre", 2);
    *(a3) = 1;
    v0 = 0;
    v7 = core::slice::<impl [T]>::starts_with(a0, a1, ::0x462fb0::core::char::methods::encode_utf8_raw(45, &v0), v6);
    if ((char)v7)
        return v7;
    *(a3) = 0;
    *(v3) = 0;
    return v7;
}
