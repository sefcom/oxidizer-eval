__int64 __fastcall uu_tail::paths::Input::is_tailable(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int is_tailable; // ebp
  __int64 v4; // r14
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  __int64 v7; // [rsp+10h] [rbp-28h]

  if ( a1[3] != 0x8000000000000000LL )
    return uu_tail::paths::path_is_tailable(a1[4], a1[5]);
  uu_tail::paths::Input::resolve(&v5, a1);
  v1 = v5;
  if ( v5 == 0x8000000000000000LL )
  {
    return 0;
  }
  else
  {
    v4 = v6;
    is_tailable = uu_tail::paths::path_is_tailable(v6, v7);
    if ( v1 )
      _rust_dealloc(v4, v1, 1LL);
  }
  return is_tailable;
}
