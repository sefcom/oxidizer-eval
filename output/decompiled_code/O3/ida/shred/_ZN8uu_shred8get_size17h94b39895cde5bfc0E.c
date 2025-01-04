__int64 __fastcall uu_shred::get_size(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int128 v6; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-18h]

  if ( *a1 == 0x8000000000000000LL )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = uu_shred::get_size::{{closure}}(a1[1], a1[2]);
    a2 = v4;
  }
  v7 = a1[2];
  v6 = *(_OWORD *)a1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int128 *))core::option::Option<T>::or_else)(v3, a2, &v6);
}
