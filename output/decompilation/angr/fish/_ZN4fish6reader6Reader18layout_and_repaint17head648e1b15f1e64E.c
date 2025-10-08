void fish::reader::Reader::layout_and_repaint(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x108]
    unsigned long v2;  // rbp

    v0.make_layout_data(a0);
    v2 = a0 + 136;
    core::ptr::drop_in_place<fish::reader::LayoutData>(v2);
    memcpy(v2, &v0, 216);
    a0.paint_layout(a1, a2, a3, 0);
    return;
}
