long long fish::reader::ReaderData::clear_transient_edit(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned int v3;  // rcx
    unsigned long long v4;  // rax
    unsigned long v5;  // rax

    if (a0->field_850 == 2)
        return v5;
    v0 = v2;
    a0.undo(0);
    v4 = a0.update_buff_pos(0, 0, v3);
    a0->field_850 = 2;
    return v4;
}
