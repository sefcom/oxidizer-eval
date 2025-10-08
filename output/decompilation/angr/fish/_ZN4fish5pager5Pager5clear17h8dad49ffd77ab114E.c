void fish::pager::Pager::clear(struct_0 *a0)
{
    unsigned long long v1;  // rdi
    void* v2;  // rsi
    unsigned long long v3;  // rdi
    void* v4;  // rsi

    v1 = a0->field_b8;
    v2 = a0->field_c0;
    a0->field_c0 = 0;
    core::ptr::drop_in_place<[fish::pager::PagerComp]>(v1, v2);
    v3 = a0->field_a0;
    v4 = a0->field_a8;
    a0->field_a8 = 0;
    core::ptr::drop_in_place<[fish::pager::PagerComp]>(v3, v4);
    a0->field_d8 = 0;
    a0->field_113 = 0;
    a0->field_0 = 0;
    a0->field_110 = 0;
    a0->field_f0 = 0;
    a0->field_108 = 0;
    return;
}
