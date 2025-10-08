long long fish::history::HistoryImpl::add(struct_0 *a0, struct_1 *a1, char a2, char a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (a1->field_10)
    {
        if (a0->field_50 && (char)a0->field_48 + a0->field_50 * 80 - 80.merge(a1))
        {
            a0->field_fc = 0;
        }
        else
        {
            v3 = a0->padding_0[64].push(a1);
            a0->field_fc = a2;
            if (!a3)
                return v3;
            return (unsigned long long)a0.save_unless_disabled();
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<fish::history::HistoryItem>(a1);
}
