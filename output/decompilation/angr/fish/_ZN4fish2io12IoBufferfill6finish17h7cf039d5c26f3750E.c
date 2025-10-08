long long fish::io::IoBufferfill::finish(unsigned long long a0, struct_0 *a1)
{
    struct_0 *v0;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3[2];  // rax
    unsigned int v4;  // eax

    v0 = v2;
    v0 = a1;
    v3 = fish::io::fd_monitor();
    v4 = v3.remove_item(a1->field_18);
    a0.complete_and_take_buffer(&a1->padding_0[16], v4);
    core::ptr::drop_in_place<alloc::sync::Arc<fish::io::IoBufferfill>>(&v0);
    return a0;
}
