
  void fd::set_working_dir::h861a2d37c6d30c19(void* arg1)

{
    if (!(0 + -(*(arg1 + 0x180))))
    {
        int64_t r14_1 = *(arg1 + 0x188);
        uint64_t rbx_1 = *(arg1 + 0x190);
        
        if (fd::filesystem::is_existing_directory::h6c4a6eed8c6886fc(r14_1, rbx_1))
            /* tailcall */
            return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::hdf0967c826a78696(std::env::set_current_dir::hdd64ecf3ba7d462d(arg1 + 0x180), r14_1, rbx_1);
        
        void var_48;
        uint64_t rdx_4 =
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_48, r14_1, rbx_1);
        void* var_88 = &var_48;
        int64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
        char const (** const var_78)[0x114] = &data_802828;
        int64_t var_70_1 = 2;
        int64_t var_58_1 = 0;
        void** var_68_1 = &var_88;
        int64_t var_60_1 = 1;
        void var_30;
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_30, 0, rdx_4, &var_78);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_48);
        anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_30);
    }
}
