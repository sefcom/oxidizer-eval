
  int128_t* uu_logname::get_userlogin::h108c28e9a29e3387(int128_t* arg1)

{
    char* rax = getlogin();
    
    if (!rax)
        *arg1 = -0x8000000000000000;
    else
    {
        int64_t var_40;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_40, rax, strlen(rax));
        int64_t var_38;
        uint64_t var_30;
        int128_t var_28;
        _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf7c0e7c1e655e4a4(&var_28, var_38, var_30);
        int64_t var_18;
        arg1[1] = var_18;
        *arg1 = var_28;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h67e132bcf0f8ee66(var_40, 
            var_38);
    }
    
    return arg1;
}
