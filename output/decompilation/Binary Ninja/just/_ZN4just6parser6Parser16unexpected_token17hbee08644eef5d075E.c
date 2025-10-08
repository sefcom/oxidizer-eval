
  int64_t just::parser::Parser::unexpected_token::hbee08644eef5d075(int64_t* arg1, void* arg2)

{
    int64_t* rbx = arg1;
    int64_t rax = *(arg2 + 0x38);
    int64_t rcx = *(arg2 + 0x40);
    int64_t rsi = rax;
    arg1 = rax;
    
    if (rax)
        rsi = *(arg2 + 0x48);
    
    int64_t rdx;
    rdx = arg1;
    int64_t var_90 = rdx;
    int64_t var_88 = 0;
    int64_t var_80 = rax;
    int64_t var_70 = rdx;
    int64_t var_68 = 0;
    int64_t var_60 = rax;
    int128_t var_28;
    core::iter::traits::iterator::Iterator::collect::heef43278e911205d(&var_28, &var_90);
    just::parser::Parser::next::h26f20bd451ef506f(&var_90, arg2);
    char var_48;
    
    if (var_48 == 0x25)
    {
        var_88 = var_28;
        int64_t var_18;
        int64_t var_78_1 = var_18;
        var_70 = rsi;
        var_90 = -0x7fffffffffffffc8;
        return just::parser::Parser::error::hcfcee5ba02637174(rbx, arg2, &var_90);
    }
    
    int64_t rcx_2 = var_90;
    int32_t var_98 = *rsi[1];
    int32_t rdi_4 = *rsi[4];
    int32_t var_44;
    *(rbx + 0x54) = var_44;
    int32_t var_47;
    *(rbx + 0x51) = var_47;
    *(rbx + 0x4c) = rdi_4;
    *(rbx + 0x49) = rdi_4;
    rbx[1] = rcx_2;
    *(rbx + 0x10) = var_88;
    *(rbx + 0x20) = rcx;
    *(rbx + 0x30) = var_68;
    rbx[8] = rcx;
    rbx[9] = rsi;
    rbx[0xa] = var_48;
    *rbx = 1;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h614c8d5056af1490(&var_28);
}
