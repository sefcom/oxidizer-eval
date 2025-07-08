
  void* uu_sort::FieldSelector::get_range::h94d5816cf09723a2(int64_t* arg1, char* arg2, uint64_t arg3, void** arg4, int64_t arg5)

{
    int64_t rax;
    void* result_1;
    rax = uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(arg2, arg3, arg4, 
        arg5, &arg1[3]);
    void* result;
    void** const var_60;
    
    if (!rax)
    {
        result = result_1;
        
        if (arg1[2] != 2)
        {
            int64_t rax_1;
            void* rdx_1;
            rax_1 = uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(arg2, arg3, 
                arg4, arg5, arg1);
            
            switch (rax_1)
            {
                case 0:
                {
                    void* rax_4;
                    void* rdx_4;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(rdx_1, arg2, arg3);
                    
                    if (!rax_4)
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, rdx_1, arg3);
                        /* no return */
                    }
                    
                    var_60 = rax_4;
                    void* var_58_2 = rdx_4 + rax_4;
                    int32_t rax_5;
                    int32_t rdx_6;
                    rax_5 =
                        core::str::validations::next_code_point::h7a92bc82d8dec435(&var_60, arg3);
                    int32_t rdi_5 = 0x110000;
                    
                    if (rax_5)
                        rdi_5 = rdx_6;
                    
                    core::option::Option$LT$T$GT$::map_or::he8e807e236e41815(rdi_5);
                    break;
                }
                case 2:
                {
                    result = nullptr;
                    break;
                }
            }
        }
    }
    else
    {
        result = arg3;
        
        if (rax != 3)
        {
            var_60 = &data_5ffb28;
            int64_t var_58_1 = 1;
            void var_68;
            void* var_50 = &var_68;
            int128_t var_48 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_60);
            /* no return */
        }
    }
    return result;
}
