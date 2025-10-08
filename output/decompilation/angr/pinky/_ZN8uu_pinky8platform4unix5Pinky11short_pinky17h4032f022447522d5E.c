long long uu_pinky::platform::unix::Pinky::short_pinky(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x368]
    char v1;  // [bp-0x360]
    unsigned long long v2;  // [bp-0x350]
    unsigned long v3;  // [bp-0x348]
    unsigned long long v4;  // [bp-0x340]
    unsigned int v5;  // [sp-0x334]
    int v6;  // [bp-0x330]
    char v7;  // [bp-0x1b0]
    char v9;  // dl
    void* v10;  // rax

    if (a0->field_19)
        a0.print_heading();
    v0 = uucore::features::utmpx::Utmpx::iter_all_records();
    v1 = v9 & 1;
    if (a0->field_10)
    {
        v2 = a0->field_8 + a0->field_10 * 24;
        while (true)
        {
            v5.next();
            if (v5 != 1)
                break;
            memcpy(&v7, &v6, 384);
            if (!v7.is_user_process())
                continue;
            v3 = a0->field_8;
            v4 = v2;
            if (!v3.any(&v7))
                continue;
            v10 = a0.print_entry(&v7);
        }
    }
    else
    {
        while (true)
        {
            v5.next();
            if (v5 != 1)
                break;
            memcpy(&v7, &v6, 384);
            if (!v7.is_user_process())
                continue;
            v10 = a0.print_entry(&v7);
        }
    }
    v10 = 0;
    core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v0);
    return v10;
}
