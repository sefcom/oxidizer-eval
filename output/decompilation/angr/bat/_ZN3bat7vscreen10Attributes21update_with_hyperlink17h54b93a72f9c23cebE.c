long long bat::vscreen::Attributes::update_with_hyperlink(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    v1 = a1.equal(a2, "8;;", 3);
    if (!(char)v1)
    {
        a0->field_100 = 0;
        return a0->padding_0[240].spec_extend(a1, a2 + a1);
    }
    a0->field_100 = 0;
    return v1;
}
