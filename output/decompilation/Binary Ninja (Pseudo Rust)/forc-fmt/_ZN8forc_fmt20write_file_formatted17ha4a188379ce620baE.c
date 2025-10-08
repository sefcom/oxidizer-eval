
  fn forc_fmt::write_file_formatted::ha4a188379ce620ba(arg1: i64, arg2: i64, arg3: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: i64 = std::fs::write::h0b6e985e20ca1286(arg1, arg2, arg3);
    
    if rax_1 != 0
    {
        /* tailcall */
        return anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h49e8656b8ef808ed(rax_1);
    }
    
    0
}
