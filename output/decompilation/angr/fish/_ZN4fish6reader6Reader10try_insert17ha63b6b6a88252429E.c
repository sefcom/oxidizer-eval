void fish::reader::Reader::try_insert(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3, unsigned int a4, unsigned long long a5)
{
    unsigned long v1;  // rbp

    v1 = a2->field_32;
    if (!((char)v1 & 2) || fish::reader::reader_can_replace(a3, a4, v1))
        a0.completion_insert(a1, a2->field_8, a2->field_10, a5, v1 & 65535, 1);
    core::ptr::drop_in_place<fish::complete::Completion>(a2);
    return;
}
