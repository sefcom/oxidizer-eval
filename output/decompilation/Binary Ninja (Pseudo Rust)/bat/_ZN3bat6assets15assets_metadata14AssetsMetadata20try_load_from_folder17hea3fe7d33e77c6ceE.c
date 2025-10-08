
  fn bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder::hea3fe7d33e77c6ce(arg1: *mut i8, arg2: i64, arg3: u64) -> i64

{
    let mut var_38: i64;
    std::path::Path::join::hb97e165d6abf39bf(&var_38, arg2, arg3, 
        "metadata.yamlsyntaxes.binthemes.…");
    let mut var_48: i32;
    std::fs::File::open::h80998ce73f6318aa(&var_48, &var_38);
    let mut result: i64;
    
    if var_48 != 1
    {
        let var_44: i32;
        serde_yaml::de::from_reader::hc5c90348b7ad0e48(&var_38, var_44);
        let rcx_1: i64 = var_38;
        let result_2: i64;
        result = result_2;
        
        if rcx_1 != -0x7fffffffffffffff
        {
            let var_18: i64;
            *arg1.byte_offset(0x28) = var_18;
            let var_28: i128;
            *arg1.byte_offset(0x18) = var_28;
            *arg1.byte_offset(8) = rcx_1;
            *arg1.byte_offset(0x10) = result;
            *arg1 = 0xd;
            return result;
        }
        
        *arg1 = 6;
    }
    else
    {
        let result_1: i64;
        result = result_1;
        *arg1 = 0;
    }
    
    *arg1.byte_offset(8) = result;
    result
}
