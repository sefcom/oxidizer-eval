__int64 __fastcall uu_cp::backup_dest(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v9; // rdx

  if ( a6 )
  {
    result = std::fs::rename(a2, a3, a4, a5);
    if ( result )
    {
      *a1 = 0x8000000000000001LL;
      a1[1] = result;
      return result;
    }
  }
  else
  {
    result = std::fs::copy(a2, a3, a4, a5);
    if ( (result & 1) != 0 )
    {
      *a1 = 0x8000000000000001LL;
      a1[1] = v9;
      return result;
    }
  }
  result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, a4, a5);
  *a1 = 0x800000000000000CLL;
  return result;
}