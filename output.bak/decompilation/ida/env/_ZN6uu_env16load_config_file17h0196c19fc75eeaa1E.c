__int64 __fastcall uu_env::load_config_file(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  char v5; // dl
  __int64 v6; // rdx
  __int64 v8; // [rsp+8h] [rbp-2A0h]
  _QWORD v9[2]; // [rsp+10h] [rbp-298h] BYREF
  __int64 *v10; // [rsp+20h] [rbp-288h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-280h]
  __int128 v12; // [rsp+30h] [rbp-278h]
  __int64 v13; // [rsp+40h] [rbp-268h]
  _QWORD v14[4]; // [rsp+48h] [rbp-260h] BYREF
  char v15[16]; // [rsp+68h] [rbp-240h] BYREF
  __int64 v16; // [rsp+78h] [rbp-230h]
  __int64 v17; // [rsp+80h] [rbp-228h] BYREF
  __int64 *v18; // [rsp+88h] [rbp-220h]
  _QWORD *v19; // [rsp+90h] [rbp-218h]
  _QWORD dest[19]; // [rsp+98h] [rbp-210h] BYREF
  _BYTE src[152]; // [rsp+130h] [rbp-178h] BYREF
  __int64 v22; // [rsp+1C8h] [rbp-E0h] BYREF
  __int64 *v23; // [rsp+1D0h] [rbp-D8h]
  _QWORD *v24; // [rsp+1D8h] [rbp-D0h]
  __int128 v25; // [rsp+1E0h] [rbp-C8h]
  __int64 v26; // [rsp+1F0h] [rbp-B8h]
  __int128 v27; // [rsp+1F8h] [rbp-B0h]
  __int128 v28; // [rsp+208h] [rbp-A0h]
  __int128 v29; // [rsp+218h] [rbp-90h]
  __int128 v30; // [rsp+228h] [rbp-80h]
  __int128 v31; // [rsp+238h] [rbp-70h]
  __int128 v32; // [rsp+248h] [rbp-60h]
  __int128 v33; // [rsp+258h] [rbp-50h]
  __int128 v34; // [rsp+268h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16);
  v9[0] = *(_QWORD *)(a1 + 8);
  v9[1] = v1;
  v2 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    v3 = *v2;
    v4 = v2[1];
    v8 = *v2;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v2, v4, asc_244C2, 1LL) )
    {
      *(_QWORD *)src = std::io::stdio::stdin(v3, v4);
      v17 = std::io::stdio::Stdin::lock(src);
      LOBYTE(v18) = v5 & 1;
      ini::Ini::read_from_opt(&v22);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v17, (unsigned int)v18);
    }
    else
    {
      ini::Ini::load_from_file_opt(&v22);
    }
    if ( v22 == 0x8000000000000000LL )
      break;
    *(_QWORD *)&src[16] = v26;
    *(_OWORD *)src = v25;
    *(_OWORD *)&src[136] = v34;
    *(_OWORD *)&src[120] = v33;
    *(_OWORD *)&src[104] = v32;
    *(_OWORD *)&src[88] = v31;
    *(_OWORD *)&src[72] = v30;
    *(_OWORD *)&src[56] = v29;
    *(_OWORD *)&src[40] = v28;
    *(_OWORD *)&src[24] = v27;
    memcpy(dest, src, sizeof(dest));
    v17 = v22;
    v18 = v23;
    v19 = v24;
    v10 = &v17;
    v11 = &dest[5];
    v12 = *(_OWORD *)&dest[9];
    v13 = dest[11];
    while ( 1 )
    {
      <ini::SectionIter as core::iter::traits::iterator::Iterator>::next(v15, &v10);
      if ( !v16 )
        break;
      v6 = *(_QWORD *)(v16 + 112);
      *(_QWORD *)src = v16;
      *(_QWORD *)&src[8] = v16 + 64;
      *(_OWORD *)&src[16] = *(_OWORD *)(v16 + 96);
      *(_QWORD *)&src[32] = v6;
      while ( 1 )
      {
        <ini::PropertyIter as core::iter::traits::iterator::Iterator>::next(v14, src);
        if ( !v14[0] )
          break;
        std::env::set_var(v14[0], v14[1], v14[2], v14[3]);
      }
    }
    core::ptr::drop_in_place<ini::Ini>(&v17);
    v2 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
    if ( !v2 )
      return 0LL;
  }
  v13 = v26;
  v12 = v25;
  v10 = v23;
  v11 = v24;
  return uu_env::load_config_file::{{closure}}(v8, v4, &v10);
}
