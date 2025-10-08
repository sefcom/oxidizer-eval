long long fish::reader::ReaderData::clear_pager(struct_0 *a0)
{
    unsigned long long v1;  // rax

    a0->padding_0[352].clear();
    a0->field_478 = 0;
    v1 = a0.clear(1);
    a0->field_850 = 2;
    return v1;
}
