__int64 __fastcall uu_mv::is_empty_dir(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  char v5; // [rsp+8h] [rbp-50h]
  _QWORD v6[6]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  char v8; // [rsp+48h] [rbp-10h]

  std::fs::read_dir(&v4, a1, a2);
  if ( v5 == 2 )
  {
    v6[0] = v4;
    core::ptr::drop_in_place<std::io::error::Error>(v6);
    return 0;
  }
  else
  {
    v7 = v4;
    v8 = v5;
    v6[0] = 2LL;
    core::option::Option<T>::get_or_insert_with(v6, &v7);
    LOBYTE(v2) = v6[0] == 0LL;
    core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::fs::ReadDir>>(v6);
  }
  return v2;
}
