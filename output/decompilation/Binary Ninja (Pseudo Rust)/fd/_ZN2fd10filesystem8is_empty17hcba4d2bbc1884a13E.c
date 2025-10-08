
  fn fd::filesystem::is_empty::hcba4d2bbc1884a13(arg1: *mut i64) -> u64

{
    let mut rax: i8;
    let mut rdx: i32;
    rax = fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(arg1);
    let mut rbx: *mut i64;
    
    if (rax & 1) == 0
    {
        rbx = nullptr;
    }
    else
    {
        let rdx_1: i32 = rdx & 0xf000;
        
        if -(rdx_1) == 0x8000
        {
            let rax_4: *mut c_void = fd::dir_entry::DirEntry::metadata::hb1432c4a87d609c2(arg1);
            
            if rax_4 == 0
            {
                rbx = nullptr;
            }
            else
            {
                rbx = *rax_4.byte_offset(0x50) == 0;
            }
        }
        else if rdx_1 != 0x4000
        {
            rbx = nullptr;
        }
        else
        {
            let mut var_58: i64;
            std::fs::read_dir::h4d9a39b7b36fa6e5(&var_58, 
                fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg1));
            let var_50: i8;
            
            if var_50 != 2
            {
                let mut var_48: i64 = var_58;
                let var_40_1: i8 = var_50;
                let mut var_38: i8;
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_38, &var_48);
                rbx = var_38;
                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hb27b2ff8eaf369e6(&var_38);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hc5eb81f12024322a(&var_48);
                rbx ^= 1;
                
                if var_50 == 2
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h6ed12e0fc0b7c6ad(&var_58);
                }
            }
            else
            {
                rbx = nullptr;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h6ed12e0fc0b7c6ad(&var_58);
            }
        }
    }
    
    rbx &= 1;
    rbx
}
