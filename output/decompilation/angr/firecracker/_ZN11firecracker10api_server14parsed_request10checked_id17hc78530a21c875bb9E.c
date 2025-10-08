char firecracker::api_server::parsed_request::checked_id(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    char v3;  // al
    char v4;  // cl

    if (a2)
    {
        v0 = a1;
        v1 = a1 + a2;
        v3 = v0.try_fold().eq();
        v4 = 2;
        if (v3)
        {
            a0->field_8 = a1;
            a0->field_10 = a2;
            v4 = 5;
        }
    }
    a0->field_0 = v4;
    return v3;
}
