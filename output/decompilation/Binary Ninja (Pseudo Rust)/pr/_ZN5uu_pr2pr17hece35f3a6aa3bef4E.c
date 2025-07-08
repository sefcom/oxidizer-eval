
  fn uu_pr::pr::hece35f3a6aa3bef4(arg1: *mut i128, arg2: i64, arg3: u64, arg4: *mut i128) -> *mut i128

{
    let mut var_a8: i64;
    uu_pr::open::h24aeb0fb8cb9559f(&var_a8, arg2, arg3);
    let rax: i64 = var_a8;
    let var_a0: i64;
    let var_98: i64;
    
    if rax != -0x7ffffffffffffffb
    {
        *arg1 = rax;
        *arg1.byte_offset(8) = var_a0;
        arg1[1] = var_98;
        let var_90: i64;
        *arg1.byte_offset(0x18) = var_90;
    }
    else
    {
        let mut var_68: ();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4057256a729ecd8e(&var_68, 
            0x10000, var_a0, var_98);
        let rax_1: *mut i64 = uu_pr::read_stream_and_create_pages::h80b16bcd0c28d18c(arg4, &var_68);
        
        loop
        {
            let mut var_88: i64;
            _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd6d483c89323907f(&var_88, rax_1);
            let var_80: i64;
            
            if var_80 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h7107bd53cebb0db5(rax_1);
                *arg1.byte_offset(8) = 0;
                *arg1 = -0x7ffffffffffffffb;
                break;
            }
            
            let rcx_1: i64 = var_88;
            let mut var_c8: i128 = var_80;
            let var_70: i64;
            let var_b8_1: i64 = var_70;
            let mut rax_2: i64;
            let mut rdx_3: i64;
            rax_2 = uu_pr::print_page::h6e73dbc2020375d5(*var_c8[8], var_70, arg4, rcx_1 + 1);
            
            if rax_2 != 0
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_a8, rdx_3, rdx_3);
                let zmm0_2: i128 = var_a8;
                arg1[1] = var_98;
                *arg1 = zmm0_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_c8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h7107bd53cebb0db5(rax_1);
                return arg1;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_c8);
        }
    }
    arg1
}
