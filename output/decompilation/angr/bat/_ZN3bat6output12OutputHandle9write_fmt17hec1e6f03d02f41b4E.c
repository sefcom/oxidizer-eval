long long bat::output::OutputHandle::write_fmt(struct_4 *a0, struct_3 *a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    if (a1->field_0 != 1)
    {
        v1 = a1->field_10->field_48(a1->field_8, a2);
        if (v1)
        {
            a0->field_0 = 0;
            a0->field_8 = v1;
            return a0;
        }
    }
    else if ((char)a1->field_10->field_28(a1->field_8, a2))
    {
        a0->field_0 = 1;
        return a0;
    }
    a0->field_0 = 13;
    return a0;
}
