
  int64_t uu_touch::is_first_filename_timestamp::h32f3ea922c596898(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t* arg6, int64_t arg7)

{
    if (!(arg1 | arg4))
    {
        arg4 = arg7 < 2;
        arg4 |= arg2;
        
        if (!arg4)
        {
            char var_30;
            std::env::var::h044ec154f26c3ce2(&var_30);
            int64_t var_20;
            uint64_t var_18;
            
            if (var_30 & 1)
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h75a6963eea5b2c85(&var_30);
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h98d8c3acd16a8302(var_20, var_18, "199209_POSIX2_VERSIONatimemtime(…", 6))
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h75a6963eea5b2c85(&var_30);
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h75a6963eea5b2c85(&var_30);
                void* rax_2 = *arg6;
                void* rbx_2 = *(rax_2 + 8);
                int64_t r14_1 = *(rax_2 + 0x10);
                
                if (uu_touch::all_digits::he6053340128e8f49(rbx_2, r14_1))
                {
                    if (r14_1 == 8)
                        return 1;
                    
                    if (r14_1 == 0xa)
                        /* tailcall */
                        return core::ops::range::RangeBounds::contains::h38d3f4e4f9e54773(
                            uu_touch::get_year::h9b7752d6ea8c40bd(*(rbx_2 + 8), *(rbx_2 + 9)));
                }
            }
        }
    }
    
    return 0;
}
