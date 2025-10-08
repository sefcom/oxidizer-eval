long long fish::env_dispatch::VarDispatchTable::dispatch(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    struct_0 *v1;  // rax

    v1 = a0.get_inner(a1, a2);
    if (!v1)
    {
        return 0;
    }
    else if ((v1->field_10 & 1))
    {
        goto v1->field_18;
    }
    else
    {
        goto v1->field_18;
    }
}
