
  int64_t alacritty::ipc::socket_dir::h1c4e47f5863be2c9(int128_t* arg1)

{
    void var_e8;
    xdg::base_directories::BaseDirectories::with_env::h17a1f3f28c4a7b5d(&var_e8);
    int32_t var_128;
    xdg::base_directories::BaseDirectories::get_runtime_directory::h961b62173248f5ba(&var_128, 
        &var_e8);
    int128_t var_168;
    int128_t var_158;
    int128_t var_118;
    
    if (var_128 != 4)
    {
        var_168 = var_128;
        int64_t var_108;
        int64_t var_148_1 = var_108;
        var_158 = var_118;
        
        if (var_168 == 4)
            goto label_85c632;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$xdg..base_directories..Error$GT$$GT$::h1f931bfc54163f64(&var_168);
        std::env::temp_dir::h4c6b7a08795666f1(arg1);
    }
    else
    {
        void* var_120;
        int128_t var_100;
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_100, *(var_120 + 8), *(var_120 + 0x10));
        int64_t var_f0;
        *var_158[8] = var_f0;
        var_168 = var_100;
        label_85c632:
        int64_t rax_3 = *var_168[8];
        
        if (-(rax_3) == -0x8000000000000000)
            std::env::temp_dir::h4c6b7a08795666f1(arg1);
        else
        {
            int64_t var_120_1 = var_158;
            var_118 = *var_158[8];
            var_128 = rax_3;
            alacritty::ipc::socket_dir::_$u7b$$u7b$closure$u7d$$u7d$::hd26803c74fc99a5a(&var_168, 
                &var_128);
            
            if (var_168 == -0x8000000000000000)
                std::env::temp_dir::h4c6b7a08795666f1(arg1);
            else
            {
                arg1[1] = var_158;
                *arg1 = var_168;
            }
        }
    }
    return 
        core::ptr::drop_in_place$LT$xdg..base_directories..BaseDirectories$GT$::hfbd973180228c1c0(
        &var_e8);
}
