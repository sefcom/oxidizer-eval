long long fish::reader::Reader::color_suggest_repaint_now(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (!a0->field_4f0)
    {
        a0.update_autosuggestion(a1);
        a0.super_highlight_me_plenty(a1);
    }
    v3 = a0.is_repaint_needed(0, a2);
    if ((char)v3)
        v3 = (unsigned long long)a0.layout_and_repaint(a1, "t", 8);
    a0->field_84d = 0;
    return v3;
}
