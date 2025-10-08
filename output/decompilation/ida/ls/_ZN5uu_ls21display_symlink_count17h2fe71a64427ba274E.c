__int64 __fastcall uu_ls::display_symlink_count(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  _BYTE v7[28]; // [rsp+1Ch] [rbp-1Ch] BYREF

  v2 = core::fmt::num::imp::<impl usize>::_fmt(a2, v7, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v5, v2, v3);
  result = v6;
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  return result;
}