
  fn alacritty::display::damage::DamageTracker::damage_vi_cursor::hbd6389ba644f4a2f(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let r14: *mut i32 = arg2;
    let rbx: *mut i32 = arg1;
    let mut result: i64 =
        core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(arg1, arg2);
    
    if rbx[0x12] == 0
    {
        if *rbx == 1
        {
            result = alacritty::display::damage::FrameDamage::damage_point::h73fa5b91a33d4300(
                *rbx.byte_offset(0x20), *rbx.byte_offset(0x28), *rbx.byte_offset(8), 
                *rbx.byte_offset(0x10));
        }
        
        if *r14 == 1
        {
            /* tailcall */
            return alacritty::display::damage::FrameDamage::damage_point::h73fa5b91a33d4300(
                *rbx.byte_offset(0x20), *rbx.byte_offset(0x28), *r14.byte_offset(8), 
                *r14.byte_offset(0x10));
        }
    }
    
    result
}
