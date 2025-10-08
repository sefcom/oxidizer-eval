
  fn uu_touch::is_first_filename_timestamp::h32f3ea922c596898(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: i64) -> i64

{
    if (arg1 | arg4) == 0
    {
        arg4 = arg7 < 2;
        arg4 |= arg2 != 0;
        
        if arg4 == 0
        {
            let mut var_30: i8;
            std::env::var::h044ec154f26c3ce2(&var_30);
            let var_20: i64;
            let var_18: u64;
            
            if (var_30 & 1) != 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h75a6963eea5b2c85(&var_30);
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h98d8c3acd16a8302(var_20, var_18, "199209_POSIX2_VERSIONatimemtime(…", 6) == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h75a6963eea5b2c85(&var_30);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h75a6963eea5b2c85(&var_30);
                let rax_2: *mut c_void = *arg6;
                let rbx_2: *mut c_void = *rax_2.byte_offset(8);
                let r14_1: i64 = *rax_2.byte_offset(0x10);
                
                if uu_touch::all_digits::he6053340128e8f49(rbx_2, r14_1) != 0
                {
                    if r14_1 == 8
                    {
                        return 1;
                    }
                    
                    if r14_1 == 0xa
                    {
                        /* tailcall */
                        return core::ops::range::RangeBounds::contains::h38d3f4e4f9e54773(
                            uu_touch::get_year::h9b7752d6ea8c40bd(*rbx_2.byte_offset(8), 
                            *rbx_2.byte_offset(9)));
                    }
                }
            }
        }
    }
    
    0
}
