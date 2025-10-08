long long just::scope::Scope::value(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    struct_0 *v1;  // rax

    v1 = a0[0].get(a0[1], a1, a2);
    if (v1)
    {
        return v1->field_8;
    }
    else if (a0[3])
    {
        return a0[3].value(a1, a2);
    }
    else
    {
        return 0;
    }
}
