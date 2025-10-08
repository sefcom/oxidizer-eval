long long fish::wait_handle::WaitHandleStore::get_list(unsigned long long a0, struct_2 *a1)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]

    v0 = a1->field_18;
    v1 = a1->field_30->field_10;
    v2 = a1->field_38->field_8;
    a0.collect(&v0);
    return a0;
}
