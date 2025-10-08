void fish::io::SeparatedBuffer::clear(struct_0 *a0)
{
    unsigned long long v1;  // rdi
    void* v2;  // rsi

    v1 = a0->field_8;
    v2 = a0->field_10;
    a0->field_10 = 0;
    core::ptr::drop_in_place<[fish::io::BufferElement]>(v1, v2);
    a0->field_20 = 0;
    a0->field_28 = 0;
    return;
}
