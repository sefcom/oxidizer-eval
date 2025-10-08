
  fn just::subcommand::Subcommand::list::h279afbbedddd5378(arg1: *mut i8, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let mut rax: *mut c_void = arg3;
    let rcx: i64 = *arg4.byte_offset(0x10);
    let mut result: i64;
    
    if rcx == 0
    {
        'label_68e993:
        result = just::subcommand::Subcommand::list_module::h05aa7b8b99df3073(arg2, rax, 0);
        *arg1 = 0x38;
    }
    else
    {
        let r12_1: i64 = *arg4.byte_offset(8);
        let mut rbp_1: i64 = 0;
        
        loop
        {
            rax = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *rax.byte_offset(0x2a0), *rax.byte_offset(0x2a8), *(r12_1 + rbp_1 + 8), 
                *(r12_1 + rbp_1 + 0x10));
            
            if rax == 0
            {
                let mut result_1: i64;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbfd22dd80b4b7c3f(&result_1, arg4);
                result = result_1;
                let var_40: i128;
                *arg1.byte_offset(0x10) = var_40;
                *arg1 = 0x35;
                *arg1.byte_offset(8) = result;
                break;
            }
            
            rbp_1 += 0x18;
            
            if rcx * 0x18 == rbp_1
            {
                goto 'label_68e993;
            }
        }
    }
    
    result
}
