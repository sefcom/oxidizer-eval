long long fish::history::History::item_at_index(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    char v0;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb8]
    int v2;  // [bp-0xb0]
    int v3;  // [bp-0xa0]
    int v4;  // [bp-0x90]
    int v5;  // [bp-0x80], Other Possible Types: char
    char v6;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x68]
    int v8;  // [bp-0x60]
    int v9;  // [bp-0x50]
    int v10;  // [bp-0x40]
    char v11;  // [bp-0x30]
    unsigned long long v13;  // rax
    char v14;  // dl

    v13 = a1.imp();
    v6.item_at_index(v13 + 8, a2);
    if (v6 == 9223372036854775809)
    {
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        if (v6 == 0x8000000000000000)
        {
            v0.clone(v7);
        }
        else
        {
            memcpy(&v5, &v11, 16);
            v4 = v10;
            v3 = v9;
            v2 = v8;
            v0 = v6;
            v1 = v7;
        }
        *((void*)&a0->field_40) = v5;
        *((void*)&a0->field_30) = v4;
        *((void*)&a0->field_20) = v3;
        *((void*)&a0->field_10) = v2;
        a0->field_0 = v0;
        a0->field_8 = v1;
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v13, v14 & 1);
    return a0;
}
