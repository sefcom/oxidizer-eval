void fish::reader::Reader::highlight_complete(struct_0 *a0, unsigned long long a1, unsigned long long a2[6])
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    void* v2;  // [bp-0x58]
    unsigned long v4;  // r12
    unsigned long v5;  // r13

    fish::threads::assert_is_main_thread();
    a0->field_798 = 0;
    v4 = a0->field_30;
    if ((char)a2[4].equal(a2[5], a0->field_28, v4))
    {
        v0 = a2[2];
        v1 = v4;
        if (a2[2] != v4)
        {
            v2 = 0;
            core::panicking::assert_failed(0, &v0, &v1, &v2, &g_14e0bc0); /* do not return */
        }
        v5 = a2[1];
        if (!(char)a0.is_repaint_needed(v5, v4))
            goto LABEL_1404df3;
        a0.set_colors(a2);
        a0.layout_and_repaint(a1, "h", 9);
    }
    else
    {
        v5 = a2[1];
LABEL_1404df3:
        core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(a2[0], v5);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&a2[3]);
    return;
}
