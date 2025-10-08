
  fn fd::exec::command::execute_commands::h175421eda908848d(arg1: *mut i128, arg2: i64, arg3: i32) -> i64

{
    let var_2d0: i64 = arg2;
    let mut var_2e8: i64 = 0;
    let var_2e0: i64 = 8;
    let var_2d8: i64 = 0;
    let var_238: i64 = arg1[2];
    let var_248: i128 = arg1[1];
    let mut var_258: i128 = *arg1;
    let mut var_200: i64;
    let mut result: i64;
    let mut r12_1: i64;
    let mut r13_1: i64;
    let mut r14_1: *mut *mut i64;
    let mut r15_1: i64;
    let mut var_2c8: i32;
    let mut var_2b8: i128;
    let mut var_2a8: i64;
    let mut var_2a0: *mut *mut i64;
    let var_290: i64;
    let var_288: i64;
    let var_278: i32;
    let mut var_1f0: ();
    let mut var_118: i64;
    let var_110: *mut *mut i64;
    let mut var_108: ();
    let mut rsi_1: *mut *mut i64;
    
    if arg3 == 0
    {
        loop
        {
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58a98732210d87c(&var_118, &var_258);
            let rax_3: i64 = var_118;
            
            if rax_3 == -0x7fffffffffffffff
            {
                goto 'label_5f25c0;
            }
            
            rsi_1 = var_110;
            
            if rax_3 == -0x8000000000000000
            {
                goto 'label_5f25cb;
            }
            
            var_200 = rax_3;
            let var_1f8_2: *mut *mut i64 = rsi_1;
            memcpy(&var_1f0, &var_108, 0xd8);
            argmax::Command::spawn::heb6b179f5482a956(&var_2c8, &var_200);
            
            if var_2c8 == 1
            {
                let var_2c0: *mut *mut i64;
                var_2a0 = var_2c0;
                goto 'label_5f2614;
            }
            
            let var_21c_1: i128 = var_2b8;
            let var_2c4: i128;
            let mut var_228: i128 = var_2c4;
            std::process::Child::wait_with_output::h38fea98de738bb30(&var_2a8, &var_228);
            r12_1 = var_2a8;
            
            if r12_1 == -0x8000000000000000
            {
                goto 'label_5f2614;
            }
            
            r14_1 = var_2a0;
            r13_1 = var_290;
            r15_1 = var_288;
            
            if (var_278 & 0xff7f) != 0
            {
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r12_1, 
                r14_1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r13_1, 
                r15_1);
            core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_200);
        }
    }
    else
    {
        loop
        {
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58a98732210d87c(&var_118, &var_258);
            let rax_1: i64 = var_118;
            
            if rax_1 == -0x7fffffffffffffff
            {
                'label_5f25c0:
                fd::exec::command::OutputBuffer::write::h9f1254745ddb0158(&var_2e8);
                result = 2;
                goto 'label_5f2653;
            }
            
            rsi_1 = var_110;
            
            if rax_1 == -0x8000000000000000
            {
                'label_5f25cb:
                fd::exec::command::handle_cmd_error::he0c689dc29352ec0(nullptr, rsi_1);
                core::ptr::drop_in_place$LT$fd..exec..command..OutputBuffer$GT$::h4d7411562d7912bd(
                    &var_2e8);
                goto 'label_5f2640;
            }
            
            var_200 = rax_1;
            let var_1f8_1: *mut *mut i64 = rsi_1;
            memcpy(&var_1f0, &var_108, 0xd8);
            argmax::Command::output::h28af624030da78a1(&var_2a8);
            r12_1 = var_2a8;
            
            if r12_1 == -0x8000000000000000
            {
                'label_5f2614:
                var_2c8 = var_2a0;
                fd::exec::command::OutputBuffer::write::h9f1254745ddb0158(&var_2e8);
                fd::exec::command::handle_cmd_error::he0c689dc29352ec0(&var_200, var_2a0);
                goto 'label_5f263b;
            }
            
            r14_1 = var_2a0;
            r13_1 = var_290;
            r15_1 = var_288;
            let mut var_270: i64 = r12_1;
            let var_268_1: *mut *mut i64 = r14_1;
            let var_298: i64;
            let var_260_1: i64 = var_298;
            var_2c8 = r13_1;
            let var_2c0_1: i64 = r15_1;
            let var_280: i64;
            var_2b8 = var_280;
            fd::exec::command::OutputBuffer::push::h5a6250b672ac0dfe(&var_2e8, &var_270, &var_2c8);
            
            if (var_278 & 0xff7f) != 0
            {
                break;
            }
            
            core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_200);
        }
    }
    fd::exec::command::OutputBuffer::write::h9f1254745ddb0158(&var_2e8);
    
    if arg3 == 0
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r12_1, r14_1);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc97baa9231dcb408(r13_1, r15_1);
    }
    
    'label_5f263b:
    core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_200);
    'label_5f2640:
    result = 4;
    'label_5f2653:
    result
}
