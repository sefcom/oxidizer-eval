
  int64_t uu_rm::remove_file::hfb41d07f759de271(int64_t arg1, uint64_t arg2, char arg3, char arg4)

{
    if (uu_rm::prompt_file::h2c52052acc0b58bb(arg1, arg2, arg4))
    {
        int64_t* rax_1 = std::fs::remove_file::hccd6459e5c502755(arg1);
        void* const var_a8;
        int64_t var_78;
        int64_t* var_58;
        int128_t var_50;
        int64_t* var_38;
        
        if (rax_1)
        {
            var_38 = rax_1;
            int128_t var_70;
            
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(rax_1) != 1)
            {
                int64_t rax_4;
                int64_t rdx_3;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_78 = rax_4;
                var_70 = rdx_3;
                var_58 = &var_78;
                var_50 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_a8 = &data_527970;
                int64_t var_a0_4 = 2;
                int64_t var_88_4 = 0;
                int64_t** var_98_4 = &var_58;
                int64_t var_90_4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
                var_78 = 1;
                var_70 = arg1;
                *var_70[8] = arg2;
                char var_60_3 = 1;
                var_58 = &var_78;
                var_50 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                *var_50[8] = &var_38;
                int64_t (* var_40_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_a8 = &data_5279d0;
                int64_t var_a0_5 = 3;
                int64_t var_88_5 = 0;
                int64_t** var_98_5 = &var_58;
                int64_t var_90_5 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
            }
            else
            {
                int64_t rax_3;
                int64_t rdx_1;
                rax_3 = uucore::util_name::h60d842bf27b05e82();
                var_78 = rax_3;
                var_70 = rdx_1;
                var_58 = &var_78;
                var_50 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_a8 = &data_527970;
                int64_t var_a0_1 = 2;
                int64_t var_88_1 = 0;
                int64_t** var_98_1 = &var_58;
                int64_t var_90_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
                var_78 = 1;
                var_70 = arg1;
                *var_70[8] = arg2;
                char var_60_1 = 1;
                var_58 = &var_78;
                var_50 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_a8 = &data_5279b0;
                int64_t var_a0_2 = 2;
                int64_t var_88_2 = 0;
                int64_t** var_98_2 = &var_58;
                int64_t var_90_2 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
            }
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_38);
            int64_t result;
            result = 1;
            return result;
        }
        
        if (arg3)
        {
            uu_rm::normalize::hc5c72b2dd9f7b482(&var_58, arg1);
            var_78 = 1;
            int128_t var_70_1 = var_50;
            char var_60_2 = 1;
            var_38 = &var_78;
            int64_t (* var_30_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_a8 = &data_527ac8;
            int64_t var_a0_3 = 2;
            int64_t var_88_3 = 0;
            int64_t** var_98_3 = &var_38;
            int64_t var_90_3 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_a8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7c5c2bfda3b8aa48(&var_58);
        }
    }
    
    return 0;
}
