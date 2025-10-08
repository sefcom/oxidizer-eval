
  int64_t alacritty::cli::ParsedOptions::from_options::h2d2b446a853b134a(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_158 = 0;
    int64_t result = 8;
    int64_t var_148 = 0;
    
    if (arg3)
    {
        void* i = arg2;
        
        do
        {
            void* i_1 = i;
            int32_t var_88;
            toml::de::from_str::hb249a18d92861147(&var_88, *(i + 8), *(i + 0x10));
            char const (** const var_138)[0x88];
            void*** var_128;
            int128_t var_e8;
            int128_t var_d8;
            int128_t var_c8;
            int128_t var_78;
            
            if (var_88 != 2)
            {
                int64_t var_38;
                int64_t var_98_1 = var_38;
                int128_t var_48;
                int128_t var_a8_1 = var_48;
                int128_t var_58;
                int128_t var_b8_1 = var_58;
                int128_t var_68;
                var_c8 = var_68;
                var_d8 = var_78;
                var_e8 = var_88;
                void** var_108 = &i_1;
                int64_t (* var_100_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
                int128_t* var_f8_1 = &var_e8;
                uint64_t (* var_f0_1)(int32_t* arg1, int64_t* arg2) = _$LT$toml..de..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h5637888e57e7e273;
                var_138 = &data_c81658;
                int64_t var_130_1 = 3;
                int64_t var_118_1 = 0;
                var_128 = &var_108;
                int64_t var_120_1 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                core::ptr::drop_in_place$LT$toml..de..error..Error$GT$::h4158bf9df3d9fe37(&var_e8);
            }
            else
            {
                var_128 = var_78;
                int128_t var_80;
                var_138 = var_80;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_88, i_1);
                var_c8 = var_128;
                int128_t var_d0_1 = var_138;
                var_e8 = var_88;
                var_d8 = var_78;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3daab237eee37720(&var_158, &var_e8);
            }
            i += 0x18;
        } while (i != arg2 + arg3 * 0x18);
    }
    
    arg1[2] = var_148;
    *arg1 = var_158;
    arg1[1] = result;
    return result;
}
