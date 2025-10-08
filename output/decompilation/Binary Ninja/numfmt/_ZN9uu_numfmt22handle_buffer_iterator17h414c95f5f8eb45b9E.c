
  int128_t* uu_numfmt::handle_buffer_iterator::h414c95f5f8eb45b9(int64_t arg1, char* arg2)

{
    int128_t* result = nullptr;
    int32_t rax = 0xa;
    
    if (arg2[0xc8])
        rax = 0;
    
    int32_t var_d4 = rax;
    void var_48;
    core::iter::traits::iterator::Iterator::enumerate::ha5b6576aba57f0de(&var_48, arg1);
    int64_t var_68;
    int64_t rdx = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h54f092d491cf1a5a(&var_68, &var_48);
    void* var_60;
    void* rax_1 = var_60;
    
    if (rax_1 != -0x7fffffffffffffff)
    {
        int64_t r12_1 = *(arg2 + 0xc0);
        
        while (true)
        {
            void* var_d0;
            void* const var_b8;
            int128_t var_88;
            int32_t* var_78;
            void* var_58;
            
            if (rax_1 == -0x8000000000000000)
            {
                var_d0 = var_58;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hae49a63914faa038(&var_88, &var_d0, rdx);
                int32_t* var_a0_2 = var_78;
                int128_t var_b0_1 = var_88;
                var_b8 = nullptr;
                result = alloc::boxed::Box$LT$T$GT$::new::hb6e44097f5c9c613(&var_b8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd93953e64ca236e7(&var_d0);
                break;
            }
            
            int128_t var_b0;
            int64_t var_50;
            
            if (var_68 >= r12_1)
            {
                var_b8 = rax_1;
                var_b0 = var_58;
                *var_b0[8] = var_50;
                result = uu_numfmt::format_and_handle_validation::hcfab93a3f32ae107(var_58, var_50, 
                    arg2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc2a262c10a1490f(&var_b8);
                
                if (result)
                    break;
            }
            else
            {
                var_d0 = rax_1;
                void* var_c8_1 = var_58;
                int64_t var_c0_1 = var_50;
                var_88 = &var_d0;
                *var_88[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_78 = &var_d4;
                int64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_b8 = &data_4195a0;
                var_b0 = 2;
                int64_t var_98_1 = 0;
                *var_b0[8] = &var_88;
                int64_t var_a0_1 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_b8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc2a262c10a1490f(&var_d0);
            }
            rdx = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h54f092d491cf1a5a(&var_68, &var_48);
            rax_1 = var_60;
            
            if (rax_1 == -0x7fffffffffffffff)
                return nullptr;
        }
    }
    
    return result;
}
