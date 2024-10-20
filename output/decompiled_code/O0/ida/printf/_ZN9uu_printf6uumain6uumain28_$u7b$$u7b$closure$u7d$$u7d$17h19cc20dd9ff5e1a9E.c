__int64 __fastcall uu_printf::uumain::uumain::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+10h] [rbp-18h] BYREF

  <alloc::string::String as alloc::string::ToString>::to_string(v4, a3);
  result = a1;
  *(_QWORD *)(a1 + 8) = v4[0];
  *(_QWORD *)(a1 + 16) = v4[1];
  *(_QWORD *)(a1 + 24) = v4[2];
  *(_DWORD *)a1 = 5;
  return result;
}
