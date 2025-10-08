long long fish::input::<impl fish::input_common::InputEventQueuer for fish::reader::Reader>::paste_start_buffering(struct_0 **a0)
{
    unsigned long long v0;  // [bp-0x38]
    void* v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    void* v3;  // [bp-0x20]
    char v4;  // [bp-0x18]
    struct_0 *v6;  // rbx

    v6 = *(a0);
    core::ptr::drop_in_place<terminfo::expand::Parameter>(v6->field_580, v6->field_588);
    v6->field_580 = 0;
    v6->field_588 = 1;
    v6->field_590 = 0;
    v1 = 0;
    v2 = 4;
    v3 = 0;
    v4 = 89;
    v0 = 0x8000000000000000;
    return v6.push_front(&v0);
}
