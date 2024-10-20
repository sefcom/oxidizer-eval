__int64 __fastcall uu_ls::dired::calculate_subdired(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = a1[2];
  if ( v2 )
    v3 = *(_QWORD *)(16 * v2 + a1[1] - 8) + 3LL;
  else
    v3 = 2LL;
  v4 = a1[5];
  if ( v4 == a1[3] )
    alloc::raw_vec::RawVec<T,A>::grow_one(a1 + 3);
  result = v3 + 2LL * (v4 != 0);
  v6 = a1[4];
  v7 = 16 * v4;
  *(_QWORD *)(v6 + v7) = result;
  *(_QWORD *)(v6 + v7 + 8) = result + a2;
  a1[5] = v4 + 1;
  return result;
}
