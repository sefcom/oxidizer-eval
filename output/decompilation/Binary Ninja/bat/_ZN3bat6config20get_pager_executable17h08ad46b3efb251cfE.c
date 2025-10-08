
  int64_t* bat::config::get_pager_executable::h08ad46b3efb251cf(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_80;
    bat::pager::get_pager::hd377d976785f18ee(&var_80, arg2, arg3);
    int64_t rax = var_80;
    
    if (rax == -0x7fffffffffffffff)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$bat..pager..Pager$GT$$C$shell_words..ParseError$GT$$GT$::h953dfe83362f50b1(&var_80);
        *arg1 = -0x8000000000000000;
    }
    else if (rax != -0x8000000000000000)
    {
        int128_t var_58;
        int128_t var_58_1 = var_58;
        int128_t var_68 = var_68;
        var_80 = rax;
        int128_t var_78;
        arg1[2] = *var_78[8];
        *arg1 = var_80;
        arg1[1] = var_78;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_68);
    }
    else
        *arg1 = -0x8000000000000000;
    
    return arg1;
}
