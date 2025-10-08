
  fn uu_chcon::fts::EntryRef::access_path::h84f48584df271673(arg1: *mut c_void) -> *mut i8

{
    let result: *mut i8 = *arg1.byte_offset(0x28);
    
    if result == 0
    {
        return result;
    }
    
    strlen(result);
    result
}
