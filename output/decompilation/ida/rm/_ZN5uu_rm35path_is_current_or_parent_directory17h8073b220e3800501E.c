__int64 __fastcall uu_rm::path_is_current_or_parent_directory(_WORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v4; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v5[6]; // [rsp+8h] [rbp-30h] BYREF

  v5[1] = a1;
  v5[2] = a2;
  v5[0] = 0LL;
  if ( a2 == 2 )
  {
    LOBYTE(v2) = 1;
    if ( *a1 == 11822 )
      goto LABEL_10;
  }
  else if ( a2 == 1 )
  {
    LOBYTE(v2) = 1;
    if ( *(_BYTE *)a1 == 46 )
      goto LABEL_10;
  }
  LOWORD(v4) = 11823;
  LOBYTE(v2) = 1;
  if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(a1, a2, &v4, 2LL) )
  {
    qmemcpy(&v4, "/..", 3);
    if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(a1, a2, &v4, 3LL) )
    {
      qmemcpy(&v4, "/./", 3);
      if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(a1, a2, &v4, 3LL) )
      {
        v4 = 791555631;
        v2 = core::slice::<impl [T]>::ends_with(a1, a2, &v4, 4LL);
      }
    }
  }
LABEL_10:
  core::ptr::drop_in_place<core::result::Result<&[u8],alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v5);
  return v2;
}