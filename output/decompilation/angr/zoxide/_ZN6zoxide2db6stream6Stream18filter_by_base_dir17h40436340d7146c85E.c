char zoxide::db::stream::Stream::filter_by_base_dir(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    if (!((char)(((0 ^ a0->field_30) & (0 ^ -(a0->field_30))) >> 63)))
        return a1.starts_with(a2, &a0->field_30);
    return 1;
}
