void bat::syntax_mapping::SyntaxMapping::get_syntax_for(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x168]
    int v1;  // [bp-0x148], Other Possible Types: char
    unsigned long long v2;  // [bp-0x140]
    int v3;  // [bp-0x138]
    int v4;  // [bp-0x128]
    int v5;  // [bp-0x118]
    char v6;  // [bp-0x108]
    char v7;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v8;  // [bp-0xe8]
    int v9;  // [bp-0xd8]
    int v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xb8]
    int v12;  // [bp-0xa8]
    int v13;  // [bp-0x98], Other Possible Types: char
    char v14;  // [bp-0x88]
    char v15;  // [bp-0x78]
    struct_0 *v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // r12
    int v20;  // xmm0
    unsigned long long v21;  // rax

    v15.new(a2, a3);
    v18 = a2.as_ref(a3).file_name(v17);
    if (v18)
    {
        (char)v1.new(v18, a2);
        v11 = *((long long *)&v6);
        v10 = v5;
        v9 = v4;
        v8 = v3;
        memcpy(&v7, &v1, 16);
    }
    else
    {
        v7 = 9223372036854775809;
    }
    v13.all_mappings(a1);
    memcpy(&v3, &v14, 16);
    v1 = v13;
    while (true)
    {
        v19 = core::iter::adapters::chain::and_then_or_clear(&(char)v1).or_else(v17, &v3);
        if (!v19)
            break;
        if ((char)v19.is_match_candidate(&v15) || v7 != 9223372036854775809 && (char)v19.is_match_candidate(&v7))
        {
            v20 = v17->field_0;
            *((unsigned long long *)&v0[16]) = v17->field_10;
            *(v0) = v20;
            v7.drop_in_place<core::option::Option<globset::Candidate>>();
            core::ptr::drop_in_place<globset::Candidate>(&v15);
            return;
        }
    }
    v21 = a2.as_ref(a3).file_name(v17);
    if (v21)
    {
        (char)v1.try_with_stripped_suffix(a1 + 24, v21, v17, a1);
        if ((char)v1 == 13)
        {
            v12 = v3;
            if (v2 != 4)
            {
                v0[8] = v12;
                *((unsigned long long *)v0) = v2;
                v7.drop_in_place<core::option::Option<globset::Candidate>>();
                core::ptr::drop_in_place<globset::Candidate>(&v15);
                return;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<bat::assets::SyntaxReferenceInSet,bat::error::Error>>(&(char)v1);
        }
    }
    *(a0) = 3;
    v7.drop_in_place<core::option::Option<globset::Candidate>>();
    core::ptr::drop_in_place<globset::Candidate>(&v15);
    return;
}
