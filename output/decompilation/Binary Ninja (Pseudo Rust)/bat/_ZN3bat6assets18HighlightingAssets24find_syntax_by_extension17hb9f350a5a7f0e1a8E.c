
  fn bat::assets::HighlightingAssets::find_syntax_by_extension::hb9f350a5a7f0e1a8(arg1: *mut i8, arg2: *mut i64, arg3: *mut i8, arg4: i64) -> u64

{
    let mut result_1: i8;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&result_1, arg2);
    let mut result: u64 = result_1;
    let var_68: *mut i8;
    let var_60: i128;
    
    if result != 0xd
    {
        let var_6f: i32;
        *arg1.byte_offset(4) = var_6f;
        *arg1.byte_offset(1) = var_6f;
        let var_50: i128;
        *arg1.byte_offset(0x20) = var_50;
        let var_40: i128;
        *arg1.byte_offset(0x30) = var_40;
        let var_30: i128;
        *arg1.byte_offset(0x40) = var_30;
        *arg1.byte_offset(0x10) = var_60;
        *arg1 = result;
        *arg1.byte_offset(8) = var_68;
    }
    else
    {
        let mut rdx_1: i64;
        let mut rsi_1: *mut i8;
        
        if arg3 == 0
        {
            rsi_1 = 1;
            rdx_1 = 0;
        }
        else
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, arg3, arg4);
            rdx_1 = 0;
            let result_2: i8 = result_1;
            
            if result_2 == 0
            {
                rdx_1 = var_60;
            }
            
            rsi_1 = 1;
            
            if result_2 == 0
            {
                rsi_1 = var_68;
            }
        }
        
        result =
            syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_extension::h180543d9baac27ea(
            var_68, rsi_1, rdx_1);
        *arg1.byte_offset(8) = result;
        *arg1.byte_offset(0x10) = var_68;
        *arg1 = 0xd;
    }
    result
}
