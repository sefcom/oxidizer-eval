long long starship::modules::aws::get_aws_profile_and_region(void* a0, unsigned long long a1, unsigned long long *a2)
{
    char *v0;  // [bp-0x118]
    char *v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf0]
    int v5;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    char v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    int v10;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v11;  // [bp-0xa8]
    unsigned long long v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    char v16;  // [bp-0x80], Other Possible Types: unsigned long long
    int v17;  // [bp-0x78], Other Possible Types: char
    unsigned long long v18;  // [bp-0x68]
    unsigned long long v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    unsigned long long v24;  // [bp-0x38]
    unsigned long long v25;  // [bp-0x30]
    unsigned long long v26;  // [bp-0x28]
    unsigned long long v27;  // [bp-0x20]
    char v28;  // [bp-0x18]
    unsigned long long v30;  // rax

    v18 = "AWSU_PROFILEAWS_VAULTAWSUME_PROFILEAWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION";
    v19 = 12;
    v20 = "AWS_VAULTAWSUME_PROFILEAWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION";
    v21 = 9;
    v22 = "AWSUME_PROFILEAWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION";
    v23 = 14;
    v24 = "AWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION";
    v25 = 11;
    v26 = "AWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION";
    v27 = 15;
    v12 = "AWS_REGIONAWS_DEFAULT_REGION";
    v13 = 10;
    v14 = "AWS_DEFAULT_REGION";
    v15 = 18;
    v0 = &v18;
    v1 = &v28;
    v16.find_map(&v0);
    v0 = &v12;
    v1 = &v16;
    v5.find_map(&v0);
    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
    {
        if (*((long long *)&v5) == 0x8000000000000000)
        {
            v3 = 0x8000000000000000;
            starship::modules::aws::get_aws_region_from_config(&v0, a1, &g_53e6c8, a2);
            *((unsigned long long *)&a0[16]) = v4;
            *((int128_t *)a0) = *((int128_t *)&v3);
            *((int128_t *)&a0[24]) = *((int128_t *)&v0);
            v30 = v2;
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
LABEL_b83ce1:
            a0[24] = v5;
            v30 = v6;
        }
        *((unsigned long long *)&a0[40]) = v30;
        return v30;
    }
    if (*((long long *)&v5) == 0x8000000000000000)
    {
        v7 = v16;
        memcpy(&v8, &v17, 16);
        v0.clone(&v7);
        v11 = v2;
        memcpy(&v10, &v0, 16);
        v2 = v9;
        memcpy(&v0, &v7, 16);
        starship::modules::aws::get_aws_region_from_config(&(char)v3, a1, &v0, a2);
        *((unsigned long long *)&a0[16]) = v11;
        *(a0) = v10;
        *((int128_t *)&a0[24]) = *((int128_t *)&v3);
        *((unsigned long long *)&a0[40]) = v4;
        return (unsigned long long)core::ptr::drop_in_place<regex::error::Error>(&v0);
    }
    *((unsigned long long *)a0) = v16;
    a0[8] = v17;
    goto LABEL_b83ce1;
    goto LABEL_b83ce1;
}
