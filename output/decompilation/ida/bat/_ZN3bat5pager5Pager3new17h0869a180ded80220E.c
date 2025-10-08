__int64 __fastcall bat::pager::Pager::new(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        unsigned __int8 a7)
{
  __int64 result; // rax
  __int128 v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, a4, a5);
  result = a7;
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  *(_OWORD *)(a1 + 24) = v13;
  *(_QWORD *)(a1 + 40) = v14;
  *(_BYTE *)(a1 + 49) = a6;
  *(_BYTE *)(a1 + 48) = a7;
  return result;
}