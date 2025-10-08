
  fn just::assignment_resolver::AssignmentResolver::resolve_assignments::h326a32445f9866d5(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let var_d8: *mut i64 = arg2;
    let var_d0: i64 = 0;
    let var_c0: i64 = 0;
    let mut var_f0: i64 = 0;
    let var_e8: i64 = 8;
    let var_e0: i64 = 0;
    let rax: i64 = *arg2;
    let rcx: i64 = arg2[1];
    let mut rdi: i64 = rax;
    
    if rax != 0
    {
        rdi = arg2[2];
    }
    
    let mut rdx: i64;
    rdx = rax != 0;
    let mut var_b8: i64 = rdx;
    let var_b0: i64 = 0;
    let var_a8: i64 = rax;
    let var_a0: i64 = rcx;
    let var_98: i64 = rdx;
    let var_90: i64 = 0;
    let var_88: i64 = rax;
    let var_80: i64 = rcx;
    let var_78: i64 = rdi;
    
    loop
    {
        let rax_1: *mut i64 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6442f8fd74f44bbc(&var_b8);
        
        if rax_1 == 0
        {
            *arg1.byte_offset(0x48) = 0x25;
            break;
        }
        
        let mut var_70: i128;
        just::assignment_resolver::AssignmentResolver::resolve_assignment::hc41d0fa4a847f48d(
            &var_70, &var_f0, *rax_1, rax_1[1]);
        let var_28: i8;
        
        if var_28 != 0x25
        {
            let var_30: i128;
            arg1[4] = var_30;
            let zmm0_1: i128 = var_70;
            let var_40: i128;
            arg1[3] = var_40;
            let var_50: i128;
            arg1[2] = var_50;
            let var_60: i128;
            arg1[1] = var_60;
            *arg1 = zmm0_1;
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$just..assignment_resolver..AssignmentResolver$GT$::h0fc26a71e15d6efc(&var_f0)
}
