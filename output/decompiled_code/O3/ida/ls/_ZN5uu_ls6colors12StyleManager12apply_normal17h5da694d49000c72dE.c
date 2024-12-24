_QWORD *__fastcall uu_ls::colors::StyleManager::apply_normal(_QWORD *a1, _QWORD *a2)
{
  __int64 normal_style; // rax
  _BYTE v4[21]; // [rsp+0h] [rbp-48h]
  _BYTE v5[21]; // [rsp+20h] [rbp-28h] BYREF

  normal_style = uu_ls::colors::StyleManager::get_normal_style(a2);
  if ( normal_style )
  {
    *(_QWORD *)&v4[13] = *(_QWORD *)(normal_style + 13);
    *(_OWORD *)v4 = *(_OWORD *)normal_style;
    *(_QWORD *)&v5[13] = *(_QWORD *)&v4[13];
    *(_OWORD *)v5 = *(_OWORD *)v4;
    uu_ls::colors::StyleManager::get_style_code((__int64)a1, (__int64)a2, (__int64)v5);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
  }
  return a1;
}
