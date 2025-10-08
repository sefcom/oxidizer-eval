long long just::function::justfile_directory(void* a0, struct_0 **a1)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v4 = *(a1)->field_18->field_8.parent(*(a1)->field_18->field_10);
    if (v4)
    {
        core::str::converts::from_utf8(&v0, v4, v5);
        if ((v0 & 1))
        {
            just::function::justfile_directory::{{closure}}(a0 + 8, v4, v5);
LABEL_66b23a:
            v6 = 1;
        }
        else
        {
            v0.to_vec(v1, *((long long *)&v2));
            *((int128_t *)&a0[16]) = *((int128_t *)&v1);
            *((unsigned long *)&a0[8]) = v0;
            v6 = 0;
        }
    }
    else
    {
        just::function::justfile_directory::{{closure}}(&v0, *(a1)->field_18->field_8, *(a1)->field_18->field_10);
        v7 = *((long long *)&v2);
        *((int128_t *)&a0[8]) = *((int128_t *)&v0);
        *((unsigned long long *)&a0[24]) = v7;
        goto LABEL_66b23a;
    }
    *((unsigned long long *)a0) = v6;
    return a0;
}
