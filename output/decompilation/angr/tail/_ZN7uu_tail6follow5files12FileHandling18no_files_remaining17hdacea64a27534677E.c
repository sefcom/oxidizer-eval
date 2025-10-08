long long uu_tail::follow::files::FileHandling::no_files_remaining(struct_0 *a0, unsigned int a1)
{
    unsigned long v1;  // rbx
    unsigned int v2;  // ebx

    if (!a0->field_30)
        return v2 & 0xffffff00 | 1;
    v1 = a1;
    if (!a0.files_remaining())
        return (unsigned int)v1 & 0xffffff00 | ((char)v1 ^ 1) & 1;
    return 0;
}
