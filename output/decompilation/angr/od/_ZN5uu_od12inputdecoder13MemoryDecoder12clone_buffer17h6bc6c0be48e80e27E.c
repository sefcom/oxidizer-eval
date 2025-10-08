long long uu_od::inputdecoder::MemoryDecoder::clone_buffer(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    a1.clone_from(a0->field_0->field_8, a0->field_0->field_10);
    return a1.resize(a0->field_8);
}
