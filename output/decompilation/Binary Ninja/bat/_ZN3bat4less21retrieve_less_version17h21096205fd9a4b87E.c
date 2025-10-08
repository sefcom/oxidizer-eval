
  uint64_t bat::less::retrieve_less_version::h21096205fd9a4b87(void* arg1)

{
    char* rbx;
    char* var_10 = rbx;
    char var_f0;
    grep_cli::decompress::resolve_binary::h64d0312cb73fa303(&var_f0, 
        std::ffi::os_str::_$LT$impl$u20$core..convert..AsRef$LT$std..ffi..os_str..OsStr$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h5eb4ca0e0b17e13d(arg1));
    
    if (!(var_f0 & 1))
    {
        int128_t var_e0;
        int128_t var_148 = var_e0;
        int64_t var_e8;
        
        if (-(var_e8) != -0x8000000000000000)
        {
            int128_t var_100_1 = var_148;
            int64_t var_108 = var_e8;
            std::process::Command::new::h3f6cc1aa3e6a6597(&var_f0, &var_108);
            std::process::Command::arg::hd3991715298ce12e(&var_f0, 
                "--versionless src/less.rsLine ra…");
            std::process::Command::output::h8d3fd625d1d0bec1(&var_148);
            int64_t rax_2 = var_148;
            
            if (rax_2 != -0x8000000000000000)
            {
                int128_t zmm0_2 = var_148;
                int64_t var_180 = rax_2;
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h096d1de53edcff53(&var_f0);
                int96_t var_120;
                uint64_t result;
                int128_t var_130;
                
                if (!*var_120[8])
                {
                    uint64_t result_1;
                    char* rdx_3;
                    result_1 = bat::less::parse_less_version::hf361f545e9895bb3(zmm0_2, *zmm0_2[8]);
                    result = result_1;
                }
                else
                    result = bat::less::parse_less_version_busybox::h0e67158fc44d9733(*var_130[8], 
                        var_120);
                core::ptr::drop_in_place$LT$std..process..Output$GT$::h7641c12b86f58c25(&var_180);
                return result;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..process..Output$C$std..io..error..Error$GT$$GT$::h1f9edd4a4679642f(&var_148);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h096d1de53edcff53(&var_f0);
        }
    }
    else
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$grep_cli..process..CommandError$GT$$GT$::ha008211fea5fe0d4(&var_f0);
    
    return 2;
}
