
  fn just::justfile::Justfile::suggest_recipe::hb59653753af09818(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let rax: i64 = *arg2.byte_offset(0x2b8);
    let rcx: i64 = *arg2.byte_offset(0x2c0);
    let mut rdi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rdi = *arg2.byte_offset(0x2c8);
    }
    
    let mut var_140: i64 = rdx;
    let var_138: i64 = 0;
    let var_130: i64 = rax;
    let var_128: i64 = rcx;
    let var_120: i64 = rdx;
    let var_118: i64 = 0;
    let var_110: i64 = rax;
    let var_108: i64 = rcx;
    let var_100: i64 = rdi;
    let rax_1: i64 = *arg2.byte_offset(0x268);
    let rcx_1: i64 = *arg2.byte_offset(0x270);
    let mut rdi_1: i64 = rax_1;
    let mut rdx_1: i64;
    rdx_1 = rax_1 != 0;
    
    if rax_1 != 0
    {
        rdi_1 = *arg2.byte_offset(0x278);
    }
    
    let mut var_f8: i64 = rdx_1;
    let var_f0: i64 = 0;
    let var_e8: i64 = rax_1;
    let var_e0: i64 = rcx_1;
    let var_d8: i64 = rdx_1;
    let var_d0: i64 = 0;
    let var_c8: i64 = rax_1;
    let var_c0: i64 = rcx_1;
    let var_b8: i64 = rdi_1;
    let mut var_b0: ();
    core::iter::traits::iterator::Iterator::chain::haa3d52ba03d9dcf6(&var_b0, &var_140, &var_f8);
    just::justfile::Justfile::find_suggestion::h195c97c6d52fdda6(arg1, arg3, arg4, &var_b0)
}
