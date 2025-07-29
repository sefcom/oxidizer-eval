long long uu_wc::Input::as_borrowed(struct_0 *a0, struct_0 *a1)
{
    if (a1->field_0 != 9223372036854775809)
    {
        *((int128_t *)&a0->field_8) = *((int128_t *)&a1->field_8);
        a0->field_0 = 0x8000000000000000;
        return 0x8000000000000000;
    }
    a0->field_8 = a1->field_8;
    a0->field_0 = 9223372036854775809;
    return 9223372036854775809;
}
