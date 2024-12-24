long long uu_env::split_iterator::SplitIterator::take_one::h3b27d33213b316aa(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    char v3;  // dl

    v1 = uu_env::string_expander::StringExpander::take_one::h365323f077a79042(a1);
    v2 = 8;
    if (v3 != 2)
    {
        a0->field_8 = v1;
        a0->field_10 = v1;
        a0->field_18 = v3 & 1;
        v2 = 5;
    }
    a0->field_0 = v2;
    return v1;
}
