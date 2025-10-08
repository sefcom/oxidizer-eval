long long uu_shuf::NonrepeatingIterator::new(struct_0 *a0, void* a1, unsigned long a2, void* a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long v3;  // rcx
    unsigned long v4;  // rax

    v0 = v2;
    v3 = *((long long *)a1);
    if ((long long)a1[8] < v3)
    {
        a3 = 0;
    }
    else if (v3 || (long long)a1[8] != -1 || ((char)a1[16] & 1))
    {
        a3 = a3.min((long long)a1[8] - v3 + 1);
    }
    a0.default();
    v4 = (long long)a1[16];
    a0->field_50 = v4;
    a0->field_40 = *((int128_t *)a1);
    a0->field_38 = a2;
    a0->field_30 = a3;
    return v4;
}
