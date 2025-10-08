__int64 __fastcall alacritty::config::imports(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+10h] [rbp-B8h]
  __int64 v17; // [rsp+18h] [rbp-B0h]
  __int64 v18; // [rsp+20h] [rbp-A8h]
  __int64 v19; // [rsp+28h] [rbp-A0h]
  _BYTE v20[24]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h]
  __int128 v22; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+60h] [rbp-68h]
  __int128 v24; // [rsp+68h] [rbp-60h] BYREF
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int128 v26; // [rsp+80h] [rbp-48h] BYREF
  __int64 v27; // [rsp+90h] [rbp-38h]

  v19 = a4;
  v18 = a3;
  v7 = toml::value::Value::get(a2, aImport, 6LL);
  result = core::option::Option<T>::or_else(v7, a2);
  if ( !result )
  {
    *(_QWORD *)(a1 + 16) = 8LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_OWORD *)a1 = 0LL;
    return result;
  }
  if ( *(_BYTE *)(result + 26) != 7 )
  {
    v10 = a1 + 8;
    v11 = aInvalidImportT;
    goto LABEL_7;
  }
  v9 = *(_QWORD *)(result + 16);
  if ( v9 != 0 && a5 == 0 )
  {
    v10 = a1 + 8;
    v11 = aExceededMaximu_0;
LABEL_7:
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, v11);
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  if ( v9 )
  {
    v12 = *(_QWORD *)(result + 8);
    v13 = 32 * v9;
    v14 = 0LL;
    do
    {
      if ( *(_BYTE *)(v12 + v14 + 26) == 2 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, *(_QWORD *)(v12 + v14 + 8));
        v23 = *(_QWORD *)&v20[16];
        v22 = *(_OWORD *)v20;
        alacritty::config::normalize_import(&v24, v18, v19, &v22);
        v21 = v25;
        *(_OWORD *)&v20[8] = v24;
        *(_QWORD *)v20 = 0LL;
        alloc::vec::Vec<T,A>::push(&v15, v20, &off_881F30);
      }
      else
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, aInvalidImportE);
        v21 = v27;
        *(_OWORD *)&v20[8] = v26;
        *(_QWORD *)v20 = 1LL;
        alloc::vec::Vec<T,A>::push(&v15, v20, &off_881F48);
      }
      v14 += 32LL;
    }
    while ( v13 != v14 );
  }
  *(_QWORD *)(a1 + 24) = v17;
  *(_QWORD *)(a1 + 8) = v15;
  result = v16;
  *(_QWORD *)(a1 + 16) = v16;
  *(_QWORD *)a1 = 0LL;
  return result;
}