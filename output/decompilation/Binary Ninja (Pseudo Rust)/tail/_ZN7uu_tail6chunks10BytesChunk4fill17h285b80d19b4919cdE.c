
  fn uu_tail::chunks::BytesChunk::fill::h285b80d19b4919cd(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void) -> u64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hdf40666c924fad72(arg3, arg4, arg2);
    
    if (rax_1 & 1) != 0
    {
        let rax_2: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[1] = rax_2;
        arg1[2] = &data_575cd0;
        *arg1 = 1;
        return rax_2;
    }
    
    *arg2.byte_offset(0x2000) = rdx_1;
    
    if rdx_1 == 0
    {
        *arg1 = {0};
        return rax_1;
    }
    
    arg1[1] = 1;
    arg1[2] = rdx_1;
    *arg1 = 0;
    rax_1
}
