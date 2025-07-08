
  char* uu_echo::parse_backslash_number::he56ed8545e2dc3bc(int64_t* arg1, int32_t arg2, char arg3)

{
    int40_t rax;
    int40_t var_38 = rax;
    int64_t r14;
    
    if (!arg2)
    {
        r14 = 0;
        label_4a45cd:
        uint32_t rdi_1 = r14;
        *var_38[4] = rdi_1;
        char rax_3;
        int32_t rdx;
        rax_3 = uu_echo::Base::ascii_to_number::h59ff941f17249d67(rdi_1, arg3);
        
        if (rax_3 & 1)
        {
            int32_t rbp = rdx;
            bool cond:0_1 = *arg1;
            *arg1 = 0;
            
            if (!cond:0_1)
                _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&arg1[2]);
            
            int64_t r13;
            r13 = !r14;
            *var_38[3] = 4 - r13;
            r13 |= 2;
            uint64_t r15;
            r15 = 1;
            char* result;
            
            do
            {
                r15 = _$LT$u8$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h78b98a6df4caa3d9(r15);
                result = *core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(
                    arg1, &arg1[2]);
                
                if (!result)
                    break;
                
                char rdx_1;
                result = uu_echo::Base::ascii_to_number::h59ff941f17249d67(*var_38[4], *result);
                
                if (!(result & 1))
                    break;
                
                bool cond:1_1 = *arg1;
                *arg1 = 0;
                
                if (!cond:1_1)
                    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&arg1[2]);
                
                rbp <<= *var_38[3];
                rbp += rdx_1;
            } while (r15 < r13);
            
            result = 1;
            return result;
        }
    }
    else
    {
        char* rax_2 =
            *core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(arg1, &arg1[2]);
        
        if (rax_2)
        {
            arg3 = *rax_2;
            r14 = arg2 != 1;
            goto label_4a45cd;
        }
    }
    return nullptr;
}
