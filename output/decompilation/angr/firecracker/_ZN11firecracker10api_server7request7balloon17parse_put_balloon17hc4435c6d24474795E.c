long long firecracker::api_server::request::balloon::parse_put_balloon(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xd0], Other Possible Types: unsigned int
    char v1;  // [bp-0xcc]
    unsigned long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    void* v5;  // [bp-0xb0]

    v3 = a1;
    v4 = a2;
    v5 = 0;
    serde_json::de::from_trait(&v0, &v3, a2);
    if (v0 != 1)
    {
        v4 = *((long long *)&v1);
        v3 = 25;
        a0->field_8.new_sync(&v3);
        a0->field_0 = 0;
        return 0;
    }
    a0->field_8 = 4;
    a0->field_10 = v2;
    a0->field_0 = 1;
    return 1;
}
