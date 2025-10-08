
  fn forc_tx::main::h1af22e0ef18e8626() -> u64

{
    let mut var_2d0: ();
    forc_tx::Command::parse::hcdf58518c22f33a0(&var_2d0);
    let mut rbp: i64;
    rbp = 1;
    let mut var_488: *mut c_void;
    forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Transaction$GT$$u20$for$u20$fuel_tx..transaction..Transaction$GT$::try_from::h92e9152201130caa(&var_488, &var_2d0);
    let rbx: *mut c_void = var_488;
    let mut var_480: i128;
    let mut var_4e8: i128 = var_480;
    let mut var_1e8: i64;
    let mut result: u64;
    let mut r15: i64;
    let mut var_470: i128;
    let var_460: i128;
    
    if rbx != -0x7ffffffffffffffa
    {
        let mut var_450: ();
        let mut var_198: ();
        memcpy(&var_198, &var_450, 0x178);
        let var_1c8_1: i128 = var_4e8;
        let var_1b8_1: i128 = var_470;
        let var_1a8_1: i128 = var_460;
        let mut var_1d0: *mut c_void = rbx;
        r15 = var_1e8;
        
        if r15 != -0x8000000000000000
        {
            std::fs::File::create::h28d8e0a3e2af2933(&var_488, &var_1e8);
            
            if var_488 != 1
            {
                let mut var_4a8: ();
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hfadb38c264d7fd19(
                    &var_4a8, *var_488[4]);
                let rax_4: i64 =
                    serde_json::ser::to_writer_pretty::h508d024f3811bf68(&var_4a8, &var_1d0);
                rbp = 0;
                
                if rax_4 == 0
                {
                    core::ptr::drop_in_place$LT$fuel_tx..transaction..Transaction$GT$::hbc133d229fbc8244(&var_1d0);
                    return 0;
                }
                
                result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h6f59d702294c4c4d(rax_4);
            }
            else
            {
                rbp = 0;
                result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h17518026930b164f(var_480);
            }
        }
        else
        {
            rbp = 1;
            serde_json::ser::to_vec_pretty::hf72b9b9867f0682e(&var_488, &var_1d0);
            let rax_1: *mut c_void = var_488;
            let rdi_5: i64 = var_480;
            
            if rax_1 != -0x8000000000000000
            {
                var_4e8 = rax_1;
                *var_4e8[8] = rdi_5;
                let mut var_4d8: i128;
                var_4d8 = *var_480[8];
                let mut var_4b8: *mut i128 = &var_4e8;
                let var_4b0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_488 = &data_5d05b0;
                var_480 = 2;
                *var_470[8] = 0;
                *var_480[8] = &var_4b8;
                var_470 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_488);
                core::ptr::drop_in_place$LT$fuel_tx..transaction..types..input..message..Message$LT$fuel_tx..transaction..types..input..message..specifications..MessageData$LT$fuel_tx..transaction..types..input..message..specifications..Signed$GT$$GT$$GT$::h159ff9a6ea7c429b(var_4e8, *var_4e8[8]);
                rbp = 1;
                core::ptr::drop_in_place$LT$fuel_tx..transaction..Transaction$GT$::hbc133d229fbc8244(&var_1d0);
                return 0;
            }
            
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h6f59d702294c4c4d(rdi_5);
            rbp = 1;
        }
        
        core::ptr::drop_in_place$LT$fuel_tx..transaction..Transaction$GT$::hbc133d229fbc8244(
            &var_1d0);
    }
    else
    {
        let zmm1: i128 = var_470;
        var_470 = var_460;
        var_480 = zmm1;
        var_488 = var_4e8;
        result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::he8cc8e2c8d4edea3(&var_488);
        rbp = 1;
        r15 = var_1e8;
    }
    
    if r15 != -0x8000000000000000 && rbp != 0
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h095369848fb91941(&var_1e8);
    }
    
    result
}
