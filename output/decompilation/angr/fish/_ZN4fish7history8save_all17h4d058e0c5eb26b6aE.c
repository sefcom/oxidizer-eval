long long fish::history::save_all()
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    void* v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    int v7;  // [bp-0x30]
    struct_0 *v9;  // rbx
    unsigned long v10;  // rax
    int v11;  // xmm0
    unsigned long v12;  // xmm0lq
    unsigned long long v13;  // rcx
    unsigned long long *v14;  // rdx

    v0.lock();
    v9 = v0.unwrap(&g_14da120);
    v10 = v9->field_8;
    if (v10)
    {
        v11 = v9->field_10;
        v12 = v9->field_10;
        v13 = 1;
    }
    else
    {
        v11 = 0;
        v12 = 0;
        v13 = 0;
    }
    v0 = v13;
    v1 = 0;
    v2 = v10;
    v3 = v12;
    v4 = v13;
    v5 = 0;
    v6 = v10;
    v7 = v11;
    while (v0.next())
    {
        *(v14) + 16.save();
    }
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v9, (char)v14 & 1);
}
