
  fn just::parser::Parser::unexpected_token::hbee08644eef5d075(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rbx: *mut i64 = arg1;
    let rax: i64 = *arg2.byte_offset(0x38);
    let rcx: i64 = *arg2.byte_offset(0x40);
    let mut rsi: i64 = rax;
    arg1 = rax != 0;
    
    if rax != 0
    {
        rsi = *arg2.byte_offset(0x48);
    }
    
    let mut rdx: i64;
    rdx = arg1;
    let mut var_90: i64 = rdx;
    let mut var_88: i64 = 0;
    let var_80: i64 = rax;
    let mut var_70: i64 = rdx;
    let var_68: i64 = 0;
    let var_60: i64 = rax;
    let mut var_28: i128;
    core::iter::traits::iterator::Iterator::collect::heef43278e911205d(&var_28, &var_90);
    just::parser::Parser::next::h26f20bd451ef506f(&var_90, arg2);
    let var_48: i8;
    
    if var_48 == 0x25
    {
        var_88 = var_28;
        let var_18: i64;
        let var_78_1: i64 = var_18;
        var_70 = rsi;
        var_90 = -0x7fffffffffffffc8;
        return just::parser::Parser::error::hcfcee5ba02637174(rbx, arg2, &var_90);
    }
    
    let rcx_2: i64 = var_90;
    let var_98: i32 = *rsi[1];
    let rdi_4: i32 = *rsi[4];
    let var_44: i32;
    *rbx.byte_offset(0x54) = var_44;
    let var_47: i32;
    *rbx.byte_offset(0x51) = var_47;
    *rbx.byte_offset(0x4c) = rdi_4;
    *rbx.byte_offset(0x49) = rdi_4;
    rbx[1] = rcx_2;
    *rbx.byte_offset(0x10) = var_88;
    *rbx.byte_offset(0x20) = rcx;
    *rbx.byte_offset(0x30) = var_68;
    rbx[8] = rcx;
    rbx[9] = rsi;
    rbx[0xa] = var_48;
    *rbx = 1;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h614c8d5056af1490(&var_28)
}
