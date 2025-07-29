long long uu_pr::get_columns(struct_0 *a0)
{
    unsigned long v1;  // rdi

    v1 = &a0->field_100;
    if ((char)(((0 ^ a0->field_100) & (0 ^ -(a0->field_100))) >> 63))
        v1 = 0;
    return v1.map_or();
}
