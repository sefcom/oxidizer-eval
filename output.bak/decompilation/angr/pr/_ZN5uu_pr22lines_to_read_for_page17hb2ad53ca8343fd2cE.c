long long uu_pr::lines_to_read_for_page::hb2ad53ca8343fd2c(struct_0 *a0)
{
    unsigned long long v2;  // rdx

    v2 = 1;
    if (a0->field_100 != 0x8000000000000000)
        v2 = a0->field_120;
    return v2 * (a0->field_138 >> (a0->field_140 & 63));
}
