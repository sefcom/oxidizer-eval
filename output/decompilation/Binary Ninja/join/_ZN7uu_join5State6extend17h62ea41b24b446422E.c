
  int128_t* uu_join::State::extend::h62ea41b24b446422(int64_t* arg1, int64_t* arg2, char* arg3)

{
    int64_t i_1;
    uu_join::State::next_line::hdcd6fa155f18f200(&i_1, arg2, arg3);
    int64_t i = i_1;
    int128_t var_e0;
    int64_t var_d0;
    int128_t* result;
    
    if (i != -0x7fffffffffffffff)
    {
        char rcx_1 = *arg3;
        
        do
        {
            int64_t var_48_1 = var_d0;
            int64_t i_2 = i;
            
            if (i == -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&i_2);
                result = arg1;
                *result = -0x8000000000000000;
                return result;
            }
            
            int64_t i_3 = i_2;
            int64_t var_90_1 = var_e0;
            int64_t rax_1;
            uint64_t rdx;
            rax_1 = uu_join::State::get_current_key::h6b22667ac5a703a7(arg2);
            int64_t rax_2;
            uint64_t rdx_1;
            rax_2 = uu_join::Line::get_field::h7dd14bed39768627(&i_3, arg2[8]);
            
            if (uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(rcx_1, rax_1, rdx, rax_2, 
                rdx_1))
            {
                int128_t zmm0_2 = i_3;
                result = arg1;
                int128_t var_c8;
                result[2] = var_c8;
                result[1] = var_e0;
                *result = zmm0_2;
                return result;
            }
            
            i_1 = i_3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hb39c05ee85860ab5(arg2, &i_1);
            uu_join::State::next_line::hdcd6fa155f18f200(&i_1, arg2, arg3);
            i = i_1;
        } while (i != -0x7fffffffffffffff);
    }
    
    int64_t var_a8_2 = var_d0;
    int128_t zmm0_1 = var_e0;
    int128_t var_b8_2 = zmm0_1;
    *var_e0[8] = var_d0;
    i_1 = zmm0_1;
    result = alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&i_1);
    arg1[1] = result;
    arg1[2] = &data_5326b8;
    *arg1 = -0x7fffffffffffffff;
    return result;
}
