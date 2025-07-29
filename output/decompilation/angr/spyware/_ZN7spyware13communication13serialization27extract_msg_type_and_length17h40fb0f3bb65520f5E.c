long long spyware::communication::serialization::extract_msg_type_and_length(unsigned int a0)
{
    unsigned int v0;  // [bp-0x34]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    void* v3;  // [bp-0x20]
    char v4;  // [bp-0x18]

    v0 = a0;
    v1 = v0.index();
    v2 = 4;
    v3 = 0;
    v4.read_u32(&v1);
    return (unsigned int)v4.unwrap();
}
