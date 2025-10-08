long long bat::input::InputDescription::summary(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long
    char v1;  // [bp-0x18]

    if ((char)(((0 ^ a1->field_48) & (0 ^ -(a1->field_48))) >> 63))
    {
        bat::input::InputDescription::summary::{{closure}}(a0, a1);
    }
    else
    {
        v0.clone(&a1->field_48);
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        a0->field_0 = v0;
    }
    return a0;
}
