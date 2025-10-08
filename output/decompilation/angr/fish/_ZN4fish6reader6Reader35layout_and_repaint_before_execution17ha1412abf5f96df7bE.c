void fish::reader::Reader::layout_and_repaint_before_execution(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0xf8]
    unsigned long v2;  // r12

    v0.make_layout_data(a0);
    v2 = a0 + 136;
    core::ptr::drop_in_place<fish::reader::LayoutData>(v2);
    memcpy(v2, &v0, 216);
    a0.paint_layout(a1, "p", 18, 1);
    return;
}
