__int64 __fastcall just::load_dotenv::load_from_file(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // r14
  __int64 *v5; // r15
  __int64 v6; // r14
  bool v7; // of
  __int128 v8; // xmm1
  __int64 result; // rax
  __int128 v10; // xmm1
  _BYTE v12[24]; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v13; // [rsp+28h] [rbp-190h] BYREF
  __int64 v14; // [rsp+38h] [rbp-180h]
  _BYTE v15[39]; // [rsp+40h] [rbp-178h] BYREF
  __int128 v16; // [rsp+70h] [rbp-148h] BYREF
  __int64 v17; // [rsp+80h] [rbp-138h]
  __int128 v18; // [rsp+90h] [rbp-128h]
  __int128 v19; // [rsp+A0h] [rbp-118h]
  _BYTE v20[40]; // [rsp+B0h] [rbp-108h] BYREF
  __int128 v21; // [rsp+D8h] [rbp-E0h]
  __int128 v22; // [rsp+E8h] [rbp-D0h]
  __int128 v23; // [rsp+F8h] [rbp-C0h]
  __int64 v24; // [rsp+108h] [rbp-B0h]
  __int64 v25; // [rsp+110h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+118h] [rbp-A0h]
  __int128 v27; // [rsp+128h] [rbp-90h]
  __int128 v28; // [rsp+138h] [rbp-80h]
  __int128 v29; // [rsp+148h] [rbp-70h]
  __int128 v30; // [rsp+158h] [rbp-60h]
  __int64 v31; // [rsp+168h] [rbp-50h]
  _BYTE v32[72]; // [rsp+170h] [rbp-48h] BYREF

  dotenvy::from_path_iter(&v25);
  v18 = v26;
  v19 = v27;
  if ( v25 )
  {
    v24 = v31;
    v23 = v30;
    v22 = v29;
    v21 = v28;
    *(_OWORD *)&v20[8] = v18;
    *(_OWORD *)&v20[24] = v19;
    *(_QWORD *)&v13 = 0LL;
    v14 = 0LL;
    *(_QWORD *)v20 = v25;
    v4 = &v25;
    while ( 1 )
    {
      <dotenvy::iter::Iter<R> as core::iter::traits::iterator::Iterator>::next(v4, v20);
      if ( __OFSUB__(-v25, 1LL) )
        break;
      if ( v25 == 0x8000000000000001LL )
      {
        core::ptr::drop_in_place<dotenvy::iter::Iter<std::fs::File>>(v20);
        result = v14;
        *(_QWORD *)(a1 + 24) = v14;
        *(_OWORD *)(a1 + 8) = v13;
        *(_BYTE *)a1 = 56;
        return result;
      }
      *(_OWORD *)&v12[8] = v26;
      v16 = v27;
      *(_QWORD *)v12 = v25;
      v17 = v28;
      if ( (a4 & 1) != 0
        || (v5 = v4,
            std::env::var_os(v15, v12),
            v6 = *(_QWORD *)v15,
            core::ptr::drop_in_place<std::env::VarError>(v15),
            v7 = __OFSUB__(0LL, v6),
            v4 = v5,
            v7) )
      {
        *(_QWORD *)&v15[16] = *(_QWORD *)&v12[16];
        *(_OWORD *)v15 = *(_OWORD *)v12;
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v32, &v13, v15, &v16);
        core::ptr::drop_in_place<regex::error::Error>(v32);
      }
      else
      {
        core::ptr::drop_in_place<alloc::string::String>(&v16);
        core::ptr::drop_in_place<alloc::string::String>(v12);
      }
    }
    *(_OWORD *)&v15[23] = v27;
    *(_OWORD *)&v15[7] = v26;
    *(_BYTE *)a1 = 16;
    v10 = *(_OWORD *)&v15[16];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v15;
    *(_OWORD *)(a1 + 17) = v10;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v15[31];
    core::ptr::drop_in_place<dotenvy::iter::Iter<std::fs::File>>(v20);
    return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v13);
  }
  else
  {
    *(_OWORD *)&v20[23] = v19;
    *(_OWORD *)&v20[7] = v18;
    *(_BYTE *)a1 = 16;
    v8 = *(_OWORD *)&v20[16];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v20;
    *(_OWORD *)(a1 + 17) = v8;
    result = *(_QWORD *)&v20[31];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v20[31];
  }
  return result;
}