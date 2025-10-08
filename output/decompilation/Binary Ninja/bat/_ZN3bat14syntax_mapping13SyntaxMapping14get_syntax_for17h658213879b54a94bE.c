
  int64_t bat::syntax_mapping::SyntaxMapping::get_syntax_for::h658213879b54a94b(int128_t* arg1, void* arg2, int64_t arg3)

{
    void var_78;
    globset::Candidate::new::he6a757e67f3e7371(&var_78, arg3);
    int64_t rcx;
    int64_t var_150 = rcx;
    int64_t rax;
    int64_t rdx_1;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h3113e5e7690cd693(arg3);
    int64_t rax_1 = std::path::Path::file_name::h6d40d88bf3fb287a(rax, rdx_1);
    int128_t var_148;
    int128_t var_138;
    int64_t var_f8;
    
    if (!rax_1)
        var_f8 = -0x7fffffffffffffff;
    else
    {
        globset::Candidate::new::h62742757350edb8a(&var_148, rax_1);
        int64_t var_108;
        int64_t var_b8_1 = var_108;
        int128_t var_118;
        int128_t var_c8_1 = var_118;
        int128_t var_128;
        int128_t var_d8_1 = var_128;
        int128_t var_e8_1 = var_138;
        var_f8 = var_148;
    }
    
    int128_t var_98;
    bat::syntax_mapping::SyntaxMapping::all_mappings::h5a5a656b12955f8c(&var_98, arg2);
    int128_t zmm0_2 = var_98;
    int128_t var_88;
    var_138 = var_88;
    var_148 = zmm0_2;
    
    while (true)
    {
        int64_t rax_3;
        int64_t rdx_2;
        rax_3 = core::iter::adapters::chain::and_then_or_clear::haa5c10d34272d527(&var_148);
        void* rax_4;
        int128_t* rdx_4;
        rax_4 = core::option::Option$LT$T$GT$::or_else::hc1d079e19325d7ca(rax_3, rdx_2, &var_138);
        
        if (rax_4)
        {
            if (!globset::glob::GlobMatcher::is_match_candidate::hdd47f5cb514c408f(rax_4, &var_78))
            {
                if (var_f8 == -0x7fffffffffffffff)
                    continue;
                else if (!globset::glob::GlobMatcher::is_match_candidate::hdd47f5cb514c408f(rax_4, 
                        &var_f8))
                    continue;
            }
            
            arg1[1] = rdx_4[1];
            *arg1 = *rdx_4;
            break;
        }
        
        int64_t rax_8;
        int64_t rdx_5;
        rax_8 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h3113e5e7690cd693(
            arg3);
        char* rax_9;
        int64_t rdx_6;
        rax_9 = std::path::Path::file_name::h6d40d88bf3fb287a(rax_8, rdx_5);
        
        if (!rax_9)
            *arg1 = 3;
        else
        {
            bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::hc0de10fd80fe4239(&var_148, arg2 + 0x18, rax_9, rdx_6, arg2);
            
            if (var_148 != 0xd)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$bat..assets..SyntaxReferenceInSet$C$bat..error..Error$GT$$GT$::h2313c1560ca5a289(&var_148);
                *arg1 = 3;
            }
            else
            {
                int64_t rax_10 = *var_148[8];
                
                if (rax_10 == 4)
                    *arg1 = 3;
                else
                {
                    *(arg1 + 8) = var_138;
                    *arg1 = rax_10;
                }
            }
        }
        
        break;
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$globset..Candidate$GT$$GT$::h92eb3bef75ac21bd(&var_f8);
    return core::ptr::drop_in_place$LT$globset..Candidate$GT$::h246f07ec88a325d0(&var_78);
}
