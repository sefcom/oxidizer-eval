
  int64_t* uu_comm::open_file::he2f4406dcd44f5f5(int64_t* arg1, int64_t arg2, uint64_t arg3, char arg4)

{
    char rbp = arg4;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h22cb55d7b7126493(arg2, arg3, "-0.0.28Compare two sorted files …", 1))
    {
        int32_t var_30;
        std::fs::File::open::hd6a547187e4f2484(&var_30, arg2);
        int32_t var_2c;
        
        if (!var_30)
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc0a86971cd481fb3(
                arg1, 0x2000, var_2c);
        else
        {
            int64_t var_28;
            *arg1 = var_28;
            rbp = 0xb;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        *arg1 = 0;
        arg1[1] = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
    }
    
    arg1[6] = rbp;
    return arg1;
}
