
  int64_t fd::walk::ReceiverBuffer$LT$W$GT$::new::h8e579d629470b6a2(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int128_t* arg5)

{
    int64_t var_88 = arg3;
    int64_t var_80 = arg4;
    int32_t zmm0[0x4] = *(arg2 + 0x210);
    int32_t r15 = *(arg2 + 0x198);
    int64_t rbp = *(arg2 + 0x190);
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    
    if (r15 == 0x3b9aca00)
        rbp = 0;
    
    int32_t rcx = 0x5f5e100;
    
    if (r15 != 0x3b9aca00)
        rcx = r15;
    
    int64_t rax_1;
    int32_t rdx_2;
    rax_1 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h6e1ba6fe622dc9c8(rax, rdx, rbp, rcx);
    int64_t var_78 = arg3;
    int64_t var_70 = arg4;
    int64_t var_38 = arg5[2];
    int128_t var_48 = arg5[1];
    int128_t var_58 = *arg5;
    int64_t result;
    int64_t rdx_3;
    result =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h48a23d67ea2efec0(0x3e8, 8, 0x138);
    int32_t temp0[0x4] = __paddq_xmmdq_memdq(zmm0, *data_470ba0);
    arg1[0xc] = arg2;
    *(arg1 + 0x68) = temp0;
    *arg1 = arg3;
    arg1[1] = arg4;
    int128_t zmm1_1 = arg5[1];
    *(arg1 + 0x10) = *arg5;
    *(arg1 + 0x20) = zmm1_1;
    arg1[6] = arg5[2];
    arg1[0x10] = 0;
    arg1[0xa] = rax_1;
    arg1[0xb] = rdx_2;
    arg1[7] = result;
    arg1[8] = rdx_3;
    arg1[9] = 0;
    arg1[0xf] = 0;
    return result;
}
