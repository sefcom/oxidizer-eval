
  int128_t* uu_numfmt::format_and_handle_validation::hcfab93a3f32ae107(int64_t arg1, int64_t arg2, char* arg3)

{
    int64_t var_30 = arg1;
    int64_t var_28 = arg2;
    int64_t var_80;
    int128_t* result =
        uu_numfmt::format::format_and_print::h5bf849f061ae056f(&var_80, arg1, arg2, arg3);
    
    if (0 + -(var_80))
        return result;
    
    int64_t var_70;
    int64_t var_38_1 = var_70;
    int128_t var_48 = var_80;
    int64_t rbp;
    rbp = 1;
    void* const var_d0;
    int128_t var_c8;
    int64_t* var_a0;
    int64_t** var_68;
    
    switch (jump_table_41a43c[arg3[0xc9]])
    {
        case 0x51db5:
        {
            int64_t var_b8_1 = var_70;
            int128_t var_c8_1 = var_80;
            var_d0 = 2;
            return alloc::boxed::Box$LT$T$GT$::new::h9fc007057db03ec8(&var_d0);
            break;
        }
        case 0x51de1:
        {
            int64_t var_50_1 = var_70;
            int128_t var_60_1 = var_80;
            var_68 = 2;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(2);
            int64_t rax_6;
            int64_t rdx_1;
            rax_6 = uucore::util_name::h074417a1e6395129();
            int64_t var_20 = rax_6;
            int64_t var_18_1 = rdx_1;
            var_a0 = &var_20;
            int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
            int64_t*** var_90_1 = &var_68;
            int64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = _$LT$uu_numfmt..errors..NumfmtError$u20$as$u20$core..fmt..Display$GT$::fmt::h88668725e89ac501;
            var_d0 = &data_502708;
            var_c8 = 3;
            int64_t var_b0_1 = 0;
            *var_c8[8] = &var_a0;
            int64_t var_b8_2 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$uu_numfmt..errors..NumfmtError$GT$::h84537972f923e6b2(
                &var_68);
            rbp = 0;
            label_46c394:
            var_a0 = &var_30;
            int64_t (* var_98_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
            var_d0 = &data_502758;
            var_c8 = 2;
            int64_t var_b0_4 = 0;
            *var_c8[8] = &var_a0;
            int64_t var_b8_5 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
            
            if (rbp)
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_48);
            
            return nullptr;
            break;
        }
        case 0x51e9e:
        {
            int64_t* rax_7;
            int64_t rdx_2;
            rax_7 = uucore::util_name::h074417a1e6395129();
            var_a0 = rax_7;
            int64_t var_98_2 = rdx_2;
            var_68 = &var_a0;
            int128_t var_60;
            var_60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
            var_d0 = &data_502738;
            var_c8 = 2;
            int64_t var_b0_2 = 0;
            *var_c8[8] = &var_68;
            int64_t var_b8_3 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            var_a0 = &var_48;
            int64_t (* var_98_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_502758;
            var_c8 = 2;
            int64_t var_b0_3 = 0;
            *var_c8[8] = &var_a0;
            int64_t var_b8_4 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            goto label_46c394;
        }
        case 0x51f50:
        {
            goto label_46c394;
        }
    }
}
