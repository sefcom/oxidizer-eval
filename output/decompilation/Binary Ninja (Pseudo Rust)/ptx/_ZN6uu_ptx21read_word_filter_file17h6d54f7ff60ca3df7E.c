
  fn uu_ptx::read_word_filter_file::h6d54f7ff60ca3df7(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_118: i32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(
        &var_118, arg2, arg3, arg4);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(arg3, arg4, &var_118);
    
    if rax == 0
    {
        core::option::expect_failed::h3f620cfb8545dc61("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    let mut var_e0: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_e0, 
        rax);
    let var_d8: i64;
    let var_d0: u64;
    let mut result: *mut i64;
    let mut rax_2: u64;
    let mut rdx_1: *mut c_void;
    let mut rbx: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(var_d8, var_d0, "-[^]+[^ \t\n]+", 1) == 0
    {
        std::fs::File::open::h019c38f8f9e56350(&var_118, &var_e0);
        
        if var_118 != 1
        {
            rbx = 0;
            let var_114: i32;
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h78f68dd9e7792e5e(var_114);
            rdx_1 = &data_651680;
            goto 'label_52a9e1;
        }
        
        let result_1: *mut i64;
        result = result_1;
        arg1[1] = result;
        *arg1 = 0;
    }
    else
    {
        rbx = 1;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rbx = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h16f26c34398979df(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rdx_1 = &data_6516d8;
        'label_52a9e1:
        let mut var_68: i128;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3d0c7b14f6b3f130(&var_68, 
            rax_2, rdx_1);
        let var_124_1: i8 = rbx;
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_118);
        let mut var_c8: i128 = var_118;
        let var_38: i64;
        let var_e8_1: i64 = var_38;
        let var_48: i128;
        let var_f8_1: i128 = var_48;
        let var_58: i128;
        let var_108_1: i128 = var_58;
        var_118 = var_68;
        
        loop
        {
            let mut var_98: i64;
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1a349345bfe7630(&var_98, &var_118);
            let rax_4: i64 = var_98;
            
            if rax_4 == -0x7fffffffffffffff
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$$GT$::h7e59a5e3ea852bfd(&var_118);
                let zmm0_2: i128 = var_c8;
                result = arg1;
                let var_f8: i128;
                *result.byte_offset(0x20) = var_f8;
                let var_108: i128;
                *result.byte_offset(0x10) = var_108;
                *result = zmm0_2;
                
                if var_124_1 == 0
                {
                    break;
                }
            }
            else
            {
                let var_90: i64;
                
                if rax_4 == -0x8000000000000000
                {
                    arg1[1] = var_90;
                    *arg1 = 0;
                    core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$$GT$::h7e59a5e3ea852bfd(&var_118);
                    result = core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_c8);
                    
                    if var_124_1 == 0
                    {
                        break;
                    }
                }
                else
                {
                    let mut var_80: i64 = rax_4;
                    let var_78_1: i64 = var_90;
                    let var_88: i64;
                    let var_70_1: i64 = var_88;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hcab8d607c758db94(
                        &var_c8, &var_80);
                    continue;
                }
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                &var_e0);
        }
    }
    result
}
