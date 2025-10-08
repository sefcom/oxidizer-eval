long long fish::io::IoChain::clear(struct_0 *a0)
{
    unsigned long long v1;  // rax
    void* v2;  // rsi

    v1 = a0->field_8;
    v2 = a0->field_10;
    a0->field_10 = 0;
    return core::ptr::drop_in_place<[alloc::sync::Arc<dyn fish::io::IoData>]>(v1, v2);
}
