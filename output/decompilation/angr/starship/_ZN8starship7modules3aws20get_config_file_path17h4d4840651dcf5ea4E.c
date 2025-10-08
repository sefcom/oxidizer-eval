long long starship::modules::aws::get_config_file_path(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [bp-0x28]

    v1.get_env("AWS_CONFIG_FILE.aws/configregionAWSU_PROFILEAWS_VAULTAWSUME_PROFILEAWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION", 15);
    if ((char)(((0 ^ *((long long *)&v1)) & (0 ^ -(*((long long *)&v1)))) >> 63))
        v0 = 0x8000000000000000;
    else
        starship::modules::aws::get_config_file_path::{{closure}}(&(char)v0, &v1);
    return a0.or_else(&v0, a1);
}
