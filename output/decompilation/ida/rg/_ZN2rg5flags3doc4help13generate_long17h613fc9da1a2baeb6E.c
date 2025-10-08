__int64 __fastcall rg::flags::doc::help::generate_long(__int64 a1)
{
  __int64 i; // r15
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  __int64 v5; // r13
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int64 v8; // rsi
  _BOOL8 v9; // rdx
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _OWORD *v16; // rcx
  __int128 v18; // [rsp+10h] [rbp-128h] BYREF
  _QWORD *v19; // [rsp+20h] [rbp-118h]
  __int64 v20; // [rsp+30h] [rbp-108h] BYREF
  __int64 v21; // [rsp+38h] [rbp-100h]
  __int64 v22; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v23; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-E8h]
  __int64 v25; // [rsp+58h] [rbp-E0h]
  __int128 v26; // [rsp+60h] [rbp-D8h]
  __int64 v27; // [rsp+70h] [rbp-C8h]
  __int64 v28; // [rsp+78h] [rbp-C0h]
  __int64 v29; // [rsp+80h] [rbp-B8h]
  __int64 v30; // [rsp+88h] [rbp-B0h]
  __int128 v31; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-98h]
  __int64 v33; // [rsp+A8h] [rbp-90h]
  __int128 v34; // [rsp+B0h] [rbp-88h] BYREF
  _QWORD *v35; // [rsp+C0h] [rbp-78h]
  __int64 v36; // [rsp+C8h] [rbp-70h]
  __int64 v37; // [rsp+D0h] [rbp-68h]
  _QWORD v38[2]; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+100h] [rbp-38h]

  v33 = a1;
  v20 = 0LL;
  v22 = 0LL;
  for ( i = 8LL; i != 1672; i += 16LL )
  {
    v2 = *(_QWORD *)((char *)&unk_3E9308 + i - 8);
    v3 = *(_QWORD *)((char *)&unk_3E9308 + i);
    v4 = (*(__int64 (__fastcall **)(__int64))(v3 + 80))(v2);
    alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v23, &v20, v4);
    *(_QWORD *)&v34 = 0LL;
    *((_QWORD *)&v34 + 1) = 1LL;
    v35 = 0LL;
    v5 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert(&v23, &v34);
    if ( *(_QWORD *)(v5 + 16) )
    {
      v23 = (unsigned __int64)&off_3EA408;
      v24 = 1LL;
      v25 = 8LL;
      v26 = 0LL;
      v6 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(v5, &v23);
      core::result::Result<T,E>::unwrap(v6, &off_3EA418);
    }
    rg::flags::doc::help::generate_long_flag(v2, v3, v5);
  }
  rg::flags::doc::version::generate_digits(&v23);
  alloc::str::<impl str>::replace(
    (unsigned int)&v18,
    (unsigned int)aRipgrepVersion_0,
    1514,
    (unsigned int)aVersion_0,
    11,
    v24,
    v25);
  core::ptr::drop_in_place<alloc::string::String>(&v23);
  v7 = v21;
  v8 = v20;
  v9 = v20 != 0;
  if ( v20 )
    v8 = v22;
  v23 = v20 != 0;
  v24 = 0LL;
  v25 = v20;
  *(_QWORD *)&v26 = v21;
  *((_QWORD *)&v26 + 1) = v23;
  v27 = 0LL;
  v28 = v20;
  v29 = v21;
  v30 = v8;
  while ( 1 )
  {
    v10 = (unsigned __int8 *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(
                               &v23,
                               v8,
                               v9,
                               v7);
    if ( !v10 )
      break;
    v12 = v11;
    v13 = 8 * (unsigned int)*v10;
    v14 = *(__int64 *)((char *)&off_3EBB60 + v13);
    v15 = *(_QWORD *)((char *)&unk_88778 + v13);
    *(_QWORD *)&v31 = v14;
    *((_QWORD *)&v31 + 1) = v15;
    v38[0] = &v31;
    v38[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = &off_3EA260;
    *((_QWORD *)&v34 + 1) = 2LL;
    v37 = 0LL;
    v35 = v38;
    v36 = 1LL;
    core::option::Option<T>::map_or_else(&v39, 0LL, &unk_88778, &v34);
    v31 = v39;
    v32 = v40;
    v8 = *((_QWORD *)&v18 + 1);
    alloc::str::<impl str>::replace(&v34, *((_QWORD *)&v18 + 1), v19, &v31, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
    core::ptr::drop_in_place<alloc::string::String>(&v18);
    v19 = v35;
    v18 = v34;
    core::ptr::drop_in_place<alloc::string::String>(&v31);
  }
  v16 = (_OWORD *)v33;
  *(_QWORD *)(v33 + 16) = v19;
  *v16 = v18;
  return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<rg::flags::Category,alloc::string::String>>(&v20);
}