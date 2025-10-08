long long fish::screen::LayoutCache::add_prompt_layout(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x70]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rax

    v2 = &a0->padding_0[24];
    v3 = v2.push_front(a1);
    if (a0->field_28 < 13)
        return v3;
    v0.pop_back(v2);
    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<fish::screen::PromptCacheEntry>>(&v0);
}
