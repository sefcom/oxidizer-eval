long long fish::pager::Pager::update_rendering(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x138]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v2 = a0.rendering_needs_update(a1);
    if (!(char)v2)
        return v2;
    v0.render(a0);
    core::ptr::drop_in_place<fish::pager::PageRendering>(a1);
    v3 = memcpy(a1, &v0, 288);
    a0->field_112 = 0;
    return v3;
}
