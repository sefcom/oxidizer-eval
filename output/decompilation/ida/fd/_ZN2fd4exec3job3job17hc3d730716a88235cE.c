__int64 __fastcall fd::exec::job::job(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  int v7; // eax
  int v8; // edx
  unsigned __int8 v9; // al
  char v10; // r13
  int v11; // eax
  int v12; // edx
  unsigned __int8 v13; // al
  __int64 v15; // [rsp+8h] [rbp-380h]
  char v16; // [rsp+14h] [rbp-374h]
  __int64 v17; // [rsp+18h] [rbp-370h]
  unsigned __int64 v18; // [rsp+20h] [rbp-368h]
  __int128 v21; // [rsp+40h] [rbp-348h] BYREF
  __int128 v22; // [rsp+50h] [rbp-338h]
  __int128 v23; // [rsp+60h] [rbp-328h]
  __int64 v24; // [rsp+70h] [rbp-318h]
  _BYTE v25[80]; // [rsp+80h] [rbp-308h] BYREF
  _BYTE v26[24]; // [rsp+D0h] [rbp-2B8h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-2A0h] BYREF
  __int128 v28; // [rsp+F0h] [rbp-298h]
  __int128 v29; // [rsp+100h] [rbp-288h]
  __int128 v30; // [rsp+110h] [rbp-278h]
  __int64 v31; // [rsp+120h] [rbp-268h]
  _BYTE dest[248]; // [rsp+128h] [rbp-260h] BYREF
  __int64 v33; // [rsp+220h] [rbp-168h] BYREF
  __int128 v34; // [rsp+228h] [rbp-160h]
  __int128 v35; // [rsp+238h] [rbp-150h]
  __int128 v36; // [rsp+248h] [rbp-140h]
  __int64 v37; // [rsp+258h] [rbp-130h]
  _BYTE src[248]; // [rsp+260h] [rbp-128h] BYREF

  v18 = *(_QWORD *)(a5 + 416);
  <I as core::iter::traits::collect::IntoIterator>::into_iter(v25, a1);
  LODWORD(v15) = 0;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a5 + 360)) )
    v15 = *(_QWORD *)(a5 + 368);
  v17 = *(_QWORD *)(a5 + 376);
  LOBYTE(v5) = 2;
  if ( (*(_BYTE *)(a5 + 486) & 1) != 0 )
  {
    v16 = *(_BYTE *)(a5 + 487);
    while ( 1 )
    {
      <core::iter::adapters::flatten::Flatten<I> as core::iter::traits::iterator::Iterator>::next(&v33, v25);
      if ( v33 == 5 )
        break;
      if ( (_DWORD)v33 == 4 )
      {
        v24 = v37;
        v23 = v36;
        v22 = v35;
        v21 = v34;
        <T as alloc::string::SpecToString>::spec_to_string(v26, &v21);
        fd::error::print_error((__int64)v26);
        core::ptr::drop_in_place<ignore::Error>(&v21);
      }
      else
      {
        v27 = v33;
        v31 = v37;
        v30 = v36;
        v29 = v35;
        v28 = v34;
        memcpy(dest, src, sizeof(dest));
        v7 = fd::dir_entry::DirEntry::stripped_path((__int64)&v27, v16);
        v9 = fd::exec::CommandSet::execute(a2, a3, v7, v8, v15, v17, a4, v18 >= 2);
        v5 = fd::exit_codes::merge_exitcodes((v9 << 8) | (unsigned int)(unsigned __int8)v5);
        core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v27);
      }
    }
  }
  else
  {
    v10 = *(_BYTE *)(a5 + 487);
    while ( 1 )
    {
      <core::iter::adapters::flatten::Flatten<I> as core::iter::traits::iterator::Iterator>::next(&v33, v25);
      if ( v33 == 5 )
        break;
      if ( (_DWORD)v33 == 4 )
      {
        v24 = v37;
        v23 = v36;
        v22 = v35;
        v21 = v34;
        core::ptr::drop_in_place<ignore::Error>(&v21);
      }
      else
      {
        v27 = v33;
        v31 = v37;
        v30 = v36;
        v29 = v35;
        v28 = v34;
        memcpy(dest, src, sizeof(dest));
        v11 = fd::dir_entry::DirEntry::stripped_path((__int64)&v27, v10);
        v13 = fd::exec::CommandSet::execute(a2, a3, v11, v12, v15, v17, a4, v18 >= 2);
        v5 = fd::exit_codes::merge_exitcodes((v13 << 8) | (unsigned int)(unsigned __int8)v5);
        core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v27);
      }
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>(v25);
  return v5;
}