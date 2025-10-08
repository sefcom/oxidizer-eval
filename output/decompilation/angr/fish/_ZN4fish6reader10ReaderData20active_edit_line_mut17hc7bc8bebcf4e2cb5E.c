long long fish::reader::ReaderData::active_edit_line_mut(struct_0 *a0)
{
    void* v1;  // rax

    v1 = (!(a0->field_271 & 1) ? 0 : 368);
    if (!a0->field_478 && !a0->field_160)
        v1 = 0;
    return v1 + a0;
}
