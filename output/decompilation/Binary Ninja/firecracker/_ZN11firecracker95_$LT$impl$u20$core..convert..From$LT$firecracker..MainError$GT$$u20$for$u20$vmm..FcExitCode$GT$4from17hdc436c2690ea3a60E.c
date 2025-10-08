
  uint64_t firecracker::_$LT$impl$u20$core..convert..From$LT$firecracker..MainError$GT$$u20$for$u20$vmm..FcExitCode$GT$::from::hdc436c2690ea3a60(int32_t* arg1)

{
    int64_t rbx;
    rbx = 1;
    uint64_t rax_1 = *arg1 - 2;
    
    if (rax_1 <= 8)
        switch (rax_1)
        {
            case 0:
            {
                rbx = 0x99;
                break;
            }
            case 2:
            {
                rbx = 0x98;
                core::ptr::drop_in_place$LT$firecracker..MainError$GT$::h4e8408282f966ceb(arg1);
                return rbx;
                break;
            }
            case 7:
            {
                if (arg1[2] == 0x1d)
                {
                    label_559691:
                    uint32_t rbx_1 = *(arg1 + 9);
                    core::ptr::drop_in_place$LT$firecracker..MainError$GT$::h4e8408282f966ceb(arg1);
                    return rbx_1;
                }
                break;
            }
            case 8:
            {
                if (arg1[2] == 0x1c)
                    goto label_559691;
                break;
            }
        }
    
    core::ptr::drop_in_place$LT$firecracker..MainError$GT$::h4e8408282f966ceb(arg1);
    return rbx;
}
