long long bat::input::InputDescription::set_kind(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    core::ptr::drop_in_place<regex::error::Error>(&a0->field_30);
    v3 = a1->field_10;
    a0->field_40 = v3;
    a0->field_30 = a1->field_0;
    return v3;
}
