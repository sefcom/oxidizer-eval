
  int64_t ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range::h52bd3f95b5426e67(void* arg1)

{
    if (*(arg1 + 0xc))
    {
        void** const var_38 = &data_97d028;
        int64_t var_30 = 1;
        int64_t var_28 = 8;
        int128_t var_20 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_38);
        /* no return */
    }
    
    if (*(arg1 + 8))
        /* tailcall */
        return ruff_python_formatter::comments::map::PartIndex::increment::h40e90174e8270a0a(arg1
            + 8);
    
    int32_t result =
        ruff_python_formatter::comments::map::PartIndex::incremented::h562ab003bd12ba22(
        *(arg1 + 4));
    *(arg1 + 8) = result;
    return result;
}
