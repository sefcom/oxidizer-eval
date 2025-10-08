long long fish::reader::Reader::can_autosuggest(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    char v3;  // al
    unsigned long long v4[7];  // rdx

    v3 = a0.active_edit_line();
    if (a0->field_4f7 != 1)
    {
        return 0;
    }
    else if (a0->field_844)
    {
        return 0;
    }
    else if (((a0->field_6f8 | v3) & 1))
    {
        return 0;
    }
    else
    {
        v0 = v4[5];
        v1 = v4[5] + v4[6] * 4;
        return v0.try_fold().eq(1);
    }
}
