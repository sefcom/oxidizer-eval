long long bat::output::OutputType::handle(struct_2 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rbx

    v2 = a1->field_0 - 3;
    if (v2 >= 3)
        v2 = 1;
    if (v2)
    {
        if (v2 == 1)
        {
            v3 = &g_acd888;
        }
        else
        {
            a1 = &a1->padding_8;
            v3 = &g_ace890;
LABEL_83d3f6:
            v2 = 0;
        }
        a0->field_8 = v2;
        a0->field_10 = a1;
        a0->field_18 = v3;
        a0->field_0 = 13;
        return a0;
    }
    if (a1->field_18 == -1)
    {
        v0 = v4;
        a0.from("Could not open stdin for pagersrc/output.rs", 30);
        return a0;
    }
    a1 = &a1->field_18;
    v3 = &g_ace840;
    goto LABEL_83d3f6;
}
