long long starship::modules::gcloud::GcloudContext::get_region(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a0.get_config();
    if (!v3)
        return 0;
    v4 = v3.section("computeconfig_", 7);
    if (!v4)
        return 0;
    return v4.get("regionAWSU_PROFILEAWS_VAULTAWSUME_PROFILEAWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION", 6);
}
