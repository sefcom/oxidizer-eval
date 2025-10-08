__int64 __fastcall fd::build_pattern_regex(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, char a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v9; // [rsp+10h] [rbp-E8h]
  __int128 v10; // [rsp+20h] [rbp-D8h]
  _BYTE v11[56]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+68h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-80h]
  _QWORD v14[2]; // [rsp+80h] [rbp-78h] BYREF
  int v15; // [rsp+90h] [rbp-68h]
  __int64 v16; // [rsp+98h] [rbp-60h] BYREF
  __int128 v17; // [rsp+A0h] [rbp-58h]
  __int128 v18; // [rsp+B0h] [rbp-48h]
  __int128 v19; // [rsp+C0h] [rbp-38h]
  __int128 v20; // [rsp+D0h] [rbp-28h]
  __int64 v21; // [rsp+E0h] [rbp-18h]

  if ( (a4 & (a3 != 0)) == 0 )
  {
    if ( (a5 & 1) != 0 )
      regex::escape(&v8);
    else
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, a2, a3);
    goto LABEL_7;
  }
  v14[0] = a2;
  v14[1] = a3;
  v15 = 65792;
  globset::glob::GlobBuilder::build(v11, v14);
  v6 = -*(_QWORD *)v11;
  v8 = *(_OWORD *)&v11[8];
  v9 = *(_OWORD *)&v11[24];
  v10 = *(_OWORD *)&v11[40];
  if ( !__OFSUB__(-*(_QWORD *)v11, 1LL) )
  {
    v21 = v13;
    v20 = v12;
    v18 = v9;
    v17 = v8;
    v19 = v10;
    v16 = *(_QWORD *)v11;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, *((_QWORD *)&v9 + 1), v10);
    *(_QWORD *)&v9 = *(_QWORD *)&v11[16];
    v8 = *(_OWORD *)v11;
    core::ptr::drop_in_place<globset::glob::Glob>(&v16);
LABEL_7:
    result = v9;
    *(_QWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    return result;
  }
  *(_OWORD *)&v11[32] = v10;
  *(_OWORD *)&v11[16] = v9;
  *(_OWORD *)v11 = v8;
  result = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v11, v14, v5, v6);
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}