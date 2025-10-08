long long fish::env::var::EnvVar::is_empty(struct_1 *a0)
{
    unsigned long v1;  // rax

    if (a0->field_8 == 1)
    {
        return a0->field_0 & 0xffffffffffffff00 | !a0->field_0->field_20;
    }
    else if (a0->field_8)
    {
        return 0;
    }
    else
    {
        return v1 & 0xffffffffffffff00 | 1;
    }
}
