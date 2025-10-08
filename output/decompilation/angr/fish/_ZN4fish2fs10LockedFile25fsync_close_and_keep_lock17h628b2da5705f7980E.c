long long fish::fs::LockedFile::fsync_close_and_keep_lock(struct_0 *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned long long v3;  // rax
    unsigned int v4;  // eax

    v0 = a1;
    v1 = a2;
    v3 = fish::fs::fsync(&v0);
    if (v3)
    {
        a0->field_8 = v3;
        core::ptr::drop_in_place<fish::fs::LockedFile>(a1, a2);
        v4 = 1;
    }
    else
    {
        a0->field_4 = a2;
        core::ptr::drop_in_place<std::fs::File>(a1);
        v4 = 0;
    }
    a0->field_0 = v4;
    return a0;
}
