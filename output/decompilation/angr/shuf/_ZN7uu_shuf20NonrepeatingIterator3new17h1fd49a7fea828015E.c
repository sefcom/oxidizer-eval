long long uu_shuf::NonrepeatingIterator::new(struct_0 *a0, int a1[17], unsigned long a2, void* a3)
{
    unsigned long v1;  // rax

    v1 = (long long)a1[0];
    if ((long long)a1[8] < v1)
    {
        a3 = 0;
    }
    else if (v1 || !(long long)a1[8].eq() || (char)a1[16] == 1)
    {
        a3 = ::0x4aca10::core::cmp::min_by(a3, (long long)a1[8] - v1 + 1);
    }
    a0.default();
    a0->field_50 = (long long)a1[16];
    a0->field_40 = (int128_t)a1[0];
    a0->field_38 = a2;
    a0->field_30 = a3;
    return a0;
}
