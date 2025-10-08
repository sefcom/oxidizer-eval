long long starship::modules::gcloud::get_active_config(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]

    v0.get_env("CLOUDSDK_ACTIVE_CONFIG_NAMEactive_configError in module `gcloud`: \nsrc/modules/gcloud.rs", 27);
    return a0.or_else(&v0, a1, a2);
}
