__int64 __fastcall uu_cp::copydir::skip_last(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  __int64 v7; // [rsp+8h] [rbp-10h]

  v6 = a2;
  v7 = a3;
  v3 = <std::path::Ancestors as core::iter::traits::iterator::Iterator>::next(&v6);
  return core::iter::traits::iterator::Iterator::scan(a1, v6, v7, v3, v4);
}