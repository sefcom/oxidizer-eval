__int64 __fastcall uu_shuf::parse_range(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  unsigned __int64 v3; // r12
  __int64 result; // rax
  unsigned __int64 v5; // rax
  char v6; // [rsp+Fh] [rbp-69h] BYREF
  _BYTE v7[8]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-60h]
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  _QWORD v11[8]; // [rsp+38h] [rbp-40h] BYREF

  core::str::<impl str>::split_once(v11);
  if ( v11[0] )
  {
    v1 = v11[2];
    v2 = v11[3];
    core::num::<impl usize>::from_ascii_radix(v7, v11[0], v11[1]);
    if ( v7[0] || (v3 = v8, core::num::<impl usize>::from_ascii_radix(v7, v1, v2), v7[0] == 1) )
    {
      v6 = v7[1];
      <T as alloc::string::SpecToString>::spec_to_string(&v9, &v6);
      result = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 24) = result;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      v5 = v8;
      if ( v3 != v8 + 1 && v3 > v8 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, aStartExceedsEn, 17LL);
        result = 1LL;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v3;
        *(_QWORD *)(a1 + 16) = v5;
        *(_BYTE *)(a1 + 24) = 0;
        result = 0LL;
      }
      *(_QWORD *)a1 = result;
    }
  }
  else
  {
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, aMissing, 11LL);
    *(_QWORD *)a1 = 1LL;
  }
  return result;
}