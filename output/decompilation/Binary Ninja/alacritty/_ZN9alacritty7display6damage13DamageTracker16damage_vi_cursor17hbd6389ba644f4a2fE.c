
  int64_t alacritty::display::damage::DamageTracker::damage_vi_cursor::hbd6389ba644f4a2f(int64_t* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int32_t* r14 = arg2;
    int32_t* rbx = arg1;
    int64_t result = core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(arg1, arg2);
    
    if (!rbx[0x12])
    {
        if (*rbx == 1)
            result = alacritty::display::damage::FrameDamage::damage_point::h73fa5b91a33d4300(
                *(rbx + 0x20), *(rbx + 0x28), *(rbx + 8), *(rbx + 0x10));
        
        if (*r14 == 1)
            /* tailcall */
            return alacritty::display::damage::FrameDamage::damage_point::h73fa5b91a33d4300(
                *(rbx + 0x20), *(rbx + 0x28), *(r14 + 8), *(r14 + 0x10));
    }
    
    return result;
}
