__int64 __fastcall uu_wc::WcError::files_disabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+8h] [rbp-40h] BYREF
  __int64 v5; // [rsp+18h] [rbp-30h]
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  alloc::string::String::from_utf8_lossy(&v4, a2, a3);
  if ( __OFSUB__(0LL, (_QWORD)v4) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, *((_QWORD *)&v4 + 1), v5);
  }
  else
  {
    v7 = v5;
    v6 = v4;
  }
  result = v7;
  *(_QWORD *)(a1 + 24) = v7;
  *(_OWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return result;
}