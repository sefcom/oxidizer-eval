
  int64_t uu_dd::Dest::truncate::h581044b4b2963b16(char* arg1)

{
    if (*arg1 != 1)
        return 0;
    
    int64_t rax;
    int64_t result;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&arg1[4], 2, 0);
    
    if (!rax)
        /* tailcall */
        return std::fs::File::set_len::hd21acd2eeb028efb(&arg1[4], result);
    
    return result;
}
