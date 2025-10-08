long long fish::event::EventDescription::str_param1(struct_0 *a0)
{
    unsigned int v0;  // [bp-0x120]

    v0 = 59;
    if (!(*((char *)&v0 + ((a0->field_0 & 31) >> 3)) >> ((char)a0->field_0 & 31 & 7) & 1))
        return a0->field_10;
    return 0;
}
