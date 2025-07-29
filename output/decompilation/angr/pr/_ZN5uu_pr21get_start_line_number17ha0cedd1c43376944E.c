long long uu_pr::get_start_line_number(struct_0 *a0)
{
    unsigned long v1;  // rdi

    v1 = &a0->field_d8;
    if ((char)(((0 ^ a0->field_d8) & (0 ^ -(a0->field_d8))) >> 63))
        v1 = 0;
    return v1.map_or();
}
