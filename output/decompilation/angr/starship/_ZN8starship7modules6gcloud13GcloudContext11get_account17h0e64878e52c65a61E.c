long long starship::modules::gcloud::GcloudContext::get_account(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned short v4;  // [bp-0x28]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    void* v8;  // rax

    v6 = a1.get_config();
    if (v6)
    {
        v6 = v6.section("coreUSR1CharV6_0kndalimbnkoosundTotou128for<", 4);
        if (v6)
        {
            v6 = v6.get("accountprojectcomputeconfig_", 7);
            if (v6)
            {
                v3.into_searcher(64, v6, v7);
                v1 = 0;
                v2 = v7;
                v4 = 1;
                v0 = 1;
                v6 = v1.next();
                if (v6)
                {
                    v0 = 0;
                    v8 = v1.get_end();
                    a0->field_0 = v6;
                    a0->field_8 = v7;
                    a0->field_10 = v8;
                    a0->field_18 = v7;
                    return v8;
                }
            }
        }
    }
    a0->field_0 = 0;
    return v6;
}
