void uu_chroot::set_supplemental_gids_with_strategy(void* a0, char a1, unsigned long long a2[3])
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    unsigned int v3[2];  // [bp-0x58]
    unsigned int v4;  // [bp-0x54]
    int v5;  // [bp-0x50]
    char v6;  // [bp-0x40]
    void* v8;  // rbp
    unsigned long long v9;  // rax
    unsigned int v10;  // eax

    if (!a2)
    {
        uu_chroot::handle_missing_groups(a0, a1);
        return;
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    if (a2[2])
    {
        v8 = 0;
        do
        {
            uu_chroot::name_to_gid(&v3, *((long long *)(8 + a2[1] + (char *)v8)), *((long long *)(16 + a2[1] + (char *)v8)));
            if (v3 != 14)
            {
                *((int128_t *)&a0[24]) = *((int128_t *)&v6);
                a0[8] = v5;
                *((unsigned int [2])a0) = v3;
                *((unsigned int *)&a0[4]) = v4;
                core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v0, v1);
                return;
            }
            v0.push(v4);
            v8 += 24;
        } while (a2[2] * 24 != v8);
        v9 = uu_chroot::set_supplemental_gids(v1, 0);
        if (v9)
            goto LABEL_4678e2;
LABEL_4678b4:
        v10 = 14;
    }
    else
    {
        v9 = uu_chroot::set_supplemental_gids(0x4, 0);
        if (!v9)
            goto LABEL_4678b4;
LABEL_4678e2:
        *((unsigned long long *)&a0[8]) = v9;
        v10 = 12;
    }
    *((unsigned int *)a0) = v10;
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v0, v1);
    return;
}
