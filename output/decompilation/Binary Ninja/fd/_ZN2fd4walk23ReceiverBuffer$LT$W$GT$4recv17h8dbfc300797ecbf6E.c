
  int64_t fd::walk::ReceiverBuffer$LT$W$GT$::recv::h8dbfc300797ecbf6(char* arg1, int64_t* arg2)

{
    if (arg2[0x10] != 1)
        /* tailcall */
        return crossbeam_channel::channel::Receiver$LT$T$GT$::recv_deadline::he57f85ea4e30a7f4(
            arg1, *arg2, arg2[1], arg2[0xa], arg2[0xb]);
    
    int64_t result =
        crossbeam_channel::channel::Receiver$LT$T$GT$::recv::hdffb11d5d62c826e(*arg2, arg2[1]);
    
    if (!result)
    {
        *arg1 = 0x101;
        return result;
    }
    
    *(arg1 + 8) = result;
    *arg1 = 0;
    return result;
}
