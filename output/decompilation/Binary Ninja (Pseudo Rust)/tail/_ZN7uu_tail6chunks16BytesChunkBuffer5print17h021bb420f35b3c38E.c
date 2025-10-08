
  fn uu_tail::chunks::BytesChunkBuffer::print::h021bb420f35b3c38(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let mut var_50: *mut c_void;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h5656e42254df2b37(&var_50, arg1);
    let mut rdx: *mut c_void = var_50;
    let var_48: *mut c_void;
    let mut r13: *mut c_void = var_48;
    let var_40: *mut i64;
    let mut r12: *mut i64 = var_40;
    let var_38: *mut c_void;
    let mut rcx: *mut c_void = var_38;
    let mut i: i64;
    
    do
    {
        let mut rbx_1: *mut c_void;
        let mut rbp_1: *mut i64;
        
        if rdx != r13
        {
            rbp_1 = r12;
            rbx_1 = rcx;
            rcx = r13;
            r12 = rdx;
        }
        else
        {
            rbp_1 = rdx;
            rbx_1 = rdx;
            
            if r12 == rcx
            {
                return 0;
            }
        }
        
        r13 = rcx;
        let mut rax_1: i64;
        let mut rdx_1: u64;
        rax_1 = uu_tail::chunks::BytesChunk::get_buffer::hb5949d2a788ba2a3(*r12);
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h7989dfaf5a9a1bc8(arg2, rax_1, rdx_1);
        rdx = &r12[1];
        r12 = rbp_1;
        rcx = rbx_1;
    } while i == 0;
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2()
}
