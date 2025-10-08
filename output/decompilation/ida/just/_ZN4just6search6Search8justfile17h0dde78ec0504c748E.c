__int64 __fastcall just::search::Search::justfile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int128 v6; // kr00_16
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 result; // rax
  __int128 v14; // xmm0
  __int8 v15; // al
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // [rsp+10h] [rbp-168h]
  __int64 v19; // [rsp+18h] [rbp-160h]
  __int128 v20; // [rsp+20h] [rbp-158h] BYREF
  __int64 v21; // [rsp+30h] [rbp-148h]
  __int64 v22; // [rsp+38h] [rbp-140h]
  __int64 v23; // [rsp+40h] [rbp-138h] BYREF
  char v24; // [rsp+48h] [rbp-130h]
  __int128 v25; // [rsp+50h] [rbp-128h] BYREF
  __int64 v26; // [rsp+60h] [rbp-118h]
  __m256i v27; // [rsp+68h] [rbp-110h] BYREF
  __int128 v28; // [rsp+88h] [rbp-F0h]
  __int64 v29; // [rsp+B0h] [rbp-C8h]
  __int64 v30; // [rsp+B8h] [rbp-C0h]
  __int64 v31; // [rsp+C0h] [rbp-B8h]
  _OWORD v32[2]; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-90h]
  __int64 v34; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v35; // [rsp+F8h] [rbp-80h]
  __int128 v36; // [rsp+108h] [rbp-70h]
  __int64 v37; // [rsp+118h] [rbp-60h]
  _BYTE v38[72]; // [rsp+130h] [rbp-48h] BYREF

  v29 = a3;
  v22 = a2;
  while ( 2 )
  {
    v18 = a4;
    v19 = a5;
    v31 = std::path::Path::parent(a4, a5);
    v30 = v5;
    *(_QWORD *)&v20 = 0LL;
    v21 = 0LL;
    std::fs::read_dir(&v34, v18, v19);
    if ( (_BYTE)v35 == 2 )
    {
      just::search::Search::project_root::{{closure}}(&v27, v18, v19, v34);
      v14 = *(_OWORD *)v27.m256i_i8;
      v15 = v27.m256i_i8[16];
      *(_QWORD *)(a1 + 17) = *(__int64 *)((char *)&v27.m256i_i64[2] + 1);
      *(_QWORD *)(a1 + 24) = v27.m256i_i64[3];
      *(_OWORD *)a1 = v14;
      *(_BYTE *)(a1 + 16) = v15;
      return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v20);
    }
    else
    {
      v23 = v34;
      v24 = v35;
      while ( 1 )
      {
        <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v34, &v23);
        if ( (_DWORD)v34 != 1 )
          break;
        if ( !(_QWORD)v35 )
        {
          just::search::Search::project_root::{{closure}}(&v27, v18, v19, *((_QWORD *)&v35 + 1));
          v11 = v27.m256i_i64[0];
          v12 = *(_OWORD *)&v27.m256i_u64[1];
          v25 = *(_OWORD *)&v27.m256i_u64[1];
          v26 = v27.m256i_i64[3];
          *(_QWORD *)(a1 + 24) = v27.m256i_i64[3];
          *(_OWORD *)(a1 + 8) = v12;
          *(_QWORD *)a1 = v11;
          core::ptr::drop_in_place<std::fs::ReadDir>(&v23);
          return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v20);
        }
        v33 = v37;
        v32[1] = v36;
        v32[0] = v35;
        std::fs::DirEntry::file_name(&v25, v32);
        core::str::converts::from_utf8(&v27, *((_QWORD *)&v25 + 1), v26);
        if ( v27.m256i_i32[0] != 1 )
        {
          v6 = *(_OWORD *)&v27.m256i_u64[1];
          v27.m256i_i64[0] = 0LL;
          v27.m256i_i64[1] = 2LL;
          v28 = *(_OWORD *)&off_42E5C0;
          *(_OWORD *)&v27.m256i_u64[2] = *(_OWORD *)&off_42E5B0;
          v7 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v27);
          if ( v7 )
          {
            v9 = v8;
            do
            {
              if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(
                                      v6,
                                      *((_QWORD *)&v6 + 1),
                                      v7,
                                      v9) )
              {
                std::fs::DirEntry::path(v38, v32);
                alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v20, v38);
              }
              v7 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v27);
              v9 = v10;
            }
            while ( v7 );
          }
        }
        core::ptr::drop_in_place<std::fs::DirEntry>(v32);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v25);
      }
      core::ptr::drop_in_place<std::fs::ReadDir>(&v23);
      if ( !v21 )
      {
        if ( v22
          && (std::path::Path::components(&v34, v18, v19),
              std::path::Path::components(&v27, v22, v29),
              (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v34, &v27)) )
        {
          core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v20);
        }
        else
        {
          core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v20);
          a5 = v30;
          a4 = v31;
          if ( v31 )
            continue;
        }
        result = 0x8000000000000005LL;
        v17 = (__int64 *)a1;
        goto LABEL_27;
      }
      if ( v21 != 1 )
      {
        v17 = (__int64 *)a1;
        *(_QWORD *)(a1 + 24) = v21;
        *(_OWORD *)(a1 + 8) = v20;
        result = 0x8000000000000004LL;
LABEL_27:
        *v17 = result;
        return result;
      }
      <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(
        &v27,
        &v20);
      <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v34, &v27);
      v16 = v34;
      if ( __OFSUB__(-v34, 1LL) )
        core::option::unwrap_failed(&off_430DB0);
      *(_OWORD *)(a1 + 16) = v35;
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = 0x8000000000000006LL;
      return core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<std::path::PathBuf>>(&v27);
    }
  }
}