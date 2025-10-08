
  fn uu_sleep::sleep::hed540e60219cbc17(arg1: *mut c_void, arg2: i64) -> u64

{
    let mut var_29: i8 = 0;
    let mut rax: i64;
    let mut rdx_1: i32;
    rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h9e9a00eeb2bdba92(arg1, (arg2 << 4) + arg1, &var_29);
    
    if var_29 == 0
    {
        std::thread::sleep::h12eb239213be7934(rax, rdx_1);
        return 0;
    }
    
    let mut var_28: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h70efb2df60242032(&var_28);
    let var_10: i32 = 1;
    alloc::boxed::Box$LT$T$GT$::new::h1df68ea8a89b5010(&var_28)
}
