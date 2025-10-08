
  int64_t uu_expand::open::hc6af5baed7605e7e(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    uint64_t rax_1;
    void* const rdx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h753b77f0d1eb3c52(arg2, arg3, "---tabs=(uutils coreutils) 0.0.3…", 1))
    {
        void var_30;
        std::fs::File::open::h53728ac18aa86877(&var_30, arg2);
        int64_t result_1;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h87ef89ef0d1df0a6(&result_1, &var_30);
        int64_t result = result_1;
        int32_t var_38;
        
        if (result)
        {
            arg1[1] = result;
            arg1[2] = var_38;
            *arg1 = 0;
            return result;
        }
        
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hb4bf27c5c9220e60(var_38);
        rdx = &data_4e8900;
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hc4b868a3ce8ede0f(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rdx = &data_4e8958;
    }
    
    /* tailcall */
    return std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h6870313491e79ed7(arg1, 
        rax_1, rdx);
}
