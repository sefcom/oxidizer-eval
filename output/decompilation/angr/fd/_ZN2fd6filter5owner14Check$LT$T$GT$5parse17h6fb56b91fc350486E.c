long long fd::filter::owner::Check<T>::parse(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // 4096
    unsigned long long v7;  // 4096
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    if (a1 && !(char)a1.equal(a2, 1, 0))
    {
        v0 = 0;
        v5 = core::slice::<impl [T]>::starts_with(a1, a2, ::0x5ccc90::core::char::methods::encode_utf8_raw(33, &v0), v4);
        v6 = a1;
        v7 = a2;
        if ((char)v5)
        {
            v8 = 1.get(a1, a2);
            if (!v8)
                core::str::slice_error_fail(a1, a2, 1, a2, &g_802368); /* do not return */
            v6 = v8;
            v7 = v4;
        }
        fd::filter::owner::OwnerFilter::from_string::{{closure}}(&v0, v6, v7);
        if (((char)v0 & 1))
        {
            *((long long *)&a0[8]) = *((long long *)&v2);
            v9 = 1;
        }
        else
        {
            *((unsigned int *)&a0[4]) = v5;
            *((unsigned int *)&a0[8]) = v1;
            v9 = 0;
        }
        *((unsigned int *)a0) = v9;
        return v9;
    }
    *((unsigned long long *)a0) = 0x200000000;
    return 0x200000000;
}
