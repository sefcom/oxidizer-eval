
  char const (**)[0xa5] uu_ls::get_system_time::haabab7985650bb67(int32_t* arg1, char arg2)

{
    char const (** result_1)[0xa5];
    int32_t var_18;
    char const (** result)[0xa5];
    
    switch (arg2)
    {
        case 0:
        {
            std::fs::Metadata::modified::he3c19aa683c05d81(&result_1, arg1);
            result = result_1;
            
            if (var_18 != 0x3b9aca00)
                return result;
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::hcabb8f1ce6cde3d2(&result_1);
            return result;
            break;
        }
        case 1:
        {
            std::fs::Metadata::accessed::he9d0f32bdb438e2a(&result_1, arg1);
            result = result_1;
            
            if (var_18 != 0x3b9aca00)
                return result;
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::hcabb8f1ce6cde3d2(&result_1);
            return result;
            break;
        }
        case 2:
        {
            int64_t rax_1;
            int32_t rdx;
            rax_1 = core::time::Duration::new::h61e6c1810c6155c1(*(arg1 + 0x88), arg1[0x24]);
            /* tailcall */
            return _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::ha7d73b33c4ccffeb(0, 0, rax_1, rdx);
        }
        case 3:
        {
            std::fs::Metadata::created::hedfca1c6312fe34e(&result_1, arg1);
            result = result_1;
            
            if (var_18 != 0x3b9aca00)
                return result;
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::hcabb8f1ce6cde3d2(&result_1);
            return result;
            break;
        }
    }
}
