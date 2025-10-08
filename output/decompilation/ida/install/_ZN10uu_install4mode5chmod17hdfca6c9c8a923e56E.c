bool __fastcall uu_install::mode::chmod(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15

  v2 = std::fs::set_permissions();
  v3 = v2;
  if ( v2 )
    uu_install::mode::chmod::{{closure}}(a1, a2, v2);
  return v3 != 0;
}