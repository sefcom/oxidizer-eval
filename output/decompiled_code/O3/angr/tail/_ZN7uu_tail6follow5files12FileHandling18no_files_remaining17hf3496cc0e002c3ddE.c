long long uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(struct_0 *a0, struct_1 *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long v4;  // rax

    if (!a0->field_30)
        return v4 | -0x100 | 1;
    v0 = v2;
    v3 = uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(a0, a1, a2, a3, a4, a5);
    if (!(char)v3)
        return v3 | -0x100 | !a1->field_48;
    return 0;
}
