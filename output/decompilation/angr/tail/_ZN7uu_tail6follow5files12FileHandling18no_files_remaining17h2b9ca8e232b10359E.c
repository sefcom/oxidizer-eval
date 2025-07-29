long long uu_tail::follow::files::FileHandling::no_files_remaining(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long v3;  // rax

    if (!a0->field_30)
        return v3 & 0xffffffffffffff00 | 1;
    v0 = v2;
    if (!a0.files_remaining())
        return a1->field_48 ^ 1;
    return 0;
}
