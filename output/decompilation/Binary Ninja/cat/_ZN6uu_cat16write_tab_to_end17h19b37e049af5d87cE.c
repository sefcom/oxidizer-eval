
  void* uu_cat::write_tab_to_end::h19b37e049af5d87c(void* arg1, uint64_t arg2, int64_t* arg3)

{
    uint64_t rbx = arg2;
    void* r13 = arg1;
    void* var_40 = arg1;
    void* var_38 = arg1 + arg2;
    char rax_1;
    void* rdx;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h8cb300f68696631d(&var_40);
    void* r14;
    
    if (!(rax_1 & 1))
        r14 = nullptr;
    else
    {
        void* r12_1 = rdx;
        r14 = nullptr;
        char* rbp_1 = r13;
        char rax_6;
        
        do
        {
            int64_t rax_2;
            uint64_t rdx_2;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, r12_1, rbp_1, rbx);
            core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, rax_2, rdx_2));
            
            if (r12_1 >= rbx)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r12_1, rbx);
                /* no return */
            }
            
            if (*(rbp_1 + r12_1) != 9)
                return r14 + r12_1;
            
            core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, 
                "^I^?unknown filetype: Is a direc…", 2));
            r13 = r12_1 + rbp_1 + 1;
            r14 = r14 + r12_1 + 1;
            void* rbp_2 = &rbp_1[rbx];
            rbx -= r12_1 + 1;
            var_40 = r13;
            void* var_38_1 = rbp_2;
            void* rdx_3;
            rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h8cb300f68696631d(&var_40);
            r12_1 = rdx_3;
            rbp_1 = r13;
        } while (rax_6 & 1);
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, r13, rbx));
    return r14 + rbx;
}
