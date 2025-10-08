__int64 __fastcall uu_env::load_config_file(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rcx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-2A8h]
  __int64 v7; // [rsp+8h] [rbp-2A0h]
  _QWORD *v8; // [rsp+10h] [rbp-298h]
  _QWORD *v9; // [rsp+10h] [rbp-298h]
  _QWORD *v10; // [rsp+18h] [rbp-290h]
  __int64 *v11; // [rsp+20h] [rbp-288h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-280h]
  __int128 v13; // [rsp+30h] [rbp-278h]
  __int64 v14; // [rsp+40h] [rbp-268h]
  _QWORD v15[4]; // [rsp+48h] [rbp-260h] BYREF
  __int64 v16; // [rsp+68h] [rbp-240h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-238h]
  _QWORD *v18; // [rsp+78h] [rbp-230h]
  _QWORD dest[19]; // [rsp+80h] [rbp-228h] BYREF
  char v20[16]; // [rsp+118h] [rbp-190h] BYREF
  __int64 v21; // [rsp+128h] [rbp-180h]
  _BYTE src[152]; // [rsp+130h] [rbp-178h] BYREF
  __int64 v23; // [rsp+1C8h] [rbp-E0h] BYREF
  __int64 *v24; // [rsp+1D0h] [rbp-D8h]
  _QWORD *v25; // [rsp+1D8h] [rbp-D0h]
  __int128 v26; // [rsp+1E0h] [rbp-C8h]
  __int64 v27; // [rsp+1F0h] [rbp-B8h]
  __int128 v28; // [rsp+1F8h] [rbp-B0h]
  __int128 v29; // [rsp+208h] [rbp-A0h]
  __int128 v30; // [rsp+218h] [rbp-90h]
  __int128 v31; // [rsp+228h] [rbp-80h]
  __int128 v32; // [rsp+238h] [rbp-70h]
  __int128 v33; // [rsp+248h] [rbp-60h]
  __int128 v34; // [rsp+258h] [rbp-50h]
  __int128 v35; // [rsp+268h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  v10 = &v2[2 * v1];
  while ( 1 )
  {
    v8 = v2;
    v7 = *v2;
    v6 = v2[1];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v2, v6, asc_1E8A6, 1LL) )
    {
      *(_QWORD *)src = std::io::stdio::stdin();
      v16 = std::io::stdio::Stdin::lock(src);
      LOBYTE(v17) = v3 & 1;
      ini::Ini::read_from_opt(&v23);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v16, (unsigned int)v17);
    }
    else
    {
      ini::Ini::load_from_file_opt(&v23);
    }
    if ( __OFSUB__(-v23, 1LL) )
      break;
    v9 = v8 + 2;
    *(_QWORD *)&src[16] = v27;
    *(_OWORD *)src = v26;
    *(_OWORD *)&src[136] = v35;
    *(_OWORD *)&src[120] = v34;
    *(_OWORD *)&src[104] = v33;
    *(_OWORD *)&src[88] = v32;
    *(_OWORD *)&src[72] = v31;
    *(_OWORD *)&src[56] = v30;
    *(_OWORD *)&src[40] = v29;
    *(_OWORD *)&src[24] = v28;
    memcpy(dest, src, sizeof(dest));
    v16 = v23;
    v17 = v24;
    v18 = v25;
    v11 = &v16;
    v12 = &dest[5];
    v13 = *(_OWORD *)&dest[9];
    v14 = dest[11];
    while ( 1 )
    {
      <ini::SectionIter as core::iter::traits::iterator::Iterator>::next(v20, &v11);
      if ( !v21 )
        break;
      v4 = *(_QWORD *)(v21 + 112);
      *(_QWORD *)src = v21;
      *(_QWORD *)&src[8] = v21 + 64;
      *(_OWORD *)&src[16] = *(_OWORD *)(v21 + 96);
      *(_QWORD *)&src[32] = v4;
      while ( 1 )
      {
        <ini::PropertyIter as core::iter::traits::iterator::Iterator>::next(v15, src);
        if ( !v15[0] )
          break;
        std::env::set_var(v15[0], v15[1], v15[2], v15[3]);
      }
    }
    core::ptr::drop_in_place<ini::Ini>(&v16);
    v2 = v9;
    if ( v9 == v10 )
      return 0LL;
  }
  v14 = v27;
  v13 = v26;
  v11 = v24;
  v12 = v25;
  return uu_env::load_config_file::{{closure}}(v7, v6, &v11);
}