_QWORD *__fastcall uu_ls::colors::StyleManager::reset(_QWORD *a1, __int64 a2, char a3)
{
  if ( *(_BYTE *)(a2 + 8) != 2 || a3 )
  {
    *(_BYTE *)(a2 + 29) = 1;
    *(_BYTE *)(a2 + 8) = 2;
    <T as alloc::slice::hack::ConvertVec>::to_vec();
    return a1;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
    return a1;
  }
}
