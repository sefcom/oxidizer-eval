__int64 __fastcall alacritty::config::window::Class::new(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-48h] BYREF
  __int64 v3; // [rsp+10h] [rbp-38h]
  __int128 v4; // [rsp+18h] [rbp-30h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  <T as alloc::string::ToString>::to_string(&v2);
  <T as alloc::string::ToString>::to_string(&v4);
  *(_QWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  *(_OWORD *)(a1 + 24) = v4;
  result = v5;
  *(_QWORD *)(a1 + 40) = v5;
  return result;
}