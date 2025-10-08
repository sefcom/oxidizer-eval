__int64 __fastcall just::parser::Parser::advance(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  _OWORD v17[7]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v19; // [rsp+78h] [rbp-60h]
  __int128 v20; // [rsp+88h] [rbp-50h]
  __int128 v21; // [rsp+98h] [rbp-40h]
  __int128 v22; // [rsp+A8h] [rbp-30h]
  __int128 v23; // [rsp+B8h] [rbp-20h]

  alloc::collections::btree::map::BTreeMap<K,V,A>::clear(a2 + 7);
  v4 = a2[4];
  v5 = a2[11];
  if ( v5 > v4 )
    core::slice::index::slice_start_index_len_fail(v5, v4, &off_4306C0);
  if ( v5 == v4 )
  {
LABEL_7:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((char *)v17 + 8, aParserAdvanceA);
    *(_QWORD *)&v17[0] = 0x8000000000000028LL;
    result = just::parser::Parser::error((__int64)v18, (__int64)a2, (__int64)v17);
    v17[4] = v23;
    v10 = v19;
    v11 = v20;
    v12 = v21;
    v13 = v22;
    v17[3] = v22;
    v17[2] = v21;
    v17[1] = v20;
    v17[0] = v19;
    *(_OWORD *)(a1 + 64) = v23;
    *(_OWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
  }
  else
  {
    result = a2[3];
    v7 = 72 * v5;
    v8 = 72 * v4;
    v9 = 0LL;
    while ( *(_BYTE *)(result + v7 + 64) == 36 )
    {
      v7 += 72LL;
      --v9;
      if ( v8 == v7 )
      {
        a2[11] = v5 - v9;
        goto LABEL_7;
      }
    }
    a2[11] = v5 - v9 + 1;
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(result + v7 + 64);
    v14 = *(_OWORD *)(result + v7);
    v15 = *(_OWORD *)(result + v7 + 16);
    v16 = *(_OWORD *)(result + v7 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(result + v7 + 48);
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}