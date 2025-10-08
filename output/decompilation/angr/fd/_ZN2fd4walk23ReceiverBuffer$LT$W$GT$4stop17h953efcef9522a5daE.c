long long fd::walk::ReceiverBuffer<W>::stop(struct_1 *a0)
{
    unsigned long long v1;  // rax

    if (!a0->field_80)
    {
        alloc::slice::stable_sort(a0->field_40, a0->field_48);
        v1 = a0.stream();
        if ((char)v1 != 6)
            return v1;
    }
    if (!a0->field_60->field_1e4)
        return v1 & 0xffffffffffffff00 | 2;
    return (v1 & 0xffffffffffffff00 | 2) & 0xffffffffffffff00 | a0->field_78;
}
