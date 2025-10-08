long long fish::builtins::argparse::populate_option_strings(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x60]
    char v3;  // [bp-0x5c]
    char v4;  // [bp-0x58]
    unsigned long long v6;  // rax
    struct_0 *v7;  // rdx
    struct_0 *v8;  // r13
    struct_0 *v9;  // r13
    char v10;  // al
    unsigned int v11;  // eax
    unsigned long v12;  // rax
    unsigned long long v13;  // rax

    v4.iter(a0 + 120);
    v6 = v4.next();
    if (!v6)
        return v6;
    do
    {
        v9 = v8;
        v10 = v9->field_44;
        if (v9->field_44)
        {
            a1.push(v9->field_40);
            v10 = v9->field_44;
        }
        if ((v10 & 1))
        {
            v11 = v9->field_47;
            if (!v11)
                goto LABEL_133a5c0;
            if (v11 == 1)
            {
                a1.extend(":[andbeginbgblockbreakbreakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", "[andbeginbgblockbreakbreakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP");
                goto LABEL_133a5c0;
            }
            else
            {
                a1.extend("::", &g_9ff94a);
                v12 = v9->field_20;
                if (!v9->field_20)
                    continue;
LABEL_133a5c9:
                v0 = v9->field_18;
                v1 = v12;
                v3 = v9->field_47;
                v2 = v9->field_40;
                a2.push(&v0);
            }
        }
        else
        {
LABEL_133a5c0:
            v12 = v9->field_20;
            if (!v9->field_20)
                continue;
            goto LABEL_133a5c9;
        }
        v13 = v4.next();
        v8 = v7;
    } while (v13);
    return v13;
}
