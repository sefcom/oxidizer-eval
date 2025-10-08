
  uint64_t uu_sort::FieldSelector::get_range::h36eed4fe0a7f87ec(int64_t* arg1, char* arg2, uint64_t arg3, int64_t* arg4, int64_t arg5)

{
    int64_t rax;
    uint64_t result_1;
    rax = uu_sort::FieldSelector::get_range::resolve_index::h587b75ebbbe61c27(arg2, arg3, arg4, 
        arg5, &arg1[3]);
    uint64_t result;
    char const (** const var_60)[0x94];
    
    if (!rax)
    {
        result = result_1;
        
        if (arg1[2] != 2)
        {
            int64_t rax_1;
            uint64_t rdx_1;
            rax_1 = uu_sort::FieldSelector::get_range::resolve_index::h587b75ebbbe61c27(arg2, arg3, 
                arg4, arg5, arg1);
            
            switch (rax_1)
            {
                case 0:
                {
                    void* rax_4;
                    void* rdx_4;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rdx_1, arg2, arg3);
                    
                    if (!rax_4)
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rdx_1, arg3);
                        /* no return */
                    }
                    
                    var_60 = rax_4;
                    void* var_58_2 = rdx_4 + rax_4;
                    char rax_5;
                    int32_t rdx_6;
                    rax_5 =
                        core::str::validations::next_code_point::h9988461282470584(&var_60, arg3);
                    int32_t rdi_5 = 0x110000;
                    
                    if (rax_5 & 1)
                        rdi_5 = rdx_6;
                    
                    core::option::Option$LT$T$GT$::map_or::h5c2167395a49aa5e(rdi_5);
                    break;
                }
                case 2:
                {
                    result = 0;
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
            var_60 = &data_58d100;
            int64_t var_58_1 = 1;
            void var_68;
            void* var_50 = &var_68;
            int128_t var_48 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_60);
            /* no return */
        }
    }
    return result;
}
