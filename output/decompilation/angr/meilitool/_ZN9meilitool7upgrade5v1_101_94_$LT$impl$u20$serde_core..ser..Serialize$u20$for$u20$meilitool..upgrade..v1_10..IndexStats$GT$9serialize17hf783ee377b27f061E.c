long long meilitool::upgrade::v1_10::_::<impl serde_core::ser::Serialize for meilitool::upgrade::v1_10::IndexStats>::serialize(unsigned long long a0[7], unsigned long long a1)
{
    char v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x27]
    unsigned int v2;  // [bp-0x24]
    unsigned long long v3;  // [bp-0x20]
    char v4;  // [bp-0x18]
    char v5;  // [bp-0x17]
    unsigned int v6;  // [bp-0x14]
    char v7;  // [bp-0x10]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v4.serialize_struct(a1, "IndexStats", 10, 6);
    if (v4 == 2)
        return *((long long *)&v7);
    v2 = v6;
    v1 = *((int *)&v5);
    v0 = v4;
    v3 = *((long long *)&v7);
    v9 = v0.serialize_field("number_of_documents", 19, a0[4]);
    if (v9)
        return v9;
    v10 = v0.serialize_field("database_size", 13, a0[5]);
    if (v10)
        return v10;
    v11 = v0.serialize_field("used_database_size", 18, a0[6]);
    if (v11)
        return v11;
    v12 = v0.serialize_field(a0 + 1);
    if (v12)
        return v12;
    v13 = v0.serialize_field(a0);
    if (v13)
        return v13;
    v14 = v0.serialize_field(&a0[2]);
    if (!v14)
    {
        v0.end();
        return 0;
    }
    return v14;
}
