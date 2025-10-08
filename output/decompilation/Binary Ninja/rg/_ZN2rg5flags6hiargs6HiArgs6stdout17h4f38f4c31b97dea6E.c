
  int64_t rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(int64_t* arg1, void* arg2)

{
    uint8_t rax = 0x1000203 >> *(arg2 + 0x395) << 3;
    uint32_t rcx_1 = *(arg2 + 0x392);
    
    if (!rcx_1)
    {
        if (!*(arg2 + 0x379))
            /* tailcall */
            return grep_cli::wtr::stdout_buffered_block::hb9c139ea7985e825(arg1, rax);
    }
    else if (rcx_1 != 1)
        /* tailcall */
        return grep_cli::wtr::stdout_buffered_block::hb9c139ea7985e825(arg1, rax);
    
    /* tailcall */
    return grep_cli::wtr::stdout_buffered_line::h76abfb9e49467d36(arg1, rax);
}
