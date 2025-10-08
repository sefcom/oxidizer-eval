void just::attribute::_::<impl serde_core::ser::Serialize for just::attribute::Attribute>::serialize(unsigned long long *a0, unsigned long a1)
{
    unsigned long long v1;  // rcx

    v1 = 9223372036854775807 + *(a0);
    if (v1 >= 20)
        v1 = 16;
    goto (long long)(g_46aee0[v1] + (char *)&g_46aee0[0]);
}
