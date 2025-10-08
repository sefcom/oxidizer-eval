long long fish::ast::Populator::chomp_extras(struct_0 *a0, unsigned long long *a1)
{
    char v0;  // [bp-0x40]
    char v2;  // al
    char v3;  // bpl
    unsigned long v4;  // rbx
    char v5[14];  // rax
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rdx

    v2 = a0.list_kind_chomps_semis(a1);
    v3 = a0.list_kind_chomps_newlines(a1);
    v5 = a0->padding_0[48].peek(0);
    if (v2)
    {
        if (v3)
        {
            if (v5[9] == 10)
            {
                while (true)
                {
                    if (v5[13])
                    {
                        v0.pop(v4);
                    }
                    else if (!v5[13])
                    {
                        v0.pop(v4);
                        if ((a0->field_db & 32))
                            a0.push((unsigned int)v0.range(), v7, &g_14c52e8);
                    }
                    else
                    {
                        return v5;
                    }
                    v5 = v4.peek(0);
                    if (v5[9] != 10)
                        return v5;
                }
            }
            else
            {
                return v5;
            }
        }
        else
        {
            if (v5[9] == 10)
            {
                while (!v5[13])
                {
                    v0.pop(v4);
                    if ((a0->field_db & 32))
                        a0.push((unsigned int)v0.range(), v9, &g_14c52e8);
                    v5 = v4.peek(0);
                    if (v5[9] != 10)
                        return v5;
                }
                return v5;
            }
            else
            {
                return v5;
            }
        }
    }
    else
    {
        if (!v3)
        {
            return v5;
        }
        else if (v5[9] == 10)
        {
            while (v5[13] == 1)
            {
                v0.pop(v4);
                v5 = v4.peek(0);
                if (v5[9] != 10)
                    return v5;
            }
            return v5;
        }
        else
        {
            return v5;
        }
    }
}
