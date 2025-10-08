
  fn bat::syntax_mapping::SyntaxMapping::get_syntax_for::h658213879b54a94b(arg1: *mut i128, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_78: ();
    globset::Candidate::new::he6a757e67f3e7371(&var_78, arg3);
    let rcx: i64;
    let var_150: i64 = rcx;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h3113e5e7690cd693(arg3);
    let rax_1: i64 = std::path::Path::file_name::h6d40d88bf3fb287a(rax, rdx_1);
    let mut var_148: i128;
    let mut var_138: i128;
    let mut var_f8: i64;
    
    if rax_1 == 0
    {
        var_f8 = -0x7fffffffffffffff;
    }
    else
    {
        globset::Candidate::new::h62742757350edb8a(&var_148, rax_1);
        let var_108: i64;
        let var_b8_1: i64 = var_108;
        let var_118: i128;
        let var_c8_1: i128 = var_118;
        let var_128: i128;
        let var_d8_1: i128 = var_128;
        let var_e8_1: i128 = var_138;
        var_f8 = var_148;
    }
    
    let mut var_98: i128;
    bat::syntax_mapping::SyntaxMapping::all_mappings::h5a5a656b12955f8c(&var_98, arg2);
    let zmm0_2: i128 = var_98;
    let var_88: i128;
    var_138 = var_88;
    var_148 = zmm0_2;
    
    loop
    {
        let mut rax_3: i64;
        let mut rdx_2: i64;
        rax_3 = core::iter::adapters::chain::and_then_or_clear::haa5c10d34272d527(&var_148);
        let mut rax_4: *mut c_void;
        let mut rdx_4: *mut i128;
        rax_4 = core::option::Option$LT$T$GT$::or_else::hc1d079e19325d7ca(rax_3, rdx_2, &var_138);
        
        if rax_4 != 0
        {
            if globset::glob::GlobMatcher::is_match_candidate::hdd47f5cb514c408f(rax_4, &var_78)
                == 0
            {
                if var_f8 == -0x7fffffffffffffff
                {
                    continue;
                }
                else if globset::glob::GlobMatcher::is_match_candidate::hdd47f5cb514c408f(rax_4, 
                    &var_f8) == 0
                {
                    continue;
                }
            }
            
            arg1[1] = rdx_4[1];
            *arg1 = *rdx_4;
            break;
        }
        
        let mut rax_8: i64;
        let mut rdx_5: i64;
        rax_8 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h3113e5e7690cd693(
            arg3);
        let mut rax_9: *mut i8;
        let mut rdx_6: i64;
        rax_9 = std::path::Path::file_name::h6d40d88bf3fb287a(rax_8, rdx_5);
        
        if rax_9 == 0
        {
            *arg1 = 3;
        }
        else
        {
            bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::hc0de10fd80fe4239(&var_148, arg2.byte_offset(0x18), rax_9, rdx_6, arg2);
            
            if var_148 != 0xd
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$bat..assets..SyntaxReferenceInSet$C$bat..error..Error$GT$$GT$::h2313c1560ca5a289(&var_148);
                *arg1 = 3;
            }
            else
            {
                let rax_10: i64 = *var_148[8];
                
                if rax_10 == 4
                {
                    *arg1 = 3;
                }
                else
                {
                    *arg1.byte_offset(8) = var_138;
                    *arg1 = rax_10;
                }
            }
        }
        
        break;
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$globset..Candidate$GT$$GT$::h92eb3bef75ac21bd(&var_f8);
    core::ptr::drop_in_place$LT$globset..Candidate$GT$::h246f07ec88a325d0(&var_78)
}
