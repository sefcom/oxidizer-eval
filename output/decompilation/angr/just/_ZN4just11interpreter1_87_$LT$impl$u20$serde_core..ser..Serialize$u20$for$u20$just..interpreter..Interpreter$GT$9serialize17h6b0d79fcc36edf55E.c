long long just::interpreter::_::<impl serde_core::ser::Serialize for just::interpreter::Interpreter>::serialize(unsigned long long a0[6], unsigned long long a1)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x10]
    char v3;  // cl
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v0.serialize_struct(a1, 2);
    v3 = v1;
    if (v1 == 3)
        return v0;
    v4 = v0.serialize_field(a0[1], a0[2]);
    if (v4)
        return v4;
    v5 = v0.serialize_field(a0[4], a0[5]);
    if (!v5)
        return v0.end(*((int *)&v1));
    return v5;
}
