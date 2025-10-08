
  int64_t fd::exec::command::execute_commands::h175421eda908848d(int128_t* arg1, int64_t arg2, int32_t arg3)

{
    int64_t var_2d0 = arg2;
    int64_t var_2e8 = 0;
    int64_t var_2e0 = 8;
    int64_t var_2d8 = 0;
    int64_t var_238 = arg1[2];
    int128_t var_248 = arg1[1];
    int128_t var_258 = *arg1;
    int64_t var_200;
    int64_t result;
    int64_t r12_1;
    int64_t r13_1;
    int64_t** r14_1;
    int64_t r15_1;
    int32_t var_2c8;
    int128_t var_2b8;
    int64_t var_2a8;
    int64_t** var_2a0;
    int64_t var_290;
    int64_t var_288;
    int32_t var_278;
    void var_1f0;
    int64_t var_118;
    int64_t** var_110;
    void var_108;
    int64_t** rsi_1;
    
    if (!arg3)
    {
        while (true)
        {
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58a98732210d87c(&var_118, &var_258);
            int64_t rax_3 = var_118;
            
            if (rax_3 == -0x7fffffffffffffff)
                goto label_5f25c0;
            
            rsi_1 = var_110;
            
            if (rax_3 == -0x8000000000000000)
                goto label_5f25cb;
            
            var_200 = rax_3;
            int64_t** var_1f8_2 = rsi_1;
            memcpy(&var_1f0, &var_108, 0xd8);
            argmax::Command::spawn::heb6b179f5482a956(&var_2c8, &var_200);
            
            if (var_2c8 == 1)
            {
                int64_t** var_2c0;
                var_2a0 = var_2c0;
                goto label_5f2614;
            }
            
            int128_t var_21c_1 = var_2b8;
            int128_t var_2c4;
            int128_t var_228 = var_2c4;
            std::process::Child::wait_with_output::h38fea98de738bb30(&var_2a8, &var_228);
            r12_1 = var_2a8;
            
            if (r12_1 == -0x8000000000000000)
                goto label_5f2614;
            
            r14_1 = var_2a0;
            r13_1 = var_290;
            r15_1 = var_288;
            
            if (var_278 & 0xff7f)
                break;
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r12_1, 
                r14_1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r13_1, 
                r15_1);
            core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_200);
        }
    }
    else
    {
        while (true)
        {
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58a98732210d87c(&var_118, &var_258);
            int64_t rax_1 = var_118;
            
            if (rax_1 == -0x7fffffffffffffff)
            {
                label_5f25c0:
                fd::exec::command::OutputBuffer::write::h9f1254745ddb0158(&var_2e8);
                result = 2;
                goto label_5f2653;
            }
            
            rsi_1 = var_110;
            
            if (rax_1 == -0x8000000000000000)
            {
                label_5f25cb:
                fd::exec::command::handle_cmd_error::he0c689dc29352ec0(nullptr, rsi_1);
                core::ptr::drop_in_place$LT$fd..exec..command..OutputBuffer$GT$::h4d7411562d7912bd(
                    &var_2e8);
                goto label_5f2640;
            }
            
            var_200 = rax_1;
            int64_t** var_1f8_1 = rsi_1;
            memcpy(&var_1f0, &var_108, 0xd8);
            argmax::Command::output::h28af624030da78a1(&var_2a8);
            r12_1 = var_2a8;
            
            if (r12_1 == -0x8000000000000000)
            {
                label_5f2614:
                var_2c8 = var_2a0;
                fd::exec::command::OutputBuffer::write::h9f1254745ddb0158(&var_2e8);
                fd::exec::command::handle_cmd_error::he0c689dc29352ec0(&var_200, var_2a0);
                goto label_5f263b;
            }
            
            r14_1 = var_2a0;
            r13_1 = var_290;
            r15_1 = var_288;
            int64_t var_270 = r12_1;
            int64_t** var_268_1 = r14_1;
            int64_t var_298;
            int64_t var_260_1 = var_298;
            var_2c8 = r13_1;
            int64_t var_2c0_1 = r15_1;
            int64_t var_280;
            var_2b8 = var_280;
            fd::exec::command::OutputBuffer::push::h5a6250b672ac0dfe(&var_2e8, &var_270, &var_2c8);
            
            if (var_278 & 0xff7f)
                break;
            
            core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_200);
        }
    }
    fd::exec::command::OutputBuffer::write::h9f1254745ddb0158(&var_2e8);
    
    if (!arg3)
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r12_1, r14_1);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r13_1, r15_1);
    }
    
    label_5f263b:
    core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_200);
    label_5f2640:
    result = 4;
    label_5f2653:
    return result;
}
