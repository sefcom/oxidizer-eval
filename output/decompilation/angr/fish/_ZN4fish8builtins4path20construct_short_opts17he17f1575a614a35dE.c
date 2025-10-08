long long fish::builtins::path::construct_short_opts(struct_0 *a0, char a1[62])
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v0.from_str("zZq", 3);
    if (a1[60])
    {
        v0.spec_extend("p", "-");
        v0.spec_extend("r", "f");
    }
    if (a1[59])
    {
        v0.spec_extend("t", "o");
        v0.spec_extend("f", "n");
    }
    if (a1[51])
        v0.push(118);
    if (a1[53])
        v0.push(82);
    if (a1[55])
        v0.push(114);
    if (a1[57])
        v0.push(117);
    if (a1[61])
        v0.push(69);
    v3 = *((long long *)&v1);
    a0->field_10 = v3;
    *((void*)&a0->field_0) = v0;
    return v3;
}
