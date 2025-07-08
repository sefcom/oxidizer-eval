
  fn uu_comm::open_file::he2f4406dcd44f5f5(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i8) -> *mut i64

{
    let mut rbp: i8 = arg4;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h22cb55d7b7126493(arg2, arg3, "-0.0.28Compare two sorted files …", 1) == 0
    {
        let mut var_30: i32;
        std::fs::File::open::hd6a547187e4f2484(&var_30, arg2);
        let var_2c: i32;
        
        if var_30 == 0
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc0a86971cd481fb3(
                arg1, 0x2000, var_2c);
        }
        else
        {
            let var_28: i64;
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
    arg1
}
