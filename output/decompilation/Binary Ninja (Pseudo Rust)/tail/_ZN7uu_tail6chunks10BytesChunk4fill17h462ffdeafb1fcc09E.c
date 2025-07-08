
  fn uu_tail::chunks::BytesChunk::fill::h462ffdeafb1fcc09(arg1: *mut i64, arg2: *mut i8, arg3: *mut i64) -> *mut i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rax_2: i64;
    let mut rdx: i64;
    rax_2 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h8b00b44a935690a1(arg3, arg2, 0x2000);
    
    if rax_2 == 0
    {
        *arg2.byte_offset(0x2000) = rdx;
        
        if rdx == 0
        {
            *arg1 = {0};
        }
        else
        {
            arg1[1] = 1;
            arg1[2] = rdx;
            *arg1 = 0;
        }
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[2] = &data_5bec10;
        *arg1 = 1;
    }
    
    arg1
}
