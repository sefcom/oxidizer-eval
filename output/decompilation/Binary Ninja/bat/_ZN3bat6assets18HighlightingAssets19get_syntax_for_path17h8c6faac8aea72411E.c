
  int64_t bat::assets::HighlightingAssets::get_syntax_for_path::h8c6faac8aea72411(char* arg1, int64_t* arg2, int64_t* arg3, void* arg4)

{
    arg3[2];
    int64_t rax;
    uint64_t rdx;
    rax = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h38bd28293a94b618(arg3[1]);
    int64_t var_60;
    bat::syntax_mapping::SyntaxMapping::get_syntax_for::he16ae842b51a4bfc(&var_60, arg4, rax);
    int64_t r14 = var_60;
    char var_d0;
    int32_t var_cf;
    int128_t var_c8;
    int128_t var_b8;
    int128_t var_a8;
    int128_t var_98;
    int64_t var_88;
    char rax_3;
    int64_t rax_4;
    int64_t rcx_4;
    char* rdx_3;
    char* rdx_5;
    
    if (!r14)
    {
        char* var_58;
        uint64_t var_50;
        bat::assets::HighlightingAssets::find_syntax_by_token::h2ed0326e3443b2e3(&var_d0, arg2, 
            var_58, var_50);
        rax_3 = var_d0;
        
        if (rax_3 != 0xd)
        {
            *(arg1 + 4) = var_cf;
            *(arg1 + 1) = var_cf;
            *(arg1 + 0x18) = var_b8;
            *(arg1 + 0x28) = var_a8;
            *(arg1 + 0x38) = var_98;
            *(arg1 + 0x48) = var_88;
            *arg1 = rax_3;
            *(arg1 + 8) = var_c8;
        }
        else
        {
            rax_4 = var_c8;
            rdx_5 = arg1;
            
            if (!rax_4)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_d0, var_58, var_50);
                int128_t var_c9_2 = var_d0;
                *var_c8[0xf] = *var_c8[8];
                rdx_3 = arg1;
                *rdx_3 = 8;
                label_78f442:
                *(rdx_3 + 1) = var_d0;
                *(rdx_3 + 0x10) = *var_c8[7];
                *(rdx_3 + 0x18) = *var_c8[0xf];
            }
            else
            {
                label_78f499:
                rcx_4 = *var_c8[8];
                label_78f502:
                *(rdx_5 + 8) = rax_4;
                *(rdx_5 + 0x10) = rcx_4;
                *rdx_5 = 0xd;
            }
        }
    }
    else
    {
        int128_t var_78;
        
        if (r14 == 1)
        {
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d0, rax, rdx);
            _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_d0);
            label_78f419:
            int128_t var_c9_1 = var_78;
            int64_t var_68;
            *var_c8[0xf] = var_68;
            rdx_3 = arg1;
            *rdx_3 = 7;
            goto label_78f442;
        }
        
        char* rax_5;
        char* rdx_6;
        rax_5 = std::path::Path::file_name::h6d40d88bf3fb287a(rax, rdx);
        char* rbx_2 = rdx_6;
        
        if (!rax_5)
            rbx_2 = rax_5;
        
        char* r13_1 = 1;
        
        if (rax_5)
            r13_1 = rax_5;
        
        bat::assets::HighlightingAssets::get_syntax_for_file_name::h8689a8930b60f613(&var_d0, arg2, 
            r13_1, rbx_2, arg4 + 0x18);
        rax_3 = var_d0;
        
        if (rax_3 == 0xd)
        {
            rax_4 = var_c8;
            
            if (rax_4)
            {
                rcx_4 = *var_c8[8];
                rdx_5 = arg1;
                goto label_78f502;
            }
            
            if (r14 == 2)
            {
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d0, rax, rdx);
                _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_d0);
                goto label_78f419;
            }
            
            bat::assets::HighlightingAssets::get_syntax_for_file_extension::hc845356bd5e7f68c(
                &var_d0, arg2, r13_1, rbx_2, arg4 + 0x18);
            rax_3 = var_d0;
            
            if (rax_3 == 0xd)
            {
                rax_4 = var_c8;
                rdx_5 = arg1;
                
                if (rax_4)
                    goto label_78f499;
                
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d0, rax, rdx);
                _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_d0);
                goto label_78f419;
            }
        }
        
        *(arg1 + 4) = var_cf;
        *(arg1 + 1) = var_cf;
        *(arg1 + 0x28) = var_a8;
        *(arg1 + 0x38) = var_98;
        *(arg1 + 0x48) = var_88;
        *(arg1 + 0x18) = var_b8;
        *arg1 = rax_3;
        *(arg1 + 8) = var_c8;
    }
    /* tailcall */
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(arg3);
}
