__int64 __fastcall forc_publish::md_pre_process::MarkdownFlattener::flatten_files(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // rax
  __int64 back; // rax
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v12; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-E8h]
  _BYTE v14[24]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h]
  _QWORD v16[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+88h] [rbp-80h]
  __int128 v22; // [rsp+90h] [rbp-78h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-68h]
  __int128 v24; // [rsp+B0h] [rbp-58h]
  __int128 v25; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-38h]

  *(_QWORD *)&v4 = std::thread::local::LocalKey<T>::with();
  v22 = *(_OWORD *)&off_E53140;
  v23 = xmmword_E53150;
  v24 = v4;
  regex::regex::string::Regex::new(v14, aIncludeS, 27LL);
  v12 = *(_OWORD *)&v14[8];
  v13 = v15;
  if ( *(_QWORD *)v14 )
  {
    v21 = v13;
    v20 = v12;
    v19 = *(_QWORD *)v14;
    v16[0] = a2;
    v16[1] = a2 + 24 * a3;
    back = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v16);
    if ( !back )
    {
LABEL_7:
      v9 = v22;
      v10 = v23;
      *(_OWORD *)(a1 + 32) = v24;
      *(_OWORD *)(a1 + 16) = v10;
      *(_OWORD *)a1 = v9;
      return core::ptr::drop_in_place<regex::regex::string::Regex>(&v19);
    }
    v6 = back;
    while ( 1 )
    {
      std::fs::read_to_string(v14, v6);
      v7 = *(_QWORD *)&v14[8];
      if ( __OFSUB__(-*(_QWORD *)v14, 1LL) )
      {
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v14[8];
        *(_OWORD *)a1 = 0LL;
        goto LABEL_11;
      }
      v17 = *(_OWORD *)v14;
      v18 = *(_QWORD *)&v14[16];
      forc_publish::md_pre_process::MarkdownFlattener::expand_includes(
        (unsigned int)v14,
        *(_DWORD *)&v14[8],
        *(_DWORD *)&v14[16],
        *(_QWORD *)(v6 + 8),
        *(_QWORD *)(v6 + 16),
        (unsigned int)&v22,
        (__int64)&v19);
      v8 = *(_QWORD *)v14;
      v12 = *(_OWORD *)&v14[8];
      v13 = v15;
      if ( *(_QWORD *)v14 != 6LL )
        break;
      v26 = v13;
      v25 = v12;
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v14, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      v13 = *(_QWORD *)&v14[16];
      v12 = *(_OWORD *)v14;
      hashbrown::map::HashMap<K,V,S,A>::insert(v14, &v22, &v12, &v25);
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v14);
      core::ptr::drop_in_place<alloc::string::String>(&v17, &v22);
      v6 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v16);
      if ( !v6 )
        goto LABEL_7;
    }
    *(_QWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<alloc::string::String>(&v17, v7);
LABEL_11:
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v19);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)a1 = 0LL;
  }
  return core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,alloc::string::String>>(&v22);
}