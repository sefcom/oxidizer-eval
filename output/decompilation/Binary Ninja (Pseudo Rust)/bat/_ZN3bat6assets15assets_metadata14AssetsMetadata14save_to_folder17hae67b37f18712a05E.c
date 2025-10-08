
  fn bat::assets::assets_metadata::AssetsMetadata::save_to_folder::hae67b37f18712a05(arg1: *mut i8, arg2: *mut i64, arg3: i64, arg4: u64) -> u64

{
    let mut var_30: ();
    std::path::Path::join::hb97e165d6abf39bf(&var_30, arg3, arg4, 
        "metadata.yamlsyntaxes.binthemes.…");
    let mut var_40: i32;
    std::fs::File::create::h930d40b25ee6f8a7(&var_40, &var_30);
    let mut result: u64;
    
    if var_40 != 1
    {
        let var_3c: i32;
        result = serde_yaml::ser::to_writer::ha551c0799f7ab21f(var_3c, arg2);
        
        if result == 0
        {
            *arg1 = 0xd;
        }
        else
        {
            *arg1 = 6;
            *arg1.byte_offset(8) = result;
        }
    }
    else
    {
        let result_1: u64;
        result = result_1;
        *arg1 = 0;
        *arg1.byte_offset(8) = result;
    }
    
    result
}
