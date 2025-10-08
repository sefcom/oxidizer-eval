long long starship::modules::daml::get_daml_sdk_version(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]

    v0.get_env("DAML_SDK_VERSIONDirEntryFileTypeExcludeReachablealways one value", 16);
    return a0.or_else(&v0, a1);
}
