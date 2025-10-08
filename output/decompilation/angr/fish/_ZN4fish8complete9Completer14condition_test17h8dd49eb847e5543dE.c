long long fish::complete::Completer::condition_test(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    struct_0 *v2;  // rax
    unsigned int v3;  // ebp

    if (!a2)
    {
        return vvar_21{reg 56} & 0xffffff00 | 1;
    }
    else if (a0->field_38->field_0 == 1)
    {
        return 0;
    }
    else
    {
        v2 = a0 + 1.get_inner(a1, a2);
        if (!v2)
        {
            v3 = !(int)fish::exec::exec_subshell(a1, a2, a0->field_38->field_8, 0, 0);
            v0.to_vec(a1, a2);
            a0 + 1.insert(&v0, v3);
            return v3;
        }
        return v2->field_18;
    }
}
