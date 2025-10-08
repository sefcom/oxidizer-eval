
  fn uu_split::number::FixedWidthNumber::new::h658afa50ae467836(arg1: *mut i64, arg2: i8, arg3: i64, arg4: u64) -> i64

{
    let mut r15: u64 = arg4;
    let mut var_38: i128;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h2ddf162ee73cff42(
        &var_38, arg3);
    let rcx: u64 = arg2;
    let result: i64;
    let mut rdi_1: i64 = result - 1;
    let mut cond:0_1: bool;
    
    do
    {
        let var_30: *mut u8;
        
        if rdi_1 == -1
        {
            if r15 == 0
            {
                break;
            }
            
            *arg1 = -0x8000000000000000;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                var_38, var_30);
        }
        
        if result == 0
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_1, result);
            /* no return */
        }
        
        let mut rax_2: u64;
        let mut rdx_2: u8;
        
        if r15 >> 0x20 != 0
        {
            let rdx_1: i64 = 0;
            rax_2 = COMBINE(rdx_1, r15) / rcx;
            rdx_2 = COMBINE(rdx_1, r15) % rcx;
        }
        else
        {
            let rax_5: i32 = r15;
            let temp2_2: i32 = rcx;
            rax_2 = COMBINE(0, rax_5) / temp2_2;
            rdx_2 = COMBINE(0, rax_5) % temp2_2;
        }
        
        var_30[rdi_1] = rdx_2;
        rdi_1 -= 1;
        cond:0_1 = r15 < rcx;
        r15 = rax_2;
    } while !cond:0_1;
    arg1[2] = result;
    *arg1 = var_38;
    arg1[3] = arg2;
    result
}
