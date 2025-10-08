
  int64_t rg::haystack::Haystack::path::hcb9efbeaa40de5df(int64_t* arg1)

{
    if (arg1[0xe])
    {
        char* rax_1;
        int64_t rdx_1;
        rax_1 = ignore::walk::DirEntry::path::he339916189ce99ea(arg1);
        
        if (std::path::Path::starts_with::hfe49cb0779c8b156(rax_1, rdx_1))
        {
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 = ignore::walk::DirEntry::path::he339916189ce99ea(arg1);
            int64_t rax_4;
            int64_t rdx_3;
            rax_4 = std::path::Path::strip_prefix::h00920d6f673e5b0b(rax_3, rdx_2);
            /* tailcall */
            return core::result::Result$LT$T$C$E$GT$::unwrap::hffade1cca7e11e36(rax_4);
        }
    }
    
    /* tailcall */
    return ignore::walk::DirEntry::path::he339916189ce99ea(arg1);
}
