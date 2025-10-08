long long fish::history::HistoryImpl::remove_ephemeral_items(struct_0 *a0)
{
    int v0;  // [bp-0x78]
    int v1;  // [bp-0x68]
    int v2;  // [bp-0x58]
    int v3;  // [bp-0x48]
    int v4;  // [bp-0x38]
    void* v6;  // r14
    unsigned long v7;  // r12
    void* v8;  // r14
    unsigned long long v10;  // rax

    v6 = a0->field_50;
    if (v6)
    {
        v7 = v6 * 80 + a0->field_48 - 8;
        while (true)
        {
            v8 = v6;
            if (*((char *)v7) != 2)
                break;
            a0->field_50 = v8 - 1;
            *((int128_t *)&v4) = *((int128_t *)(v7 - 8));
            *((int128_t *)&v3) = *((int128_t *)(v7 - 24));
            *((int128_t *)&v2) = *((int128_t *)(v7 - 40));
            *((int128_t *)&v1) = *((int128_t *)(v7 - 56));
            *((int128_t *)&v0) = *((int128_t *)(v7 - 72));
            core::ptr::drop_in_place<core::option::Option<fish::history::HistoryItem>>(&v0);
            v7 -= 80;
            v6 = v8 - 1;
            if (v8 == 1)
                goto LABEL_13c01e6;
        }
    }
    else
    {
LABEL_13c01e6:
        v8 = 0;
    }
    v10 = a0->field_b0.min(v8);
    a0->field_b0 = v10;
    return v10;
}
