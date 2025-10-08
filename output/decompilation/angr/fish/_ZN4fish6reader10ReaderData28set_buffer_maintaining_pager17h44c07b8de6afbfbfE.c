long long fish::reader::ReaderData::set_buffer_maintaining_pager(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x40]

    v0.to_vec(a1, a2);
    a0.replace_substring(0, 0, a0->field_30, &v0);
    a0.update_buff_pos(0, 1, a3.min(a2));
    return a0 + 27.reset();
}
