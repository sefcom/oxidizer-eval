char fish::complete::CompletionEntry::remove_option(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0x19]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]

    v1 = a1;
    v2 = a2;
    v0 = a3;
    a0.retain(&v1, &v0);
    return !a0->field_10;
}
