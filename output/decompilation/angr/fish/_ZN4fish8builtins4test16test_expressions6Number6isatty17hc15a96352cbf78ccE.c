long long fish::builtins::test::test_expressions::Number::isatty(unsigned long long a0, struct_0 *a1)
{
    unsigned long v1;  // xmm0lq

    if ((a0 & 4294967295) != a0 || !((CmpF(v1, 0) & 69) >> 6 & 1) || ((CmpF(v1, 0) & 69) >> 2 & 1))
        return 0;
    if ((unsigned int)a0 == 2)
    {
        a0 = 2;
        if (a1->field_28)
            return 0;
    }
    else if ((unsigned int)a0 == 1)
    {
        a0 = 1;
        if (a1->field_27)
            return 0;
    }
    else if (!(unsigned int)a0)
    {
        a0 = a1->field_20;
        if ((unsigned int)a0 == -1)
            return 0;
    }
    return fish::nix::isatty(a0);
}
