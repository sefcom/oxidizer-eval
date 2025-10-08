
  fn bat::input::InputKind::description::hc1a183838fcaf6dc(arg1: *mut i64, arg2: *mut i64) -> *mut u64

{
    let rcx: i64 = *arg2;
    let mut rax: i64 = 0;
    
    if rcx < -0x7ffffffffffffffe
    {
        rax = rcx - 0x7fffffffffffffff;
    }
    
    let mut result: *mut u64;
    
    if rax == 0
    {
        let mut var_30: ();
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_30, arg2[1], arg2[2]);
        result = _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(arg1, &var_30);
    }
    else
    {
        let mut rdx: u64;
        let mut rsi: *const i8;
        
        if rax != 1
        {
            rsi = "READERSTDINIO circle detected. T…";
            rdx = 6;
        }
        else
        {
            rsi = "STDINIO circle detected. The inp…";
            rdx = 5;
        }
        
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, rsi, rdx);
    }
    
    arg1[3] = -0x8000000000000000;
    arg1[6] = -0x8000000000000000;
    arg1[9] = -0x8000000000000000;
    result
}
