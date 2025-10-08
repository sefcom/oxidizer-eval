
  fn fd::walk::ReceiverBuffer$LT$W$GT$::recv::h8dbfc300797ecbf6(arg1: *mut i8, arg2: *mut i64) -> i64

{
    if arg2[0x10] != 1
    {
        /* tailcall */
        return crossbeam_channel::channel::Receiver$LT$T$GT$::recv_deadline::he57f85ea4e30a7f4(
            arg1, *arg2, arg2[1], arg2[0xa], arg2[0xb]);
    }
    
    let result: i64 =
        crossbeam_channel::channel::Receiver$LT$T$GT$::recv::hdffb11d5d62c826e(*arg2, arg2[1]);
    
    if result == 0
    {
        *arg1 = 0x101;
        return result;
    }
    
    *arg1.byte_offset(8) = result;
    *arg1 = 0;
    result
}
