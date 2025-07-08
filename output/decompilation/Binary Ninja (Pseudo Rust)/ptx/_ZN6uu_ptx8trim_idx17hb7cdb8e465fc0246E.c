
  fn uu_ptx::trim_idx::hb7cdb8e465fc0246(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut r14: i64 = arg4;
    let mut rbx: i64 = arg3;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(arg2, arg3, arg4);
    
    if rbx < r14
    {
        let mut r13_1: i64 = rbx;
        
        loop
        {
            if r13_1 >= arg2
            {
                if rbx <= arg2
                {
                    rbx = arg2;
                }
                
                core::panicking::panic_bounds_check::h25a5330941572dd1(rbx, arg2);
                /* no return */
            }
            
            let rdi_1: i32 = *(arg1 + (r13_1 << 2));
            
            if rdi_1 - 9 >= 5 && rdi_1 != 0x20
            {
                let mut rax_2: bool;
                
                if rdi_1 >= 0x80
                {
                    rax_2 =
                        core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdi_1);
                }
                
                if rdi_1 < 0x80 || rax_2 == 0
                {
                    rbx = r13_1;
                    break;
                }
            }
            
            r13_1 += 1;
            
            if r14 == r13_1
            {
                return r14;
            }
        }
    }
    
    if rbx < r14
    {
        do
        {
            let r13_2: i64 = r14;
            r14 -= 1;
            
            if r14 >= arg2
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(r13_2 - 1, arg2);
                /* no return */
            }
            
            let rdi_2: i32 = *(arg1 + (r14 << 2));
            
            if rdi_2 - 9 >= 5 && rdi_2 != 0x20
            {
                if rdi_2 < 0x80
                {
                    break;
                }
                
                if core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdi_2) == 0
                {
                    break;
                }
            }
        } while rbx < r14;
    }
    
    rbx
}
