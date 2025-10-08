
  int64_t uu_split::number::FixedWidthNumber::new::h658afa50ae467836(int64_t* arg1, char arg2, int64_t arg3, uint64_t arg4)

{
    uint64_t r15 = arg4;
    int128_t var_38;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h2ddf162ee73cff42(
        &var_38, arg3);
    uint64_t rcx = arg2;
    int64_t result;
    int64_t rdi_1 = result - 1;
    bool cond:0_1;
    
    do
    {
        uint8_t* var_30;
        
        if (rdi_1 == -1)
        {
            if (!r15)
                break;
            
            *arg1 = -0x8000000000000000;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                var_38, var_30);
        }
        
        if (!result)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_1, result);
            /* no return */
        }
        
        uint64_t rax_2;
        uint8_t rdx_2;
        
        if (r15 >> 0x20)
        {
            int64_t rdx_1 = 0;
            rax_2 = COMBINE(rdx_1, r15) / rcx;
            rdx_2 = COMBINE(rdx_1, r15) % rcx;
        }
        else
        {
            int32_t rax_5 = r15;
            int32_t temp2_2 = rcx;
            rax_2 = COMBINE(0, rax_5) / temp2_2;
            rdx_2 = COMBINE(0, rax_5) % temp2_2;
        }
        
        var_30[rdi_1] = rdx_2;
        rdi_1 -= 1;
        cond:0_1 = r15 < rcx;
        r15 = rax_2;
    } while (!cond:0_1);
    arg1[2] = result;
    *arg1 = var_38;
    arg1[3] = arg2;
    return result;
}
