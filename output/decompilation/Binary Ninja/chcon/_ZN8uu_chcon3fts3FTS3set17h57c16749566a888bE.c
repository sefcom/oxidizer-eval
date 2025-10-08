
  void uu_chcon::fts::FTS::set::h57c16749566a888b(int32_t* arg1, struct FTS* arg2, FTSENT* arg3, int32_t arg4)

{
    if (!arg3)
    {
        *arg1 = 0x10;
        *(arg1 + 8) = "FTS::set()fts_set()verboserefere…";
        *(arg1 + 0x10) = 0xa;
        *(arg1 + 0x18) = 0x2500000003;
        return;
    }
    
    if (fts_set(arg2, arg3, arg4) != 0xffffffff)
    {
        *arg1 = 0x12;
        return;
    }
    
    int64_t rax_4 = *__errno_location() << 0x20 | 2;
    *arg1 = 0x10;
    *(arg1 + 8) = "fts_set()verbosereferencerangere…";
    *(arg1 + 0x10) = 9;
    *(arg1 + 0x18) = rax_4;
}
