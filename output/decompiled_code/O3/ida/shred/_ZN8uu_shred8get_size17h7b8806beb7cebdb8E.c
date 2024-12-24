__int64 __fastcall uu_shred::get_size(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int128 v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]

  if ( *a1 == 0x8000000000000000LL )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = uu_shred::get_size::{{closure}}(a1[1], a1[2]);
    a2 = v8;
  }
  v11 = a1[2];
  v10 = *(_OWORD *)a1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int128 *, __int64, __int64, __int64))core::option::Option<T>::or_else)(
           v7,
           a2,
           &v10,
           a4,
           a5,
           a6);
}
