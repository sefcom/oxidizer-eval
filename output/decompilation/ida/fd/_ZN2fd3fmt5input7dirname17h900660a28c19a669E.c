__int64 __fastcall fd::fmt::input::dirname(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int128 v7; // [rsp+10h] [rbp-28h]

  v4 = std::path::Path::parent(a2, a3);
  if ( !v4 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2, a3);
  fd::fmt::input::dirname::{{closure}}(&v6, v4);
  result = v6;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = result;
  return result;
}