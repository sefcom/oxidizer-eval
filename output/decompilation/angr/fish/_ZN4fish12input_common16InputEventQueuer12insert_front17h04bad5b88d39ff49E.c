long long fish::input_common::InputEventQueuer::insert_front(unsigned int a0, unsigned long long a1)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    unsigned long long v9;  // rbx

    v9 = a0.get_input_data_mut();
    v0.map(a1);
    v3.map(&v0);
    v0.size_hint(v3, v4);
    v9.reserve(*((long long *)&v0));
    v2 = v6;
    memcpy(&v1, &v5, 16);
    memcpy(&v0, &v3, 16);
    v7.next_back(&v0);
    if (*((long long *)&v7) != 9223372036854775812)
    {
        do
        {
            v9.push_front(&v7, &g_14db4d8);
            v7.next_back(&v0);
        } while (*((long long *)&v7) != 9223372036854775812);
    }
    return core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::drain::Drain<fish::input_common::CharEvent>>>(&v0);
}
