
  fn fd::cli::Opts::max_results::h69eff37668279061(arg1: *mut c_void) -> i64

{
    let mut rax: u64;
    let mut rdx: i64;
    rax = core::option::Option$LT$T$GT$::filter::h2b3fb99abbc01dee(*arg1.byte_offset(0x30), 
        *arg1.byte_offset(0x38));
    /* tailcall */
    core::option::Option$LT$T$GT$::or_else::hb9ff9a5c7830d56c(rax, rdx, *arg1.byte_offset(0x1f1))
}
