long long fish::tinyexpr::State::expr(struct_0 *a0)
{
    char v0[1];  // [bp-0x21]
    unsigned long long v3;  // rax
    char v4;  // al
    unsigned long long v5;  // rax

    v3 = a0.term();
    if (a0->field_0 != 11)
        return v3;
    while (true)
    {
        v4 = a0->field_8;
        if (v4 >= 2)
            return (unsigned long long)v0;
        *(v0) = v4;
        a0.next_token();
        a0.term();
        v5 = (unsigned long long)v0.eval();
        if (a0->field_0 != 11)
            return v5;
    }
}
