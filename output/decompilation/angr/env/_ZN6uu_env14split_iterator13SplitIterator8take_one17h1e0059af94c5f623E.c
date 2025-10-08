long long uu_env::split_iterator::SplitIterator::take_one(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    char v3;  // dl

    v1 = a1.take_one();
    v2 = 12;
    if (v3 != 2)
    {
        a0->field_8 = v1;
        a0->field_10 = v1;
        a0->field_18 = v3 & 1;
        v2 = 11;
    }
    a0->field_0 = v2;
    return v1;
}
