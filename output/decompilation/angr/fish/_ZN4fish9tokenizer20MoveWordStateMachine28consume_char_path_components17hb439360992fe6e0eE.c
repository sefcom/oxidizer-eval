long long fish::tokenizer::MoveWordStateMachine::consume_char_path_components(struct_0 *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long v1;  // [bp-0x38]
    char v3;  // bpl
    unsigned long long v4;  // r15
    unsigned long long v5;  // r13

    v3 = a0->field_1;
    if (v3 == 6)
    {
        v4 = 0;
    }
    else
    {
        v5 = 0;
        v0 = a1 - 9;
        v1 = a1;
        do
        {
            if (((char)v5 & 1))
            {
                v4 = v5 & 4294967295;
                break;
            }
            if (v3 <= 5)
                goto (long long)(g_9f6434[v3] + (char *)&g_9f6434[0]);
            v5 &= 4294967295;
        } while (v3 != 6);
    }
    return (unsigned int)v4 & 0xffffff00 | (char)v4 & 1;
}
