long long starship::segment::Segment::width_graphemes(struct_0 *a0)
{
    if (a0->field_0 > 1)
        return 0;
    return a0->field_10.width_graphemes(a0->field_18);
}
