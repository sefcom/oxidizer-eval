
  fn bat::less::retrieve_less_version::h21096205fd9a4b87(arg1: *mut c_void) -> u64

{
    let rbx: *mut i8;
    let var_10: *mut i8 = rbx;
    let mut var_f0: i8;
    grep_cli::decompress::resolve_binary::h64d0312cb73fa303(&var_f0, 
        std::ffi::os_str::_$LT$impl$u20$core..convert..AsRef$LT$std..ffi..os_str..OsStr$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h5eb4ca0e0b17e13d(arg1));
    
    if (var_f0 & 1) == 0
    {
        let var_e0: i128;
        let mut var_148: i128 = var_e0;
        let var_e8: i64;
        
        if -(var_e8) != -0x8000000000000000
        {
            let var_100_1: i128 = var_148;
            let mut var_108: i64 = var_e8;
            std::process::Command::new::h3f6cc1aa3e6a6597(&var_f0, &var_108);
            std::process::Command::arg::hd3991715298ce12e(&var_f0, 
                "--versionless src/less.rsLine ra…");
            std::process::Command::output::h8d3fd625d1d0bec1(&var_148);
            let rax_2: i64 = var_148;
            
            if rax_2 != -0x8000000000000000
            {
                let zmm0_2: i128 = var_148;
                let mut var_180: i64 = rax_2;
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h096d1de53edcff53(&var_f0);
                let var_120: i96;
                let mut result: u64;
                let var_130: i128;
                
                if *var_120[8] == 0
                {
                    let mut result_1: u64;
                    let mut rdx_3: *mut i8;
                    result_1 = bat::less::parse_less_version::hf361f545e9895bb3(zmm0_2, *zmm0_2[8]);
                    result = result_1;
                }
                else
                {
                    result = bat::less::parse_less_version_busybox::h0e67158fc44d9733(*var_130[8], 
                        var_120);
                }
                core::ptr::drop_in_place$LT$std..process..Output$GT$::h7641c12b86f58c25(&var_180);
                return result;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..process..Output$C$std..io..error..Error$GT$$GT$::h1f9edd4a4679642f(&var_148);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h096d1de53edcff53(&var_f0);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$grep_cli..process..CommandError$GT$$GT$::ha008211fea5fe0d4(&var_f0);
    }
    
    2
}
