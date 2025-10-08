long long just::parameter::_::<impl serde_core::ser::Serialize for just::parameter::Parameter>::serialize(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x10]
    char v3;  // cl
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v0.serialize_struct(a1, 4);
    v3 = v1;
    if (v1 == 3)
        return v0;
    v4 = v0.serialize_field(a0);
    if (v4)
        return v4;
    v5 = v0.serialize_field("exportvalue", 6, (unsigned long long)a0->field_c8);
    if (v5)
        return v5;
    v6 = v0.serialize_field(a0->field_c8[1]);
    if (v6)
        return v6;
    v7 = v0.serialize_field(&a0->padding_0[128]);
    if (!v7)
        return v0.end(*((int *)&v1));
    return v7;
}
