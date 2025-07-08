
  int64_t uu_wc::word_count_from_input::h9c6b7f02841e6225(int64_t* arg1, int64_t* arg2, void* arg3)

{
    int64_t result;
    int32_t var_50;
    int128_t var_40;
    
    if (*arg2 != -0x7fffffffffffffff)
    {
        std::fs::File::open::h29294cdd33afafbd(&var_50, arg2);
        
        if (!var_50)
        {
            int32_t var_4c;
            uu_wc::word_count_from_reader::hd0ebac2d03e30fcc(&var_40, var_4c, arg3);
            goto label_4bce23;
        }
        
        int64_t result_1;
        result = result_1;
        arg1[1] = result;
        *arg1 = 2;
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        var_50 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
        int32_t* rax_1;
        char rdx;
        rax_1 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_50);
        uu_wc::word_count_from_reader::h5f3d93b09ec956fa(&var_40, rax_1, rdx & 1, arg3);
        label_4bce23:
        int64_t var_20;
        arg1[5] = var_20;
        int128_t zmm0_1 = var_40;
        int128_t var_30;
        *(arg1 + 0x18) = var_30;
        *(arg1 + 8) = zmm0_1;
        int64_t var_18;
        
        if (!var_18)
            result = 0;
        else
        {
            arg1[6] = var_18;
            result = 1;
        }
        
        *arg1 = result;
    }
    return result;
}
