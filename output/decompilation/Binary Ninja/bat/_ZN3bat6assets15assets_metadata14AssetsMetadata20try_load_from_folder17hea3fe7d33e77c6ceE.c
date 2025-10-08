
  int64_t bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder::hea3fe7d33e77c6ce(char* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_38;
    std::path::Path::join::hb97e165d6abf39bf(&var_38, arg2, arg3, 
        "metadata.yamlsyntaxes.binthemes.…");
    int32_t var_48;
    std::fs::File::open::h80998ce73f6318aa(&var_48, &var_38);
    int64_t result;
    
    if (var_48 != 1)
    {
        int32_t var_44;
        serde_yaml::de::from_reader::hc5c90348b7ad0e48(&var_38, var_44);
        int64_t rcx_1 = var_38;
        int64_t result_2;
        result = result_2;
        
        if (rcx_1 != -0x7fffffffffffffff)
        {
            int64_t var_18;
            *(arg1 + 0x28) = var_18;
            int128_t var_28;
            *(arg1 + 0x18) = var_28;
            *(arg1 + 8) = rcx_1;
            *(arg1 + 0x10) = result;
            *arg1 = 0xd;
            return result;
        }
        
        *arg1 = 6;
    }
    else
    {
        int64_t result_1;
        result = result_1;
        *arg1 = 0;
    }
    
    *(arg1 + 8) = result;
    return result;
}
