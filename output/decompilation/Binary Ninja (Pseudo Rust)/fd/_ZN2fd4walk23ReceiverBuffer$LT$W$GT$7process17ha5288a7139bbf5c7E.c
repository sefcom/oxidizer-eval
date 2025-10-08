
  fn fd::walk::ReceiverBuffer$LT$W$GT$::process::ha5288a7139bbf5c7(arg1: *mut i64) -> u64

{
    let mut rax_1: i32;
    
    do
    {
        rax_1 = fd::walk::ReceiverBuffer$LT$W$GT$::poll::h9f4121b39c66ee5a(arg1);
    } while rax_1 == 6;
    
    core::sync::atomic::atomic_store::hf57dd38608de6f70(arg1[0xd], 1, 0);
    rax_1
}
