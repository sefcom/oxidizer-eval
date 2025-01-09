char __fastcall uu_tail::paths::Input::is_tailable(_QWORD *a1)
{
  _QWORD v2[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( a1[3] != 0x8000000000000000LL )
    return uu_tail::paths::path_is_tailable(a1[4], a1[5]);
  uu_tail::paths::Input::resolve(v2, a1);
  return core::option::Option<T>::map_or(v2);
}
