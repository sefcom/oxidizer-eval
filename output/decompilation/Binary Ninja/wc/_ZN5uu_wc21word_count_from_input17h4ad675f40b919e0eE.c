
  int64_t uu_wc::word_count_from_input::h4ad675f40b919e0e(int64_t* arg1, int64_t* arg2, void* arg3)

{
    int128_t var_68;
    int32_t var_78;
    
    if (*arg2 != -0x7fffffffffffffff)
    {
        std::fs::File::open::h9157e31c826b10c5(&var_78, arg2);
        
        if (var_78 == 1)
        {
            int64_t var_70;
            arg1[1] = var_70;
            *arg1 = 2;
            return var_70;
        }
        
        int32_t var_74;
        uu_wc::word_count_from_reader::h8dd899ec4189add4(&var_68, var_74, arg3);
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        var_78 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        int32_t* rax_1;
        char rdx;
        rax_1 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_78);
        uu_wc::word_count_from_reader::h0362b4aa77d3dadd(&var_68, rax_1, rdx & 1, arg3);
    }
    int64_t var_48;
    int64_t var_18 = var_48;
    int128_t zmm0 = var_68;
    int128_t var_58;
    int128_t var_28 = var_58;
    int128_t var_38 = zmm0;
    arg1[5] = var_48;
    *(arg1 + 0x18) = var_58;
    *(arg1 + 8) = zmm0;
    int64_t var_40;
    int64_t rax_4;
    
    if (!var_40)
        rax_4 = 0;
    else
    {
        arg1[6] = var_40;
        rax_4 = 1;
    }
    
    *arg1 = rax_4;
    return rax_4;
}
