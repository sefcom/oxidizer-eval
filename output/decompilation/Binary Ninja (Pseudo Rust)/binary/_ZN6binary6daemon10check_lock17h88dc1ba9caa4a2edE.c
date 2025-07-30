
  fn binary::daemon::check_lock::h88dc1ba9caa4a2ed() -> u64

{
    let mut var_a8: *const i8;
    let mut file: *mut i8;
    let mut var_98: *const i8;
    let mut var_80: *mut *mut [i8; 0x0];
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_80 = &data_1ce7378;
        let var_78_1: i64 = 1;
        let var_70_1: i64 = 8;
        let mut var_68: i64;
        var_68 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce73d8);
        var_a8 = &data_1b00a3a[0x14];
        file = 0xe;
        var_98 = &data_1b00a3a[0x14];
        let var_90_1: i64 = 0xe;
        let var_88_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_80, 3, &var_a8);
    }
    
    let mut var_4c: i32 = geteuid();
    let mut var_48: *mut i32 = &var_4c;
    let var_40: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h590ce492d669b181;
    var_80 = &data_1ce7398;
    let var_78_2: i64 = 1;
    let var_60: i64 = 0;
    let var_70_2: *mut *mut i32 = &var_48;
    let mut var_68_1: i64 = 1;
    let mut var_38: ();
    core::option::Option$LT$T$GT$::map_or_else::h177781a9cee4dfe1(&var_38, &var_80);
    _$LT$T$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h539e9514334bfe11(&var_a8, &var_38);
    let mut rbp: i32;
    
    if !(0 + -(var_a8))
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..ffi..c_str..CString$C$alloc..ffi..c_str..NulError$GT$$GT$::hcfeb4ce00913d88e(&var_a8);
        
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
        {
            var_80 = &data_1ce7388;
            let var_78_4: i64 = 1;
            let var_70_4: i64 = 8;
            var_68_1 = {0};
            let rax_9: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7438);
            var_a8 = &data_1b00a3a[0x14];
            let var_a0_1: i64 = 0xe;
            let var_98_2: *const i8 = &data_1b00a3a[0x14];
            let var_90_3: i64 = 0xe;
            let var_88_3: i64 = rax_9;
            log::__private_api::log::h450dfdf51a11f9e0(&var_80, 1, &var_a8);
        }
        
        rbp = 0;
    }
    else
    {
        let rax_4: i32 = open(file, 0x42, 0x180);
        
        if rax_4 < 0
        {
            if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
            {
                var_80 = &data_1ce73a8;
                let var_78_5: i64 = 1;
                let var_70_5: i64 = 8;
                var_68_1 = {0};
                let rax_11: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7420);
                var_a8 = &data_1b00a3a[0x14];
                let var_a0_2: i64 = 0xe;
                let var_98_3: *const i8 = &data_1b00a3a[0x14];
                let var_90_4: i64 = 0xe;
                let var_88_4: i64 = rax_11;
                log::__private_api::log::h450dfdf51a11f9e0(&var_80, 1, &var_a8);
            }
            
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(file, 
                var_98);
            rbp = 0;
        }
        else
        {
            let rax_5: i32 = flock(rax_4, 6);
            let rax_6: u64 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
            rbp = rax_5 == 0;
            
            if rax_5 == 0
            {
                if rax_6 > 2
                {
                    var_80 = &data_1ce73b8;
                    let var_78_6: i64 = 1;
                    let var_70_6: i64 = 8;
                    var_68_1 = {0};
                    let rax_12: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce73f0);
                    var_a8 = &data_1b00a3a[0x14];
                    let var_a0_3: i64 = 0xe;
                    let var_98_4: *const i8 = &data_1b00a3a[0x14];
                    let var_90_5: i64 = 0xe;
                    let var_88_5: i64 = rax_12;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_80, 3, &var_a8);
                }
            }
            else if rax_6 > 1
            {
                var_80 = &data_1ce73c8;
                let var_78_3: i64 = 1;
                let var_70_3: i64 = 8;
                var_68_1 = {0};
                let rax_7: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7408);
                var_a8 = &data_1b00a3a[0x14];
                let var_a0: i64 = 0xe;
                let var_98_1: *const i8 = &data_1b00a3a[0x14];
                let var_90_2: i64 = 0xe;
                let var_88_2: i64 = rax_7;
                log::__private_api::log::h450dfdf51a11f9e0(&var_80, 2, &var_a8);
            }
            
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(file, 
                var_98);
        }
    }
    
    rbp
}
