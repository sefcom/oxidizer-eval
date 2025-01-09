long long uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    char v3;  // dl

    v1 = uu_env::string_expander::StringExpander::take_one::haa545a6e4e1a581c(a1);
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
