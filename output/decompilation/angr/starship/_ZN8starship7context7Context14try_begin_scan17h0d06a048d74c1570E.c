long long starship::context::Context::try_begin_scan(struct_0 *a0, unsigned long long a1)
{
    void* v1;  // rdx

    if (((!v1 | (char)a1.dir_contents()) & 1))
    {
        a0->field_0 = 0;
    }
    else
    {
        a0->field_8 = 8;
        a0->field_10 = 0;
        a0->field_18 = 8;
        a0->field_20 = 0;
        a0->field_28 = 8;
        a0->field_30 = 0;
        a0->field_0 = v1;
    }
    return a0;
}
