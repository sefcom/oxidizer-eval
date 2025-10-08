long long firecracker::api_server::parsed_request::method_to_error(struct_0 *a0, char a1)
{
    char v0;  // [bp-0x46]
    char v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x18]
    unsigned long v7;  // r14
    unsigned long long v8;  // rsi
    char *v9;  // rdi
    unsigned long long v10;  // rdx
    int v11;  // xmm0

    v7 = &a0->field_a;
    if (!a1)
    {
        v8 = "GET request cannot have a body.";
        v9 = &v4;
        v10 = 31;
    }
    else if (a1 == 1)
    {
        v8 = "Empty PUT request.";
        v9 = &v4;
        v10 = 18;
    }
    else
    {
        v8 = "Empty PATCH request.";
        v9 = &v4;
        v10 = 20;
    }
    v9.to_vec(v8, v10);
    v3 = *((long long *)&v5);
    memcpy(&v1, &v4, 16);
    a0->field_8 = 769;
    v11 = *((int128_t *)&v0);
    *((unsigned long *)(v7 + 14)) = v2;
    *((unsigned long long *)(v7 + 22)) = v3;
    *((void*)v7) = v11;
    a0->field_0 = 1;
    return v3;
}
