
  int64_t* uu_test::parser::parse::h797e9c3d2d2b1396(int64_t* arg1, int64_t* arg2)

{
    int128_t var_60;
    uu_test::parser::Parser::new::h4597e5c85f4a172c(&var_60, arg2);
    int32_t var_80;
    uu_test::parser::Parser::parse::h10f5a63a78e65dea(&var_80, &var_60);
    
    if (var_80 != 7)
    {
        int128_t zmm0 = var_80;
        int128_t var_70;
        *(arg1 + 0x10) = var_70;
        *arg1 = zmm0;
        core::ptr::drop_in_place$LT$uu_test..parser..Parser$GT$::hf85126b22dbaa1db(&var_60);
    }
    else
    {
        int64_t var_50;
        arg1[3] = var_50;
        *(arg1 + 8) = var_60;
        *arg1 = 7;
        void var_48;
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h84df26e0d136ee61(&var_48);
    }
    
    return arg1;
}
