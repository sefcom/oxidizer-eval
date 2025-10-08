long long fish::builtins::argparse::argparse_parse_args(void* a0, unsigned long long *a1, unsigned long long a2, void* a3, unsigned long long a4, struct_0 *a5)
{
    void* v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx

    if (a3 < 2)
        return 0;
    v0 = 0;
    v2 = fish::builtins::argparse::argparse_parse_flags(a4, a0, a3, a1, a2, &v0, a5);
    if (((char)v2 & 1))
    {
        v3 = v2 & 0xffffffff00000000;
        v4 = 1;
    }
    else if (((char)fish::builtins::argparse::check_for_mutually_exclusive_flags(a0, *((long long *)&a5->field_10)) & 1))
    {
        v4 = 1;
        v3 = 0x100000000;
    }
    else if (v0 <= a2)
    {
        a0 + 48.extend_trusted(0x10 * v0 + (char *)a1, &a1[2 * a2]);
        v3 = 0;
        v4 = 0;
    }
    else
    {
        core::slice::index::slice_start_index_len_fail(v0, a2, &g_14c7348); /* do not return */
    }
    return v3 | v4;
}
