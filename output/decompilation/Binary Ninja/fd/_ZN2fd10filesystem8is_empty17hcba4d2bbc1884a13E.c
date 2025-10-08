
  uint64_t fd::filesystem::is_empty::hcba4d2bbc1884a13(int64_t* arg1)

{
    char rax;
    int32_t rdx;
    rax = fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(arg1);
    int64_t* rbx;
    
    if (!(rax & 1))
        rbx = nullptr;
    else
    {
        int32_t rdx_1 = rdx & 0xf000;
        
        if (-(rdx_1) == 0x8000)
        {
            void* rax_4 = fd::dir_entry::DirEntry::metadata::hb1432c4a87d609c2(arg1);
            
            if (!rax_4)
                rbx = nullptr;
            else
                rbx = !*(rax_4 + 0x50);
        }
        else if (rdx_1 != 0x4000)
            rbx = nullptr;
        else
        {
            int64_t var_58;
            std::fs::read_dir::h4d9a39b7b36fa6e5(&var_58, 
                fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg1));
            char var_50;
            
            if (var_50 != 2)
            {
                int64_t var_48 = var_58;
                char var_40_1 = var_50;
                char var_38;
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_38, &var_48);
                rbx = var_38;
                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hb27b2ff8eaf369e6(&var_38);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hc5eb81f12024322a(&var_48);
                rbx ^= 1;
                
                if (var_50 == 2)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h6ed12e0fc0b7c6ad(&var_58);
            }
            else
            {
                rbx = nullptr;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h6ed12e0fc0b7c6ad(&var_58);
            }
        }
    }
    
    rbx &= 1;
    return rbx;
}
