long long fish::history::HistoryImpl::incorporate_external_changes(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edx
    unsigned int v3;  // edx
    unsigned long long v4;  // rdi
    void* v5;  // rsi
    unsigned long long v6;  // rax

    v1 = std::time::SystemTime::now();
    if (v1 == a0->field_70)
    {
        if (v2 <= a0->field_78)
            return v1;
    }
    else
    {
        if (v1 <= a0->field_70)
            return v1;
    }
    a0->field_70 = v1;
    a0->field_78 = v3;
    a0.clear_file_state();
    a0.save(0);
    v4 = a0->field_48;
    v5 = a0->field_50;
    a0->field_50 = 0;
    v6 = (unsigned long long)core::ptr::drop_in_place<[fish::history::HistoryItem]>(v4, v5);
    a0->field_b0 = 0;
    return v6;
}
