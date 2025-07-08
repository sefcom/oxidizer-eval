
  fn uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h21e27e94246f42e6(arg1: *mut i64, arg2: i64, arg3: i64)

{
    if arg2 < arg3
    {
        let mut rbx_1: i64 = arg2;
        let r15_1: *mut c_void = *arg1;
        let mut rax: i64;
        
        do
        {
            let rsi: i64 = *r15_1.byte_offset(0x10);
            
            if rbx_1 >= rsi
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rbx_1, rsi);
                /* no return */
            }
            
            rax = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbx_1);
            (*r15_1.byte_offset(8))[rbx_1] = 0;
            rbx_1 = rax;
        } while rax < arg3;
    }
}
