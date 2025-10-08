long long uu_dd::BlockWriter::flush(struct_0 *a0, unsigned long long *a1)
{
    if (!((char)(((0 ^ *(a1)) & (0 ^ -(*(a1)))) >> 63)))
        return a0.flush(a1);
    a0->field_0 = 0;
    a0->field_10 = 0;
    a0->field_20 = 0;
    return 0;
}
