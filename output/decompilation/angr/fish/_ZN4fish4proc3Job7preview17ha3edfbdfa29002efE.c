long long fish::proc::Job::preview(unsigned long long a0, struct_2 *a1)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rdx

    if (!a1->field_20)
    {
        a0.to_vec(4, 0);
        return a0;
    }
    if (a1->field_18->field_58)
    {
        v2 = a1->field_18->field_50->field_8;
        v3 = a1->field_18->field_50[1].padding_0;
    }
    else
    {
        v2 = "n";
        v3 = 4;
    }
    v0.to_vec(v2, v3);
    a0.add(&v0, ".", 3);
    return a0;
}
