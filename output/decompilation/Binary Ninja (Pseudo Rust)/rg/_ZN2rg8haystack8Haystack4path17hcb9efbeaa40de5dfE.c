
  fn rg::haystack::Haystack::path::hcb9efbeaa40de5df(arg1: *mut i64) -> i64

{
    if arg1[0xe] != 0
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: i64;
        rax_1 = ignore::walk::DirEntry::path::he339916189ce99ea(arg1);
        
        if std::path::Path::starts_with::hfe49cb0779c8b156(rax_1, rdx_1) != 0
        {
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 = ignore::walk::DirEntry::path::he339916189ce99ea(arg1);
            let mut rax_4: i64;
            let mut rdx_3: i64;
            rax_4 = std::path::Path::strip_prefix::h00920d6f673e5b0b(rax_3, rdx_2);
            /* tailcall */
            return core::result::Result$LT$T$C$E$GT$::unwrap::hffade1cca7e11e36(rax_4);
        }
    }
    
    /* tailcall */
    ignore::walk::DirEntry::path::he339916189ce99ea(arg1)
}
