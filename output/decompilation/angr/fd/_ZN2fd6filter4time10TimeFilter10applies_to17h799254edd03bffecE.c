long long fd::filter::time::TimeFilter::applies_to(struct_0 *a0, unsigned long a1, unsigned int a2)
{
    if (a0->field_0 != 1)
        return (a1 == a0->field_8 ? a2 < a0->field_10 : a1 < a0->field_8);
    return (a1 == a0->field_8 ? a0->field_10 < a2 : a0->field_8 < a1);
}
