
  fn just::justfile::Justfile::check_unstable::he04de0852efda7ff(arg1: *mut i8, arg2: *mut c_void, arg3: i8) -> u64

{
    let rax: i64 = *arg2.byte_offset(0x2d0);
    let rcx: i64 = *arg2.byte_offset(0x2d8);
    let mut rsi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rsi = *arg2.byte_offset(0x2e0);
    }
    
    let mut var_d0: i64 = rdx;
    let var_c8: i64 = 0;
    let var_b8: i64 = rcx;
    let var_a8: i64 = 0;
    let var_98: i64 = rcx;
    let rax_1: *mut i8 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h34eefe8dabb71698(&var_d0);
    let mut result: u64;
    
    if rax_1 == 0 || (arg3 & 1) != 0 || *arg2.byte_offset(0x1eb) != 0
    {
        let rax_2: i64 = *arg2.byte_offset(0x2a0);
        let rcx_1: i64 = *arg2.byte_offset(0x2a8);
        let mut rsi_1: i64 = rax_2;
        
        if rax_2 != 0
        {
            rsi_1 = *arg2.byte_offset(0x2b0);
        }
        
        let mut rdx_1: i64;
        rdx_1 = rax_2 != 0;
        let mut var_68: i64 = rdx_1;
        let var_60_1: i64 = 0;
        let var_58_1: i64 = rax_2;
        let var_50_1: i64 = rcx_1;
        let var_48_1: i64 = rdx_1;
        let var_40_1: i64 = 0;
        let var_38_1: i64 = rax_2;
        let var_30_1: i64 = rcx_1;
        let var_28_1: i64 = rsi_1;
        let mut rdx_2: i64;
        result = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_68);
        
        if result == 0
        {
            'label_66ec01:
            *arg1 = 0x38;
        }
        else
        {
            loop
            {
                just::justfile::Justfile::check_unstable::he04de0852efda7ff(&var_d0, rdx_2, arg3);
                
                if var_d0 != 0x38
                {
                    let result_1: u64;
                    result = result_1;
                    *arg1.byte_offset(0x60) = result;
                    let var_80: i128;
                    *arg1.byte_offset(0x50) = var_80;
                    *arg1.byte_offset(0x40) = rsi;
                    let zmm0_1: i128 = var_d0;
                    *arg1.byte_offset(0x30) = rax;
                    *arg1.byte_offset(0x20) = rdx;
                    *arg1.byte_offset(0x10) = rax;
                    *arg1 = zmm0_1;
                    break;
                }
                
                result = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_68);
                
                if result == 0
                {
                    goto 'label_66ec01;
                }
            }
        }
    }
    else
    {
        result = *rax_1;
        *arg1 = 0x36;
        arg1[1] = result;
    }
    
    result
}
