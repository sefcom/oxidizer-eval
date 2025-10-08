void uu_chroot::handle_missing_groups(struct_0 *a0, char a1)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned int *v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    char *v4;  // rdi
    unsigned int *v5;  // r14
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    if (!(a1 & 1))
    {
        a0->field_0 = 14;
        return;
    }
    v4 = &v0;
    if (!(a1 & 0x100))
    {
        uu_chroot::supplemental_gids(v4, 0);
        if (*((long long *)&v2))
        {
            v5 = v1;
            v6 = uu_chroot::set_supplemental_gids(v5, *((long long *)&v2));
            if (v6)
            {
                a0->field_0 = 12;
                a0->field_8 = v6;
            }
            else
            {
                a0->field_0 = 14;
            }
        }
        else
        {
            a0->field_0 = 7;
            a0->field_4 = 0;
            v5 = v1;
        }
    }
    else
    {
        uu_chroot::supplemental_gids(v4, 0);
        v5 = v1;
        v7 = uu_chroot::set_supplemental_gids(v5, *((long long *)&v2));
        if (v7)
        {
            a0->field_8 = v7;
            a0->field_0 = 12;
        }
        else
        {
            a0->field_0 = 14;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v0, v5);
    return;
}
