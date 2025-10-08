__int64 __fastcall uu_shred::get_size(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx

  v3 = 0LL;
  if ( !__OFSUB__(0LL, *a1) )
  {
    v3 = uu_shred::get_size::{{closure}}(a1[1], a1[2]);
    a2 = v4;
  }
  return core::option::Option<T>::or_else(v3, a2, a1);
}