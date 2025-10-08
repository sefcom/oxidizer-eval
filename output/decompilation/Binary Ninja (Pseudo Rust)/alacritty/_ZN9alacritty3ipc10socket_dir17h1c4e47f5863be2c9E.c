
  fn alacritty::ipc::socket_dir::h1c4e47f5863be2c9(arg1: *mut i128) -> i64

{
    let mut var_e8: ();
    xdg::base_directories::BaseDirectories::with_env::h17a1f3f28c4a7b5d(&var_e8);
    let mut var_128: i32;
    xdg::base_directories::BaseDirectories::get_runtime_directory::h961b62173248f5ba(&var_128, 
        &var_e8);
    let mut var_168: i128;
    let mut var_158: i128;
    let mut var_118: i128;
    
    if var_128 != 4
    {
        var_168 = var_128;
        let var_108: i64;
        let var_148_1: i64 = var_108;
        var_158 = var_118;
        
        if var_168 == 4
        {
            goto 'label_85c632;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$xdg..base_directories..Error$GT$$GT$::h1f931bfc54163f64(&var_168);
        std::env::temp_dir::h4c6b7a08795666f1(arg1);
    }
    else
    {
        let var_120: *mut c_void;
        let mut var_100: i128;
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_100, *var_120.byte_offset(8), *var_120.byte_offset(0x10));
        let var_f0: i64;
        *var_158[8] = var_f0;
        var_168 = var_100;
        'label_85c632:
        let rax_3: i64 = *var_168[8];
        
        if -(rax_3) == -0x8000000000000000
        {
            std::env::temp_dir::h4c6b7a08795666f1(arg1);
        }
        else
        {
            let var_120_1: i64 = var_158;
            var_118 = *var_158[8];
            var_128 = rax_3;
            alacritty::ipc::socket_dir::_$u7b$$u7b$closure$u7d$$u7d$::hd26803c74fc99a5a(&var_168, 
                &var_128);
            
            if var_168 == -0x8000000000000000
            {
                std::env::temp_dir::h4c6b7a08795666f1(arg1);
            }
            else
            {
                arg1[1] = var_158;
                *arg1 = var_168;
            }
        }
    }
    core::ptr::drop_in_place$LT$xdg..base_directories..BaseDirectories$GT$::hfbd973180228c1c0(
        &var_e8)
}
