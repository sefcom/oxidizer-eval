long long fish::tinyexpr::State::factor(struct_0 *a0)
{
    unsigned long long v1;  // rax
    double v2;  // xmm0lq

    v1 = a0.power();
    if (a0->field_0 != 11)
    {
        return v1;
    }
    else if (a0->field_8 == 4)
    {
        a0.next_token();
        a0.factor();
        return pow(v2, v2);
    }
    else
    {
        return v1;
    }
}
