long long fish::tokenizer::variable_assignment_equals_pos(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    void* v2;  // [bp-0x20]
    unsigned int v4;  // edx
    unsigned int v5;  // edx

    v0 = a0;
    v1 = a0 + a1 * 4;
    v2 = 0;
    v0.next();
    if (v4 == 0x110000)
    {
        return 0;
    }
    else if (fish::common::valid_var_name_char(v4))
    {
        v0.next();
        switch (v4)
        {
        case 61:
            return 1;
        case 1114112:
            return 0;
        default:
            while (true)
            {
                if (!fish::common::valid_var_name_char(v5))
                    return 0;
                v0.next();
                if (v4 == 61)
                    break;
                v5 = v4;
                if (v5 == 0x110000)
                    return 0;
            }
        }
    }
    else
    {
        return 0;
    }
}
