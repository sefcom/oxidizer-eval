long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(struct_0 *a0)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rax

    if (a0->field_38 != 1)
        return 0;
    v6 = v8;
    v0.serialize(a0->field_8, a0->field_10);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v1;
    v3 = v0;
    v4 = v1;
    v5 = v2;
    v9 = zoxide::util::write(&a0->padding_18, &v3).context("could not write to databasesrc/db/mod.rs", 27);
    if (!v9)
    {
        a0->field_38 = 0;
        return 0;
    }
    return v9;
}
