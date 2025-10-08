long long starship::modules::gcloud::GcloudContext::get_project(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a0.get_config();
    if (!v3)
        return 0;
    v4 = v3.section("coreUSR1CharV6_0kndalimbnkoosundTotou128for<", 4);
    if (!v4)
        return 0;
    return v4.get("projectcomputeconfig_", 7);
}
