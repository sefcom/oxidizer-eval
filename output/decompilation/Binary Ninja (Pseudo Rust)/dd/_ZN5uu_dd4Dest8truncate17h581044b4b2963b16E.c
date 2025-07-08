
  fn uu_dd::Dest::truncate::h581044b4b2963b16(arg1: *mut i8) -> i64

{
    if *arg1 != 1
    {
        return 0;
    }
    
    let mut rax: i64;
    let mut result: i64;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&arg1[4], 2, 0);
    
    if rax == 0
    {
        /* tailcall */
        return std::fs::File::set_len::hd21acd2eeb028efb(&arg1[4], result);
    }
    
    result
}
