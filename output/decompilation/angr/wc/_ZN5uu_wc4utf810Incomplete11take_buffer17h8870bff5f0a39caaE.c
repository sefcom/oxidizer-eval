long long uu_wc::utf8::Incomplete::take_buffer(struct_0 *a0)
{
    unsigned long v1;  // rdi

    v1 = a0->field_4;
    a0->field_4 = 0;
    return v1.index(a0, 4, &g_59f5f0);
}
