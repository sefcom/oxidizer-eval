
  fn fd::walk::ReceiverBuffer$LT$W$GT$::new::h8e579d629470b6a2(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut i128) -> i64

{
    let var_88: i64 = arg3;
    let var_80: i64 = arg4;
    let zmm0: [i32; 0x4] = *arg2.byte_offset(0x210);
    let r15: i32 = *arg2.byte_offset(0x198);
    let mut rbp: i64 = *arg2.byte_offset(0x190);
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    
    if r15 == 0x3b9aca00
    {
        rbp = 0;
    }
    
    let mut rcx: i32 = 0x5f5e100;
    
    if r15 != 0x3b9aca00
    {
        rcx = r15;
    }
    
    let mut rax_1: i64;
    let mut rdx_2: i32;
    rax_1 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h6e1ba6fe622dc9c8(rax, rdx, rbp, rcx);
    let var_78: i64 = arg3;
    let var_70: i64 = arg4;
    let var_38: i64 = arg5[2];
    let var_48: i128 = arg5[1];
    let var_58: i128 = *arg5;
    let mut result: i64;
    let mut rdx_3: i64;
    result =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h48a23d67ea2efec0(0x3e8, 8, 0x138);
    let temp0: [i32; 0x4] = __paddq_xmmdq_memdq(zmm0, *data_470ba0);
    arg1[0xc] = arg2;
    *arg1.byte_offset(0x68) = temp0;
    *arg1 = arg3;
    arg1[1] = arg4;
    let zmm1_1: i128 = arg5[1];
    *arg1.byte_offset(0x10) = *arg5;
    *arg1.byte_offset(0x20) = zmm1_1;
    arg1[6] = arg5[2];
    arg1[0x10] = 0;
    arg1[0xa] = rax_1;
    arg1[0xb] = rdx_2;
    arg1[7] = result;
    arg1[8] = rdx_3;
    arg1[9] = 0;
    arg1[0xf] = 0;
    result
}
