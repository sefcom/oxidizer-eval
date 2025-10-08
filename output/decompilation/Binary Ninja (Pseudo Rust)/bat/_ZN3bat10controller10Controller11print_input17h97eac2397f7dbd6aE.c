
  fn bat::controller::Controller::print_input::h97eac2397f7dbd6a(arg1: *mut i8, arg2: *mut *mut c_void, arg3: *mut i128, arg4: i64, arg5: *mut i64, arg6: i8) -> i64

{
    let mut result_2: i64;
    bat::input::Input::open::h6e316d3a9e9c7871(&result_2, arg3, arg5);
    let result: i64 = result_2;
    let var_568: i128;
    let var_558: i128;
    let var_548: i128;
    let var_538: i128;
    let var_528: i128;
    
    if result == 2
    {
        *arg1.byte_offset(0x40) = var_528;
        *arg1.byte_offset(0x30) = var_538;
        *arg1.byte_offset(0x20) = var_548;
        *arg1.byte_offset(0x10) = var_558;
        *arg1 = var_568;
        return result;
    }
    
    let var_4a8: i64;
    let var_578_1: i64 = var_4a8;
    let var_4c8: i128;
    let var_598_1: i128 = var_4c8;
    let var_4d8: i128;
    let var_5a8_1: i128 = var_4d8;
    let var_4e8: i128;
    let var_5b8_1: i128 = var_4e8;
    let var_4f8: i128;
    let var_5c8_1: i128 = var_4f8;
    let var_508: i128;
    let var_5d8_1: i128 = var_508;
    let mut var_518: i128;
    let var_5e8_1: i128 = var_518;
    let var_638_1: i128 = var_568;
    let var_628_1: i128 = var_558;
    let var_618_1: i128 = var_548;
    let var_608_1: i128 = var_538;
    let var_5f8_1: i128 = var_528;
    let mut result_1: i64 = result;
    let r12_1: *mut c_void = *arg2;
    let mut var_678: i64;
    
    if !(0 + -(*r12_1.byte_offset(0x90)))
    {
        if *r12_1.byte_offset(0x123) == 0
        {
            if bat::style::StyleComponents::changes::h3017c14c66493a5a(r12_1.byte_offset(0xc0)) != 0
            {
                goto 'label_8378c3;
            }
            
            goto 'label_837952;
        }
        
        'label_837952:
        var_678 = 0;
        let mut r12_2: u64;
        let mut r13_1: *mut i64;
        
        if *r12_1.byte_offset(0x123) == 0
        {
            'label_8379cb:
            bat::printer::InteractivePrinter::new::h3075e4c9ed50f526(&result_2, r12_1, arg2[1], 
                &result_1, &var_678);
            let result_4: i64 = result_2;
            
            if result_4 != -0x8000000000000000
            {
                let mut var_278: ();
                memcpy(&var_278, &var_518, 0x248);
                let mut result_5: i64 = result_4;
                let var_2c8_1: i128 = var_568;
                let var_2b8_1: i128 = var_558;
                let var_2a8_1: i128 = var_548;
                let var_298_1: i128 = var_538;
                let var_288_1: i128 = var_528;
                r12_2 = alloc::boxed::Box$LT$T$GT$::new::h574a8dd6a77286bc(&result_5);
                r13_1 = &data_ace320;
                bat::controller::Controller::print_file::hf96ad44d7a2ebb76(arg1, arg2, r12_2, 
                    r13_1, arg4, &result_1, arg6 ^ 1, &var_678);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h82d9a51932ef5499(r12_2, r13_1);
            }
            else
            {
                *arg1.byte_offset(0x40) = var_528;
                *arg1.byte_offset(0x30) = var_538;
                *arg1.byte_offset(0x20) = var_548;
                *arg1.byte_offset(0x10) = var_558;
                *arg1 = var_568;
            }
        }
        else
        {
            'label_83796e:
            r12_2 = alloc::boxed::Box$LT$T$GT$::new::hb162ef197d91647c(r12_1);
            r13_1 = &data_ace358;
            bat::controller::Controller::print_file::hf96ad44d7a2ebb76(arg1, arg2, r12_2, r13_1, 
                arg4, &result_1, arg6 ^ 1, &var_678);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h82d9a51932ef5499(r12_2, r13_1);
        }
        let var_670: i64;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..map..HashMap$LT$u32$C$bat..diff..LineChange$GT$$GT$$GT$::h59836b20c3c51515(var_678, var_670);
    }
    else
    {
        'label_8378c3:
        let var_4b8: i128;
        
        if var_4b8 <= -0x7fffffffffffffff
        {
            if *r12_1.byte_offset(0x90) != -0x8000000000000000
            {
                goto 'label_837952;
            }
            
            *arg1 = 0xd;
        }
        else
        {
            bat::diff::get_git_diff::h667532c9f3b17451(&result_2, *var_4b8[8]);
            let mut result_3: i64;
            
            if *r12_1.byte_offset(0x90) == -0x8000000000000000
            {
                result_3 = result_2;
            }
            
            if *r12_1.byte_offset(0x90) != -0x8000000000000000 || result_3 == 0 || var_558 != 0
            {
                let var_658_1: i128 = var_558;
                let var_668_1: i128 = var_568;
                var_678 = result_2;
                
                if *r12_1.byte_offset(0x123) != 0
                {
                    goto 'label_83796e;
                }
                
                goto 'label_8379cb;
            }
            
            *arg1 = 0xd;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..map..HashMap$LT$u32$C$bat..diff..LineChange$GT$$GT$$GT$::h59836b20c3c51515(result_3, var_568);
        }
    }
    core::ptr::drop_in_place$LT$bat..input..OpenedInput$GT$::h606eb83b30f2e745(&result_1)
}
