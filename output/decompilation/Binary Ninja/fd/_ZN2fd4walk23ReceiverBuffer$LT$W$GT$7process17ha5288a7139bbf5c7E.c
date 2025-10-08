
  uint64_t fd::walk::ReceiverBuffer$LT$W$GT$::process::ha5288a7139bbf5c7(int64_t* arg1)

{
    int32_t rax_1;
    
    do
        rax_1 = fd::walk::ReceiverBuffer$LT$W$GT$::poll::h9f4121b39c66ee5a(arg1);
     while (rax_1 == 6);
    
    core::sync::atomic::atomic_store::hf57dd38608de6f70(arg1[0xd], 1, 0);
    return rax_1;
}
