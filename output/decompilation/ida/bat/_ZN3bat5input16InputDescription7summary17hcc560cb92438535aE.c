__int64 __fastcall bat::input::InputDescription::summary(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  __int128 v5; // [rsp+10h] [rbp-18h]

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 72)) )
  {
    bat::input::InputDescription::summary::{{closure}}(a1);
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(&v4, a2 + 72);
    v3 = v4;
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = v3;
  }
  return a1;
}