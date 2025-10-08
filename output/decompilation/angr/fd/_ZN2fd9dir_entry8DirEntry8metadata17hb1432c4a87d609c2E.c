long long fd::dir_entry::DirEntry::metadata(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    a0->field_70.get_or_try_init(a0);
    if (a0->field_70 == 2)
        return 0;
    return &a0->field_70;
}
