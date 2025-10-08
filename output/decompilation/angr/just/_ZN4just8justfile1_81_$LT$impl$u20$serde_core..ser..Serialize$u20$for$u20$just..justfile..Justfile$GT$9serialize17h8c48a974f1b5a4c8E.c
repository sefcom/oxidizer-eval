long long just::justfile::_::<impl serde_core::ser::Serialize for just::justfile::Justfile>::serialize(unsigned long long a0[15], unsigned long long a1)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x10]
    char v3;  // cl
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v0.serialize_struct(a1, 11);
    v3 = v1;
    if (v1 == 3)
        return v0;
    v4 = v0.serialize_field(&a0[5 + 2]);
    if (v4)
        return v4;
    v5 = v0.serialize_field(&a0[5 + 5]);
    if (v5)
        return v5;
    v6 = v0.serialize_field(&a0[5 + 8]);
    if (v6)
        return v6;
    v7 = v0.serialize_field("docexit-messagegroupmacosno-cdno-exit-messageopenbsdpositional-argumentsprivatescriptwindowsexportvalue", 3, &a0[1 + 3]);
    if (v7)
        return v7;
    v8 = v0.serialize_field(a0[1], a0[2]);
    if (v8)
        return v8;
    v9 = v0.serialize_field(&a0[5 + 9]);
    if (v9)
        return v9;
    v10 = v0.serialize_field(&a0[5 + 12]);
    if (v10)
        return v10;
    v11 = v0.serialize_field(&a0[1 + 6]);
    if (v11)
        return v11;
    v12 = v0.serialize_field(a0[10], a0[11]);
    if (v12)
        return v12;
    v13 = v0.serialize_field(&a0[4 + 11]);
    if (v13)
        return v13;
    v14 = v0.serialize_field(a0[13], a0[14]);
    if (!v14)
        return v0.end(*((int *)&v1));
    return v14;
}
