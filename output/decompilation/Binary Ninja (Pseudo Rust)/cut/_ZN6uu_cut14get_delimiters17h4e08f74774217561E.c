
  fn uu_cut::get_delimiters::h4e08f74774217561(arg1: *mut i64, arg2: *mut c_void, arg3: i8) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "whitespace-delimited''", 0x14);
    let mut var_58: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h10dd5ae5c078d536(&var_58, 
        arg2, "delimiterinvalid input: Only one…", 9);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf521713d5ef52bfe(
        "delimiterinvalid input: Only one…", 9, &var_58);
    let mut r12_1: *const i8;
    let mut r15_1: i64;
    
    if rax_1 == 0
    {
        r12_1 = nullptr;
        
        if rax == 0
        {
            r12_1 = "\t-: \n: Is a directory\ndelimit…";
        }
        
        r15_1 = 1;
        goto 'label_4b74b4;
    }
    
    let mut rax_3: i64;
    let mut rdx_1: u64;
    let mut rsi_1: *const i8;
    
    if rax == 0
    {
        r15_1 = 1;
        
        if arg3 == 0
        {
            r12_1 = &data_41dc81[0x3e];
            
            if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(*rax_1.byte_offset(8), *rax_1.byte_offset(0x10)) != 0
            {
                goto 'label_4b74b4;
            }
            
            let rbp_1: i64 = *rax_1.byte_offset(0x10);
            
            if rbp_1 == 0
            {
                goto 'label_4b74b4;
            }
            
            let r15_2: *mut i8 = *rax_1.byte_offset(8);
            let zmm0_1: [i32; 0x4] = std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_58, r15_2, rbp_1);
            let var_50: i64;
            let var_48: i64;
            
            if var_58 != 0
            {
                'label_4b7467:
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_58, r15_2, rbp_1);
                
                if rbp_1 == 1 || var_58 == 0
                {
                    let mut rax_6: *mut i8;
                    let mut rdx_4: i64;
                    rax_6 = _$LT$uu_cut..Delimiter$u20$as$u20$core..convert..From$LT$$RF$std..ffi..os_str..OsString$GT$$GT$::from::h0afb93ec6e302b7b(rax_1);
                    r12_1 = rax_6;
                    r15_1 = rdx_4;
                    goto 'label_4b74b4;
                }
            }
            else if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(var_50, var_48 + var_50, zmm0_1) <= 1
            {
                goto 'label_4b7467;
            }
            rsi_1 = "the delimiter must be a single c…";
            rdx_1 = 0x28;
            goto 'label_4b73a7;
        }
        
        r12_1 = "=0.0.28{} OPTION... [FILE]...Pri…";
        'label_4b74b4:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h10dd5ae5c078d536(
            &var_58, arg2, "output-delimiterPermissionDenied…", 0x10);
        let mut rdx_5: *mut i64 = &var_58;
        let rax_7: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf521713d5ef52bfe(
            "output-delimiterPermissionDenied…", 0x10, rdx_5);
        let mut rax_8: *mut i8;
        
        if rax_7 == 0
        {
            rax_8 = nullptr;
        }
        else
        {
            rax_8 = uu_cut::get_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::ha4ee148139715a2e(
                *rax_7.byte_offset(8), *rax_7.byte_offset(0x10));
        }
        
        arg1[1] = r12_1;
        arg1[2] = r15_1;
        arg1[3] = rax_8;
        arg1[4] = rdx_5;
        rax_3 = 0;
    }
    else
    {
        rsi_1 = "invalid input: Only one of --del…";
        rdx_1 = 0x49;
        'label_4b73a7:
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5054b97c46bbc40b(&var_58, 
            rsi_1, rdx_1);
        let var_40_1: i32 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&var_58);
        arg1[2] = &data_528da0;
        rax_3 = 1;
    }
    *arg1 = rax_3;
    arg1
}
