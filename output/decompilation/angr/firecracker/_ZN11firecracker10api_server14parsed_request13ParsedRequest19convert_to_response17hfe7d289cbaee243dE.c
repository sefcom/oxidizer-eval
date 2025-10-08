long long firecracker::api_server::parsed_request::ParsedRequest::convert_to_response(void* a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x110]
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    unsigned long v5;  // [bp-0xe8]
    char *v6;  // [bp-0xd0]
    unsigned long long v7;  // [sp-0xc8]
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    char *v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0xa0]
    void* v12;  // [bp-0x98]
    unsigned long long v14;  // rax
    char v15;  // bpl
    unsigned long long v16;  // rdi
    unsigned long long v17;  // rax

    if (a1->field_0 == 13)
    {
        v5 = &a1->field_8;
        v14 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0);
        if (a1->field_8 == 14)
        {
            v15 = 7;
            if (!v14)
                goto LABEL_5542ee;
            v6 = &v5;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = &g_7a3710;
            v9 = 1;
            v12 = 0;
            v10 = &v6;
            v11 = 1;
            v16 = &g_7a3760;
            goto LABEL_5542ac;
        }
        else
        {
            v15 = 3;
            if (v14)
            {
                v6 = &v5;
                v7 = <&T as core::fmt::Display>::fmt;
                v8 = &g_7a3720;
                v9 = 1;
                v12 = 0;
                v10 = &v6;
                v11 = 1;
                v16 = &g_7a3778;
LABEL_5542ac:
                v0 = "firecracker::api_server::parsed_request";
                v1 = 39;
                v2 = "firecracker::api_server::parsed_request";
                v3 = 39;
                v4 = log::__private_api::loc(v16);
                log::__private_api::log_impl(&v8, 1, &v0);
            }
        }
LABEL_5542ee:
        v8.new(1, v15);
        v0.spec_to_string(v5);
        v6.json_fault_message(&v0);
        v8.set_body(&v6);
        return memcpy(a0, &v8, 144);
    }
    v17 = a1->field_0 - 5;
    if (v17 >= 8)
        v17 = 3;
    goto (long long)(g_432b24[v17] + (char *)&g_432b24[0]);
}
