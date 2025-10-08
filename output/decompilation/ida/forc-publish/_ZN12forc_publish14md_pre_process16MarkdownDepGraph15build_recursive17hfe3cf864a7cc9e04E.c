__int64 __fastcall forc_publish::md_pre_process::MarkdownDepGraph::build_recursive(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rbx
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // kr00_16
  __int64 v11; // rax
  __int64 v12; // r15
  __int128 v13; // xmm0
  __int128 v14; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+10h] [rbp-E8h]
  __int128 v16; // [rsp+28h] [rbp-D0h]
  _BYTE v17[24]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+50h] [rbp-A8h]
  __int128 v19; // [rsp+60h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-78h] BYREF
  __int128 v22; // [rsp+88h] [rbp-70h]
  _OWORD v23[6]; // [rsp+98h] [rbp-60h] BYREF

  forc_publish::md_pre_process::MarkdownFile::parse((__int64)v17, a2, a3);
  v7 = *(_QWORD *)v17;
  result = -*(_QWORD *)v17;
  v14 = *(_OWORD *)&v17[8];
  v15 = v18;
  if ( __OFSUB__(-*(_QWORD *)v17, 1LL) )
  {
    v9 = v14;
    a1[1] = v15;
    *a1 = v9;
  }
  else
  {
    v23[2] = v20;
    v23[1] = v19;
    v22 = v14;
    v23[0] = v15;
    v21 = *(_QWORD *)v17;
    v10 = v14;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v17, v14, *((_QWORD *)&v14 + 1));
    *(_QWORD *)&v15 = *(_QWORD *)&v17[16];
    v14 = *(_OWORD *)v17;
    if ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v14) )
    {
      *(_QWORD *)a1 = 6LL;
      core::ptr::drop_in_place<std::path::PathBuf>(v7, v10);
      return core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v23);
    }
    else
    {
      v16 = v10;
      hashbrown::map::HashMap<K,V,S,A>::iter(v17, v23);
      v11 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v17);
      if ( v11 )
      {
        while ( 1 )
        {
          forc_publish::md_pre_process::MarkdownDepGraph::build_recursive(
            &v14,
            *(_QWORD *)(v11 + 8),
            *(_QWORD *)(v11 + 16),
            a4,
            a5);
          if ( (_DWORD)v14 != 6 )
            break;
          v11 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v17);
          if ( !v11 )
            goto LABEL_8;
        }
        v13 = v14;
        a1[1] = v15;
        *a1 = v13;
        return core::ptr::drop_in_place<(std::path::PathBuf,std::collections::hash::set::HashSet<std::path::PathBuf>)>(&v21);
      }
      else
      {
LABEL_8:
        v12 = v16;
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v17, v16, *((_QWORD *)&v16 + 1));
        *(_QWORD *)&v15 = *(_QWORD *)&v17[16];
        v14 = *(_OWORD *)v17;
        ((void (__fastcall *)(_BYTE *, __int64, __int128 *, _OWORD *))hashbrown::map::HashMap<K,V,S,A>::insert)(
          v17,
          a4,
          &v14,
          v23);
        core::ptr::drop_in_place<core::option::Option<std::collections::hash::set::HashSet<std::path::PathBuf>>>(v17);
        *(_QWORD *)a1 = 6LL;
        return core::ptr::drop_in_place<std::path::PathBuf>(v7, v12);
      }
    }
  }
  return result;
}