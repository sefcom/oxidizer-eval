long long starship::modules::time::is_inside_time_range(unsigned int a0, unsigned int a1, unsigned int a2[3], struct_0 *a3)
{
    unsigned int v1;  // r8d
    char v2;  // r9b

    if (a2[0] != 1)
        return (a0 == a3->field_4 ? a1 < a3->field_8 : a0 < a3->field_4);
    v1 = a2[1];
    if (!(a3->field_0 & 1))
        return (a0 == v1 ? a2[2] < a1 : v1 < a0);
    v2 = (v1 != a0 ? v1 < a0 : a2[2] < a1);
    if ((v1 == a3->field_4 ? a2[2] < a3->field_8 : v1 < a3->field_4))
    {
        if (!v2)
            return 0;
    }
    else
    {
        if (v2)
            return 1;
    }
    return (a0 == a3->field_4 ? a1 < a3->field_8 : a0 < a3->field_4);
}
