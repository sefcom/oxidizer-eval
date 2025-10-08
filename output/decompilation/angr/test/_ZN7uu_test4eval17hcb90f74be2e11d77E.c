long long uu_test::eval(struct_0 *a0, unsigned long long a1[3])
{
    unsigned long v1;  // rcx

    if (!a1[2])
    {
        a0->field_8 = 0;
        a0->field_0 = 7;
        return a0;
    }
    v1 = a1[2] - 1;
    a1[2] = v1;
    goto (long long)(g_417ed8[*((long long *)(a1[1] + v1 * 40))] + (char *)&g_417ed8[0]);
}
