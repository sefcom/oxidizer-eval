__int64 __fastcall uu_ls::display_group(unsigned int a1, unsigned __int8 a2, __int64 a3)
{
  _BYTE v4[24]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v5[24]; // [rsp+20h] [rbp-28h] BYREF

  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(v5, a3 + 184, a1);
  if ( *(_QWORD *)v5 )
  {
    *(_QWORD *)&v4[16] = *(_QWORD *)&v5[16];
    *(_OWORD *)v4 = *(_OWORD *)v5;
  }
  else
  {
    *(_OWORD *)&v4[8] = *(_OWORD *)&v5[8];
    *(_QWORD *)v4 = 0LL;
  }
  return ((__int64 (__fastcall *)(_BYTE *, _QWORD, _QWORD))std::collections::hash::map::Entry<K,V>::or_insert_with)(
           v4,
           a2,
           a1);
}