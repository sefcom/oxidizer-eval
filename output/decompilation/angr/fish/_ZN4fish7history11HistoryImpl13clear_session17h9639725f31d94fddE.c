void fish::history::HistoryImpl::clear_session(struct_0 *a0)
{
    char v0;  // [bp-0x48]
    unsigned long v2;  // r14
    void* v3;  // rbp
    void* v4;  // rsi

    v2 = a0->field_48;
    if (a0->field_50)
    {
        v3 = 0;
        do
        {
            v0.to_vec(*((long long *)(8 + v2 + (char *)v3)), *((long long *)(16 + v2 + (char *)v3)));
            a0->padding_58[40].insert(&v0, 1);
            v3 += 80;
        } while (a0->field_50 * 80 != v3);
        v2 = a0->field_48;
        v4 = a0->field_50;
    }
    else
    {
        v4 = 0;
    }
    a0->field_50 = 0;
    core::ptr::drop_in_place<[fish::history::HistoryItem]>(v2, v4);
    a0->field_b0 = 0;
    return;
}
