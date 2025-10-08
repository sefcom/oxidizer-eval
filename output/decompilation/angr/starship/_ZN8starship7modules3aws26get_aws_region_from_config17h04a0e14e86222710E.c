long long starship::modules::aws::get_aws_region_from_config(void* a0, unsigned long long a1, unsigned long long *a2, unsigned long long *a3)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    unsigned long long *v4;  // 4096
    unsigned long long v6;  // rax

    v3 = starship::modules::aws::get_config(a1, a3);
    if (v3)
    {
        if (*(a2) != 0x8000000000000000)
            v4 = a2;
        else
            v4 = 0;
        v3 = starship::modules::aws::get_profile_config(v3, v4, a2);
        if (v3)
        {
            v3 = v3.get("regionAWSU_PROFILEAWS_VAULTAWSUME_PROFILEAWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION", 6);
            if (v3)
            {
                v0.to_vec(v3, a2);
                v6 = *((long long *)&v1);
                *((unsigned long long *)&a0[16]) = v6;
                *(a0) = v0;
                return v6;
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v3;
}
