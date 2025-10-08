long long starship::modules::aws::get_credentials_file_path(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    char v1;  // [bp-0x30]

    v0.get_env("AWS_SHARED_CREDENTIALS_FILEAWS_CREDENTIALS_FILEAWS_CONFIG_FILE.aws/configregionAWSU_PROFILEAWS_VAULTAWSUME_PROFILEAWS_PROFILEAWS_SSO_PROFILEAWS_REGIONAWS_DEFAULT_REGION", 27);
    v1.or_else(&v0);
    if ((char)(((0 ^ *((long long *)&v1)) & (0 ^ -(*((long long *)&v1)))) >> 63))
        v0 = 0x8000000000000000;
    else
        starship::modules::aws::get_config_file_path::{{closure}}(&v0, &v1);
    return a0.or_else(&v0, a1);
}
