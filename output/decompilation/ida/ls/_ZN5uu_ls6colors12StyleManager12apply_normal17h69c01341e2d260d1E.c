__int64 __fastcall uu_ls::colors::StyleManager::apply_normal(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  _BYTE v3[21]; // [rsp+0h] [rbp-28h] BYREF

  result = uu_ls::colors::StyleManager::get_normal_style(*a2);
  if ( result )
  {
    *(_QWORD *)&v3[13] = *(_QWORD *)(result + 13);
    *(_OWORD *)v3 = *(_OWORD *)result;
    return uu_ls::colors::StyleManager::get_style_code((__int64)a1, (__int64)a2, (__int64)v3);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
  }
  return result;
}