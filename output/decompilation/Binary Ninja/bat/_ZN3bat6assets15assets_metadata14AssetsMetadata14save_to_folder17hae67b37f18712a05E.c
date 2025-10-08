
  uint64_t bat::assets::assets_metadata::AssetsMetadata::save_to_folder::hae67b37f18712a05(char* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    void var_30;
    std::path::Path::join::hb97e165d6abf39bf(&var_30, arg3, arg4, 
        "metadata.yamlsyntaxes.binthemes.…");
    int32_t var_40;
    std::fs::File::create::h930d40b25ee6f8a7(&var_40, &var_30);
    uint64_t result;
    
    if (var_40 != 1)
    {
        int32_t var_3c;
        result = serde_yaml::ser::to_writer::ha551c0799f7ab21f(var_3c, arg2);
        
        if (!result)
            *arg1 = 0xd;
        else
        {
            *arg1 = 6;
            *(arg1 + 8) = result;
        }
    }
    else
    {
        uint64_t result_1;
        result = result_1;
        *arg1 = 0;
        *(arg1 + 8) = result;
    }
    
    return result;
}
