__int64 __fastcall just::executor::Executor::error(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 i; // rbp
  __int64 result; // rax
  __int128 v12; // [rsp+8h] [rbp-80h] BYREF
  __int64 v13; // [rsp+18h] [rbp-70h]
  __int64 v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int128 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-38h]

  v15 = a5;
  v14 = a4;
  v18 = a3;
  v6 = *a2;
  if ( *a2 )
  {
    v7 = a2[2];
    if ( v7 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, v7);
      v17 = v13;
      v16 = v12;
    }
    else
    {
      *(_QWORD *)&v16 = 0x8000000000000000LL;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, v6);
    *(_QWORD *)(a1 + 72) = v13;
    *(_OWORD *)(a1 + 56) = v12;
    *(_QWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v16;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = v14;
    result = v15;
    *(_QWORD *)(a1 + 24) = v15;
    *(_BYTE *)a1 = 43;
  }
  else
  {
    v8 = a2[1];
    <alloc::string::String as core::clone::Clone>::clone(&v12, v8 + 24);
    v9 = *(_QWORD *)(v8 + 8);
    for ( i = 48LL * *(_QWORD *)(v8 + 16); i; i -= 48LL )
    {
      alloc::string::String::push(&v12, 32LL);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v12,
        *(_QWORD *)(v9 + 8),
        *(_QWORD *)(v9 + 8) + *(_QWORD *)(v9 + 16));
      v9 += 48LL;
    }
    *(_QWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 32) = v12;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = v14;
    result = v15;
    *(_QWORD *)(a1 + 24) = v15;
    *(_BYTE *)a1 = 41;
  }
  return result;
}