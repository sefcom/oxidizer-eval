
  int64_t fd::exec::CommandBuilder::new::hca05f3b06b44effd(int64_t* arg1, int32_t* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_268 = 0;
    int64_t var_260 = 8;
    int64_t var_258 = 0;
    int64_t var_228 = 2;
    int64_t var_250 = 0;
    int64_t var_248 = 8;
    int64_t var_240 = 0;
    int128_t var_220;
    int64_t var_210;
    int64_t var_208;
    int64_t var_1f8;
    int64_t var_118;
    int64_t var_108;
    int64_t rdx_3;
    int64_t rsi_5;
    int64_t r14_1;
    
    if (!arg3)
    {
        rsi_5 = 8;
        r14_1 = 2;
        rdx_3 = 0;
    }
    else
    {
        int32_t* r12_1 = arg2;
        int64_t i_1 = arg3 << 5;
        int64_t* r13_1 = &var_208;
        int64_t rbx_1 = 2;
        int64_t i;
        
        do
        {
            if (!*r12_1)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7df9c0162a275d7c(r13_1, *(r12_1 + 0x10), *(r12_1 + 0x18));
                var_108 = var_1f8;
                var_118 = var_208;
                core::ptr::drop_in_place$LT$core..option..Option$LT$fd..fmt..FormatTemplate$GT$$GT$::he3b111ca2613cc1d(&var_228);
                var_228 = 0;
                var_210 = var_108;
                var_220 = var_118;
                r14_1 = 0;
                rbx_1 = 0;
            }
            else if (rbx_1 != 2)
            {
                r13_1 = fd::fmt::FormatTemplate::generate::he820548229a842f6(r13_1, r12_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd0e2cf8889d82ba1(&var_250, r13_1);
            }
            else
            {
                r13_1 = fd::fmt::FormatTemplate::generate::he820548229a842f6(r13_1, r12_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd0e2cf8889d82ba1(&var_268, r13_1);
                rbx_1 = 2;
            }
            
            r12_1 = &r12_1[8];
            i = i_1;
            i_1 -= 0x20;
        } while (i != 0x20);
        rsi_5 = var_260;
        rdx_3 = var_258;
    }
    
    fd::exec::CommandBuilder::new_command::hd2fd042878a0df86(&var_208, rsi_5, rdx_3);
    int64_t r15_2 = var_208;
    int64_t var_200;
    
    if (-(r15_2) == -0x8000000000000000)
    {
        arg1[1] = var_200;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h2424945981df19d6(&var_250);
        core::ptr::drop_in_place$LT$core..option..Option$LT$fd..fmt..FormatTemplate$GT$$GT$::he3b111ca2613cc1d(&var_228);
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h2424945981df19d6(&var_268);
    }
    
    memcpy(&var_108, &var_1f8, 0xd8);
    var_118 = r15_2;
    int64_t var_110_1 = var_200;
    var_1f8 = var_258;
    var_208 = var_268;
    
    if (r14_1 == 2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    arg1[3] = var_210;
    *(arg1 + 8) = var_220;
    *(arg1 + 0x38) = var_250;
    arg1[9] = var_240;
    memcpy(&arg1[0xa], &var_118, 0xe8);
    *(arg1 + 0x20) = var_268;
    arg1[6] = var_258;
    *arg1 = r14_1;
    arg1[0x27] = 0;
    arg1[0x28] = arg4;
    arg1[0x29] = 2;
    return arg4;
}
