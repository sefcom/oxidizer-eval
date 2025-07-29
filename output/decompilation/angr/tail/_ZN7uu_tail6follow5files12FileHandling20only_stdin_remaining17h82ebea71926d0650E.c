long long uu_tail::follow::files::FileHandling::only_stdin_remaining(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (a0->field_30 != 1)
        return 0;
    v0 = v2;
    v3 = a0->padding_0[24].get_inner("-tail-error-cannot-open-for-reading", 1);
    return v3 & 0xffffffffffffff00 | v3;
}
