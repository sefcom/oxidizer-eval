
  int64_t uu_uniq::Uniq::skip_fields::hde61277d301acf25(int64_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5)

{
    if (!arg2)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(
            arg1, arg4, arg5);
    
    void* r8 = &arg4[arg5];
    char* var_78 = arg4;
    void* var_70 = r8;
    char result;
    int128_t var_68;
    
    if (!arg3)
    {
        label_4bcde4:
        result = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd1aa47cd5a9c156d(arg1, arg4, r8);
        
        if (arg3)
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(
                &var_68);
    }
    else
    {
        int64_t r15_1 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            0);
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::ha47f57631c24eb87(&var_78);
        
        if (!result)
        {
            int128_t var_48;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf69df60c24087007(&var_48, &var_78, 0);
            void* var_38;
            void* var_58_1 = var_38;
            var_68 = var_48;
            
            if (var_38)
            {
                arg4 = *var_68[8];
                r8 = var_38 + arg4;
                var_78 = arg4;
                void* var_70_1 = r8;
                
                if (r15_1 >= arg3)
                    goto label_4bcde4;
                
                while (true)
                {
                    r15_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r15_1);
                    
                    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::ha47f57631c24eb87(&var_78))
                        break;
                    
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf69df60c24087007(&var_48, &var_78, 0);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(
                        &var_68);
                    void* var_58_2 = var_38;
                    var_68 = var_48;
                    
                    if (!var_38)
                        break;
                    
                    arg4 = *var_68[8];
                    r8 = var_38 + arg4;
                    var_78 = arg4;
                    void* var_70_2 = r8;
                    
                    if (r15_1 >= arg3)
                        goto label_4bcde4;
                }
            }
            
            *arg1 = 0;
            arg1[1] = 1;
            arg1[2] = 0;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(
                &var_68);
        }
        
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
    }
    return result;
}
