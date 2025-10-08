
  fn ruff_python_formatter::pattern::pattern_match_mapping::find_double_star::h2802c766db8ed4ca(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i8, arg4: i64)

{
    let mut var_68: i64;
    
    if *arg2.byte_offset(0x4f) != 0xda
    {
        let rax_1: i64 = *arg2.byte_offset(0x28);
        let mut rdi_1: *mut c_void;
        
        if rax_1 == 0
        {
            rdi_1 = nullptr;
        }
        else
        {
            rdi_1 = (*arg2.byte_offset(0x20)).byte_offset(rax_1 * 0x68).byte_offset(-0x68);
        }
        
        let mut var_58: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_58, 
            core::option::Option$LT$T$GT$::map_or::he858cb0ee03f81dc(rdi_1, 
                *arg2.byte_offset(0x58)), 
            arg3, arg4);
        core::iter::traits::iterator::Iterator::try_fold::hd74ba33ea4c4c1ad(&var_68, &var_58);
    }
    
    let var_60: i8;
    
    if *arg2.byte_offset(0x4f) == 0xda || var_60 == 0x5a
    {
        *arg1 = 0;
        return;
    }
    
    *arg1.byte_offset(4) = var_68;
    *arg1.byte_offset(0xc) = *arg2.byte_offset(0x30);
    *arg1 = 1;
}
