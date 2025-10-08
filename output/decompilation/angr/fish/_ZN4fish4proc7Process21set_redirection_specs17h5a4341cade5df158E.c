long long fish::proc::Process::set_redirection_specs(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    core::ptr::drop_in_place<alloc::vec::Vec<fish::redirection::RedirectionSpec>>(&a0->field_60);
    v3 = a1->field_10;
    a0->field_70 = v3;
    a0->field_60 = a1->field_0;
    return v3;
}
