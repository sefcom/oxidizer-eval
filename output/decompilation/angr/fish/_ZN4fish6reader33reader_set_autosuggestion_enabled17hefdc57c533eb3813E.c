long long fish::reader::reader_set_autosuggestion_enabled(unsigned long long a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    void* v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    char v6[2126];  // rax
    char v7[2126];  // rbx
    unsigned long long v8;  // rax

    v6 = fish::reader::current_data();
    if (!v6)
        return v6;
    v7 = v6;
    v8 = fish::reader::check_bool_var(a0, a1->field_18, "f", 27, 1);
    if ((char)v8 == v7[1271])
        return v8;
    v7[1271] = v8;
    v7[2125] = 1;
    v1 = 0;
    v2 = 4;
    v3 = 0;
    v4 = 61;
    v0 = 0x8000000000000000;
    return v7[1328].queue_char(&v0);
}
