
  uint64_t uu_join::State::extend::h2ec74ec0241156b7(int64_t* arg1, int64_t* arg2, char* arg3)

{
    int64_t i_1;
    uu_join::State::next_line::h97dbe53d754c4271(&i_1, arg2, arg3);
    int64_t i = i_1;
    int128_t var_e8;
    int128_t var_90;
    int64_t var_80;
    uint64_t result;
    
    if (i != -0x7fffffffffffffff)
    {
        char rcx_1 = *arg3;
        
        do
        {
            var_e8 = var_90;
            int64_t var_48_1 = var_80;
            int128_t zmm0_1 = var_e8;
            int64_t i_2 = i;
            
            if (i == -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&i_2);
                result = arg1;
                *result = -0x8000000000000000;
                return result;
            }
            
            int64_t i_3 = i_2;
            int64_t var_c0_1 = zmm0_1;
            int64_t rax_1;
            uint64_t rdx;
            rax_1 = uu_join::State::get_current_key::hb0aa7b8c555c38dc(arg2);
            int64_t rax_2;
            uint64_t rdx_1;
            rax_2 = uu_join::Line::get_field::h5172ba7928bd7492(&i_3, arg2[8]);
            
            if (uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(rcx_1, rax_1, rdx, rax_2, 
                rdx_1))
            {
                int128_t zmm0_2 = i_3;
                result = arg1;
                int128_t var_78;
                *(result + 0x20) = var_78;
                *(result + 0x10) = zmm0_1;
                *result = zmm0_2;
                return result;
            }
            
            var_90 = zmm0_1;
            i_1 = i_3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h1e462bd96175ed88(arg2, &i_1);
            uu_join::State::next_line::h97dbe53d754c4271(&i_1, arg2, arg3);
            i = i_1;
        } while (i != -0x7fffffffffffffff);
    }
    
    int64_t var_d8_2 = var_80;
    var_e8 = var_90;
    result = alloc::boxed::Box$LT$T$GT$::new::hbde49e4af2e5852b(&var_e8);
    arg1[1] = result;
    arg1[2] = &data_4fd398;
    *arg1 = -0x7fffffffffffffff;
    return result;
}
