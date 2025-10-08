
  fn alacritty::display::content::RenderableContent::renderable_cursor::hcb11f2b38d3f4bfc(arg1: *mut i128, arg2: *mut c_void, arg3: *mut c_void) -> u8

{
    let rdx: *mut c_void = *arg2.byte_offset(0xe8);
    let rax_2: u64 = *arg2.byte_offset(0xc0) >> 0xd & 8;
    let r12: i8 = *rdx.byte_offset(rax_2).byte_offset(0x200);
    let r14_2: u32 = *rdx.byte_offset(rax_2).byte_offset(0x203) << 0x10
        | *rdx.byte_offset(rax_2).byte_offset(0x201);
    let rax_4: i32 = core::option::Option$LT$T$GT$::map_or::hc905b7bfb43bc946(
        *(*arg2.byte_offset(0x78)).byte_offset(0x408), *rdx.byte_offset(rax_2).byte_offset(0x204));
    let r15: i8 = rax_4;
    let mut rbp_1: u32 = rax_4 >> 8;
    let mut rax_5: u32;
    
    if r15 != 2 || r12 != 2
    {
        let rax_6: u32 = r12;
        let mut r12_3: u32 = *arg3.byte_offset(0x24) << 0x10 | *arg3.byte_offset(0x22);
        let r13_3: u32 = *arg3.byte_offset(0x27) << 0x10 | *arg3.byte_offset(0x25);
        let zmm0: i128 = vte::ansi::Rgb::contrast::h2e276bdc884afba0(r12_3, r13_3);
        rax_5 = r12_3;
        
        if rax_6 != 0
        {
            rax_5 = r13_3;
            
            if rax_6 != 1
            {
                rax_5 = r14_2;
            }
        }
        
        if r15 != 0
        {
            r12_3 = r13_3;
            
            if r15 == 2
            {
                r12_3 = rbp_1;
            }
        }
        
        rbp_1 = r12_3;
        
        if !(1.5 <= zmm0)
        {
            rbp_1 = *rdx.byte_offset(0x272) << 0x10 | *rdx.byte_offset(0x270);
            rax_5 = *rdx.byte_offset(0x275) << 0x10 | *rdx.byte_offset(0x273);
        }
    }
    else
    {
        rax_5 = r14_2;
    }
    
    let rcx_8: i32 = 2 - 0;
    *arg1.byte_offset(0x1a) = *arg2.byte_offset(0x118);
    *arg1.byte_offset(0x14) = rbp_1;
    *arg1.byte_offset(0x16) = rbp_1 >> 0x10;
    *arg1.byte_offset(0x17) = rax_5;
    let result: u8 = rax_5 >> 0x10;
    *arg1.byte_offset(0x19) = result;
    arg1[1] = rcx_8;
    *arg1 = *arg2.byte_offset(0x100);
    result
}
