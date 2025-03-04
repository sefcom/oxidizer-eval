__int64 __fastcall uu_sort::KeySettings::set_dictionary_order(
        _QWORD *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int128 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+18h] [rbp-20h]

  result = uu_sort::KeySettings::check_compatibility(&v7, a2[5], (unsigned __int8)a2[3], 1, a5, a6);
  if ( (_QWORD)v7 == 0x8000000000000000LL )
  {
    a2[2] = 1;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    result = v8;
    a1[2] = v8;
    *(_OWORD *)a1 = v7;
  }
  return result;
}
