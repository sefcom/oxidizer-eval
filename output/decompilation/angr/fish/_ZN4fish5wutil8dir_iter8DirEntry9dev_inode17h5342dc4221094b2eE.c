long long fish::wutil::dir_iter::DirEntry::dev_inode(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // r14

    v0 = v2;
    v3 = a1 + 40;
    if ((long long)a1[40] != 1)
        a1.do_stat();
    a0->field_10 = *((long long *)(v3 + 16));
    a0->field_0 = *((int128_t *)v3);
    return a0;
}
