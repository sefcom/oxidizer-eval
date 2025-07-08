
  fn uu_tail::chunks::BytesChunk::fill::h279f4168ddc7429a(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void) -> *mut i128

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut result: *mut i128;
    let mut rdx_1: i64;
    result = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::haa1e65e69010f7db(arg3, arg4, arg2);
    
    if result == 0
    {
        *arg2.byte_offset(0x2000) = rdx_1;
        
        if rdx_1 == 0
        {
            *arg1 = {0};
        }
        else
        {
            arg1[1] = 1;
            arg1[2] = rdx_1;
            *arg1 = 0;
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[1] = result;
        arg1[2] = &data_5bec10;
        *arg1 = 1;
    }
    
    result
}
