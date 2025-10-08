__int64 __fastcall linera_summary::github::Github::workflows_handler(__int64 a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v4[48]; // [rsp+18h] [rbp-30h] BYREF

  <alloc::string::String as core::clone::Clone>::clone(v3, a2 + 144);
  <alloc::string::String as core::clone::Clone>::clone(v4, a2 + 168);
  octocrab::Octocrab::workflows(a1, a2, v3, v4);
  return a1;
}