
  int64_t forc_fmt::write_file_formatted::ha4a188379ce620ba(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t rax_1 = std::fs::write::h0b6e985e20ca1286(arg1, arg2, arg3);
    
    if (rax_1)
        /* tailcall */
        return anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h49e8656b8ef808ed(rax_1);
    
    return 0;
}
