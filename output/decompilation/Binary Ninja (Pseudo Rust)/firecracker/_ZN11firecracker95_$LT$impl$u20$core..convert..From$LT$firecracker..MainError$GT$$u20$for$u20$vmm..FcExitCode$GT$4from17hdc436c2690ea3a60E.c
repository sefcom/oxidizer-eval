
  fn firecracker::_$LT$impl$u20$core..convert..From$LT$firecracker..MainError$GT$$u20$for$u20$vmm..FcExitCode$GT$::from::hdc436c2690ea3a60(arg1: *mut i32) -> u64

{
    let mut rbx: i64;
    rbx = 1;
    let rax_1: u64 = *arg1 - 2;
    
    if rax_1 <= 8
    {
        match rax_1
        {
            0 =>
            {
                rbx = 0x99;
            }
            2 =>
            {
                rbx = 0x98;
                core::ptr::drop_in_place$LT$firecracker..MainError$GT$::h4e8408282f966ceb(arg1);
                return rbx;
            }
            7 =>
            {
                if arg1[2] == 0x1d
                {
                    'label_559691:
                    let rbx_1: u32 = *arg1.byte_offset(9);
                    core::ptr::drop_in_place$LT$firecracker..MainError$GT$::h4e8408282f966ceb(arg1);
                    return rbx_1;
                }
            }
            8 =>
            {
                if arg1[2] == 0x1c
                {
                    goto 'label_559691;
                }
            }
        }
    }
    
    core::ptr::drop_in_place$LT$firecracker..MainError$GT$::h4e8408282f966ceb(arg1);
    rbx
}
