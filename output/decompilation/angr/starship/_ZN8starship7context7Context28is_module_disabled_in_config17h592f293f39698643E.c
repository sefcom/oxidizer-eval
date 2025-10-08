long long starship::context::Context::is_module_disabled_in_config(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long *v1;  // rax
    struct_0 *v2;  // rax

    v1 = a0 + 488.get_module_config(a1, a2);
    if (!v1)
    {
        return 0;
    }
    else if (*(v1) > 9223372036854775813)
    {
        v2 = v1.get("disabled", 8, 9223372036854775813);
        if (!v2)
        {
            return 0;
        }
        else if (v2->field_0 == 9223372036854775811)
        {
            return v2->field_8;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
