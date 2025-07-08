
  int64_t uu_dd::Output::prepare_file::h9725a129054f1a6a(char* arg1, int32_t arg2, void* arg3)

{
    void* rbx = arg3;
    char var_2f = *(arg3 + 0x90) ^ 1;
    char var_30 = 1;
    int64_t rax_1;
    void** rdx;
    rax_1 = uu_dd::Dest::seek::hf206f28f02b500d6(&var_30, *(arg3 + 0x88));
    int64_t result_1;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc598a8c5dfdf2321(&result_1, rax_1, rdx);
    int64_t result = result_1;
    
    if (!result)
        *arg1 = var_30;
    else
    {
        void* var_18;
        rbx = var_18;
        *(arg1 + 8) = result;
        *arg1 = 4;
        result = core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(var_30, arg2);
    }
    
    *(arg1 + 0x10) = rbx;
    return result;
}
