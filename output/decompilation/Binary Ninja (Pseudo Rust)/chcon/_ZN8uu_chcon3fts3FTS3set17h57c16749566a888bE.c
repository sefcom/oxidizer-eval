
  fn uu_chcon::fts::FTS::set::h57c16749566a888b(arg1: *mut i32, arg2: *mut FTS, arg3: *mut FTSENT, arg4: i32)

{
    if arg3 == 0
    {
        *arg1 = 0x10;
        *arg1.byte_offset(8) = "FTS::set()fts_set()verboserefere…";
        *arg1.byte_offset(0x10) = 0xa;
        *arg1.byte_offset(0x18) = 0x2500000003;
        return;
    }
    
    if fts_set(arg2, arg3, arg4) != 0xffffffff
    {
        *arg1 = 0x12;
        return;
    }
    
    let rax_4: i64 = *__errno_location() << 0x20 | 2;
    *arg1 = 0x10;
    *arg1.byte_offset(8) = "fts_set()verbosereferencerangere…";
    *arg1.byte_offset(0x10) = 9;
    *arg1.byte_offset(0x18) = rax_4;
}
