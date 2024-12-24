long long uu_tail::follow::files::FileHandling::no_files_remaining::hb614b0dd13a841bf(struct_0 *a0, struct_1 *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long v4;  // rax

    if (!a0->field_30)
        return v4 | -0x100 | 1;
    v0 = v2;
    v3 = uu_tail::follow::files::FileHandling::files_remaining::hfbf3d8de18e4fb11(a0, a1, a2, a3, a4, a5);
    if (!(char)v3)
        return v3 | -0x100 | !a1->field_48;
    return 0;
}
