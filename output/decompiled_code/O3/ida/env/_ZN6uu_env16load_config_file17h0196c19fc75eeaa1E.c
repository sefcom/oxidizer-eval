__int64 __fastcall uu_env::load_config_file(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rax
  char v3; // dl
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-2A8h]
  __int64 v7; // [rsp+8h] [rbp-2A0h]
  _QWORD v8[2]; // [rsp+10h] [rbp-298h] BYREF
  __int64 *v9; // [rsp+20h] [rbp-288h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-280h]
  __int128 v11; // [rsp+30h] [rbp-278h]
  __int64 v12; // [rsp+40h] [rbp-268h]
  _QWORD v13[4]; // [rsp+48h] [rbp-260h] BYREF
  char v14[16]; // [rsp+68h] [rbp-240h] BYREF
  __int64 v15; // [rsp+78h] [rbp-230h]
  __int64 v16; // [rsp+80h] [rbp-228h] BYREF
  __int64 *v17; // [rsp+88h] [rbp-220h]
  _QWORD *v18; // [rsp+90h] [rbp-218h]
  _QWORD dest[19]; // [rsp+98h] [rbp-210h] BYREF
  _BYTE src[152]; // [rsp+130h] [rbp-178h] BYREF
  __int64 v21; // [rsp+1C8h] [rbp-E0h] BYREF
  __int64 *v22; // [rsp+1D0h] [rbp-D8h]
  _QWORD *v23; // [rsp+1D8h] [rbp-D0h]
  __int128 v24; // [rsp+1E0h] [rbp-C8h]
  __int64 v25; // [rsp+1F0h] [rbp-B8h]
  __int128 v26; // [rsp+1F8h] [rbp-B0h]
  __int128 v27; // [rsp+208h] [rbp-A0h]
  __int128 v28; // [rsp+218h] [rbp-90h]
  __int128 v29; // [rsp+228h] [rbp-80h]
  __int128 v30; // [rsp+238h] [rbp-70h]
  __int128 v31; // [rsp+248h] [rbp-60h]
  __int128 v32; // [rsp+258h] [rbp-50h]
  __int128 v33; // [rsp+268h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16);
  v8[0] = *(_QWORD *)(a1 + 8);
  v8[1] = v1;
  v2 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v8);
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    v7 = *v2;
    v6 = v2[1];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v2, v6, asc_244C2, 1LL) )
    {
      *(_QWORD *)src = std::io::stdio::stdin();
      v16 = std::io::stdio::Stdin::lock(src);
      LOBYTE(v17) = v3 & 1;
      ini::Ini::read_from_opt(&v21);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v16, (unsigned int)v17);
    }
    else
    {
      ini::Ini::load_from_file_opt(&v21);
    }
    if ( v21 == 0x8000000000000000LL )
      break;
    *(_QWORD *)&src[16] = v25;
    *(_OWORD *)src = v24;
    *(_OWORD *)&src[136] = v33;
    *(_OWORD *)&src[120] = v32;
    *(_OWORD *)&src[104] = v31;
    *(_OWORD *)&src[88] = v30;
    *(_OWORD *)&src[72] = v29;
    *(_OWORD *)&src[56] = v28;
    *(_OWORD *)&src[40] = v27;
    *(_OWORD *)&src[24] = v26;
    memcpy(dest, src, sizeof(dest));
    v16 = v21;
    v17 = v22;
    v18 = v23;
    v9 = &v16;
    v10 = &dest[5];
    v11 = *(_OWORD *)&dest[9];
    v12 = dest[11];
    while ( 1 )
    {
      <ini::SectionIter as core::iter::traits::iterator::Iterator>::next(v14, &v9);
      if ( !v15 )
        break;
      v4 = *(_QWORD *)(v15 + 112);
      *(_QWORD *)src = v15;
      *(_QWORD *)&src[8] = v15 + 64;
      *(_OWORD *)&src[16] = *(_OWORD *)(v15 + 96);
      *(_QWORD *)&src[32] = v4;
      while ( 1 )
      {
        <ini::PropertyIter as core::iter::traits::iterator::Iterator>::next(v13, src);
        if ( !v13[0] )
          break;
        std::env::set_var(v13[0], v13[1], v13[2], v13[3]);
      }
    }
    core::ptr::drop_in_place<ini::Ini>(&v16);
    v2 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v8);
    if ( !v2 )
      return 0LL;
  }
  v12 = v25;
  v11 = v24;
  v9 = v22;
  v10 = v23;
  return uu_env::load_config_file::{{closure}}(v7, v6, &v9);
}
