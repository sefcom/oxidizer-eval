unsigned __int64 __fastcall uu_sort::KeySettings::set_dictionary_order(_QWORD *a1, _BYTE *a2)
{
  unsigned __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+10h] [rbp-18h]

  uu_sort::KeySettings::check_compatibility(&v3, a2[5], a2[3], 1);
  if ( __OFSUB__(0LL, (_QWORD)v3) )
  {
    result = 0x8000000000000000LL;
    a2[2] = 1;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    result = v4;
    a1[2] = v4;
    *(_OWORD *)a1 = v3;
  }
  return result;
}