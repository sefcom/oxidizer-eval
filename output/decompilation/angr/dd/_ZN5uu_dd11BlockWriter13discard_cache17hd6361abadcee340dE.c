void uu_dd::BlockWriter::discard_cache(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    if ((char)(((0 ^ a0->field_0) & (0 ^ -(a0->field_0))) >> 63))
        a0->field_8.discard_cache(a0->field_c, a1, a2);
    else
        a0->field_18.discard_cache(a0->field_1c, a1, a2);
    return;
}
