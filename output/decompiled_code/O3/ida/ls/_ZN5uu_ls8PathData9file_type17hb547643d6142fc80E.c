_DWORD *__fastcall uu_ls::PathData::file_type(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  bool v4; // zf
  _DWORD *v5; // rax

  v2 = (_DWORD *)core::cell::once::OnceCell<T>::get_or_try_init(a1 + 248, a1, a2);
  v3 = 0LL;
  v4 = *v2 == 0;
  v5 = v2 + 1;
  if ( !v4 )
    return v5;
  return (_DWORD *)v3;
}
