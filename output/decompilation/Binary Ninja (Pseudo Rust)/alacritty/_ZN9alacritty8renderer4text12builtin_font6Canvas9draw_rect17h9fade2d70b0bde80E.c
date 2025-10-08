
  fn alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(arg1: *mut c_void, arg2: i128 @ zmm0, arg3: i128 @ zmm1, arg4: i128 @ zmm2, arg5: i128 @ zmm3) -> *mut i16

{
    let var_58: i128 = arg3;
    arg3 = arg2 - 9.22337204e+18f;
    let rcx: i64 = arg2;
    let mut rbx_3: i64 = (rcx >> 0x3f & arg3) | rcx;
    arg3 = {0};
    
    if arg2 < arg3
    {
        rbx_3 = 0;
    }
    
    if arg2 > 1.8446743e+19f
    {
        rbx_3 = -1;
    }
    
    arg4 = arg4 + arg2;
    let rax_1: i64 = arg4;
    arg2 = arg4 - 9.22337204e+18f;
    let mut rdi_2: i64 = (arg2 & rax_1 >> 0x3f) | rax_1;
    
    if arg4 < arg3
    {
        rdi_2 = 0;
    }
    
    if arg4 > 1.8446743e+19f
    {
        rdi_2 = -1;
    }
    
    let r14: i64 = *arg1.byte_offset(0x18);
    let rax_2: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(rdi_2, r14);
    arg2 = var_58 - 9.22337204e+18f;
    let rcx_3: i64 = var_58;
    let mut r13_3: i64 = (rcx_3 >> 0x3f & arg2) | rcx_3;
    
    if var_58 < 0f
    {
        r13_3 = 0;
    }
    
    if var_58 > 1.8446743e+19f
    {
        r13_3 = -1;
    }
    
    arg3 = arg5 + var_58;
    let rax_4: i64 = arg3;
    arg2 = arg3 - 9.22337204e+18f;
    let mut rdi_5: i64 = (arg2 & rax_4 >> 0x3f) | rax_4;
    
    if arg3 < 0f
    {
        rdi_5 = 0;
    }
    
    if arg3 > 1.8446743e+19f
    {
        rdi_5 = -1;
    }
    
    let mut result: *mut i16 =
        core::cmp::Ord::min::h7c13e9bfb8ea3862(rdi_5, *arg1.byte_offset(0x20));
    let mut i_1: *mut c_void = result.byte_offset(-r13_3);
    
    if result > r13_3
    {
        let rbp_1: i64 = *arg1.byte_offset(8);
        let r15_1: i64 = *arg1.byte_offset(0x10);
        let rcx_7: i64 = r13_3 * r14;
        let mut r12_1: i64 = rax_2 + rcx_7;
        let mut rbx_4: i64 = rbx_3 + rcx_7;
        let mut i: *mut c_void;
        
        do
        {
            let mut rax_5: i64;
            let mut rdx_2: i64;
            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h1733595a6a516e51(rbx_4, r12_1, rbp_1, r15_1);
            result = _$LT$$u5b$T$u5d$$u20$as$u20$core..slice..specialize..SpecFill$LT$T$GT$$GT$::spec_fill::h15b3a9a1ce3f9f9a(rax_5, rdx_2, 0xffffff);
            r12_1 += r14;
            rbx_4 += r14;
            i = i_1;
            i_1 -= 1;
        } while i != 1;
    }
    
    result
}
