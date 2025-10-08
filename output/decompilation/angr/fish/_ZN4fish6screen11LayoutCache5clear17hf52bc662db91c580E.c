void fish::screen::LayoutCache::clear(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x28]
    int v1;  // [bp-0x20]
    void* v2;  // [bp-0x10]
    unsigned long long v4;  // rdi
    void* v5;  // rsi
    void* v6;  // rax
    int v7;  // xmm0

    v4 = a0->field_8;
    v5 = a0->field_10;
    a0->field_10 = 0;
    core::ptr::drop_in_place<[widestring::utfstring::Utf32String]>(v4, v5);
    v6 = *((long long *)((char *)&a0->field_18 + 8));
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = 0;
    v7 = *((int128_t *)&(&a0->field_10)[1]);
    *((uint128_t *)&(&a0->field_10)[1]) = 0;
    v1 = v7;
    v2 = v6;
    v0 = &a0->field_28;
    core::ptr::drop_in_place<alloc::collections::linked_list::LinkedList<fish::screen::PromptCacheEntry,&alloc::alloc::Global>>(&v0);
    return;
}
