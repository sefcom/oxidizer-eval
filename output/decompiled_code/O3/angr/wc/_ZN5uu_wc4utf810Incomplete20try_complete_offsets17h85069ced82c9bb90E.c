long long uu_wc::utf8::Incomplete::try_complete_offsets::h85069ced82c9bb90(struct_0 *a0, void* a1, unsigned long a2)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x27]
    unsigned long long v5;  // r12
    unsigned long v7;  // 4096
    unsigned long long v8;  // r15
    unsigned long v10;  // r14
    unsigned long long v11;  // r14
    unsigned long long v12;  // r14

    v5 = a0->field_4;
    if (v5 > 4)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    memcpy(&a0->padding_0[v5], a1, v7);
    v8 = v7 + v5;
    core::str::converts::from_utf8::ha1effb4cca6d9901(&v0, a0, v8);
    if (!*((long long *)&v0))
    {
        a0->field_4 = v8;
        return v12;
    }
    if (v10)
    {
        v10 = *((long long *)&v1);
        v12 = v11 - v5;
        if (v11 < v5)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v8 = v10 & 4294967295;
    }
    else if (v2)
    {
        v8 = v3;
        if ((v8 & 255) < (v5 & 255))
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v12 = (v8 & 4294967295) - v5;
    }
}
