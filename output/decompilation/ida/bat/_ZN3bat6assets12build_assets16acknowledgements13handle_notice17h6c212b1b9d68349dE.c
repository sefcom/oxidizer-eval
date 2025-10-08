__int64 __fastcall bat::assets::build_assets::acknowledgements::handle_notice(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl
  __int64 v3; // rdx
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  __int64 v6; // [rsp+18h] [rbp-10h]

  std::fs::read_to_string(&v4);
  result = v4;
  if ( __OFSUB__(-v4, 1LL) )
  {
    v2 = 0;
    result = v5;
  }
  else
  {
    v3 = v6;
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)(a1 + 24) = v3;
    v2 = 13;
  }
  *(_BYTE *)a1 = v2;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}