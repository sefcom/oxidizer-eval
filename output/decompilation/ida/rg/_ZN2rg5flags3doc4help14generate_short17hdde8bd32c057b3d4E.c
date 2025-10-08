__int64 __fastcall rg::flags::doc::help::generate_short(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r15
  unsigned __int8 v5; // al
  __int64 v6; // r13
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BOOL8 v10; // rdx
  unsigned __int8 *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _OWORD *v17; // rcx
  __int128 v19; // [rsp+10h] [rbp-148h] BYREF
  _QWORD *v20; // [rsp+20h] [rbp-138h]
  __int128 v21; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v22[24]; // [rsp+40h] [rbp-118h]
  __int64 v23; // [rsp+58h] [rbp-100h]
  __int64 v24; // [rsp+60h] [rbp-F8h]
  __int64 v25; // [rsp+68h] [rbp-F0h]
  __int64 v26; // [rsp+70h] [rbp-E8h]
  __int64 v27; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-D8h]
  __int64 v29; // [rsp+88h] [rbp-D0h]
  __int128 v30; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-B8h]
  __int64 v32; // [rsp+B0h] [rbp-A8h]
  __int128 v33; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-90h]
  __int128 v35; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD *v36; // [rsp+E0h] [rbp-78h]
  __int64 v37; // [rsp+E8h] [rbp-70h]
  __int64 v38; // [rsp+F0h] [rbp-68h]
  _QWORD v39[2]; // [rsp+100h] [rbp-58h] BYREF
  __int128 v40; // [rsp+110h] [rbp-48h] BYREF
  __int64 v41; // [rsp+120h] [rbp-38h]

  v32 = a1;
  v27 = 0LL;
  v29 = 0LL;
  v1 = 8LL;
  v2 = 0LL;
  do
  {
    v3 = *(_QWORD *)((char *)&unk_3E9308 + v1 - 8);
    v4 = *(_QWORD *)((char *)&unk_3E9308 + v1);
    v5 = (*(__int64 (__fastcall **)(__int64))(v4 + 80))(v3);
    alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v35, &v27, v5);
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 8LL;
    *(_OWORD *)v22 = 0LL;
    *(_QWORD *)&v22[16] = 8LL;
    v23 = 0LL;
    v6 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert(&v35, &v21);
    rg::flags::doc::help::generate_short_flag(&v21, v3, v4);
    v35 = v21;
    v7 = *(_QWORD **)v22;
    v40 = *(_OWORD *)&v22[8];
    v41 = v23;
    v2 = core::cmp::Ord::max(v2, *(_QWORD *)v22);
    v36 = v7;
    alloc::vec::Vec<T,A>::push(v6, &v35, &off_3EA280);
    alloc::vec::Vec<T,A>::push(v6 + 24, &v40, &off_3EA298);
    v1 += 16LL;
  }
  while ( v1 != 1672 );
  rg::flags::doc::version::generate_digits(&v21);
  alloc::str::<impl str>::replace(
    (unsigned int)&v19,
    (unsigned int)aRipgrepVersion,
    756,
    (unsigned int)aVersion_0,
    11,
    DWORD2(v21),
    *(__int64 *)v22);
  core::ptr::drop_in_place<alloc::string::String>(&v21);
  v8 = v28;
  v9 = v27;
  v10 = v27 != 0;
  if ( v27 )
    v9 = v29;
  v21 = v27 != 0;
  *(_QWORD *)v22 = v27;
  *(_QWORD *)&v22[8] = v28;
  *(_QWORD *)&v22[16] = v27 != 0;
  v23 = 0LL;
  v24 = v27;
  v25 = v28;
  v26 = v9;
  while ( 1 )
  {
    v11 = (unsigned __int8 *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(
                               &v21,
                               v9,
                               v10,
                               v8);
    if ( !v11 )
      break;
    v13 = v12;
    v14 = 8 * (unsigned int)*v11;
    v15 = *(__int64 *)((char *)&off_3EBB60 + v14);
    v16 = *(_QWORD *)((char *)&unk_88778 + v14);
    *(_QWORD *)&v30 = v15;
    *((_QWORD *)&v30 + 1) = v16;
    v39[0] = &v30;
    v39[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v35 = &off_3EA260;
    *((_QWORD *)&v35 + 1) = 2LL;
    v38 = 0LL;
    v36 = v39;
    v37 = 1LL;
    core::option::Option<T>::map_or_else(&v33, 0LL, &unk_88778, &v35);
    v30 = v33;
    v31 = v34;
    rg::flags::doc::help::format_short_columns(&v33, v13[1], v13[2], v13[4], v13[5], v2);
    v9 = *((_QWORD *)&v19 + 1);
    alloc::str::<impl str>::replace(&v35, *((_QWORD *)&v19 + 1), v20, &v30, *((_QWORD *)&v33 + 1), v34);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    v20 = v36;
    v19 = v35;
    core::ptr::drop_in_place<alloc::string::String>(&v33);
    core::ptr::drop_in_place<alloc::string::String>(&v30);
  }
  v17 = (_OWORD *)v32;
  *(_QWORD *)(v32 + 16) = v20;
  *v17 = v19;
  return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<rg::flags::Category,(alloc::vec::Vec<alloc::string::String>,alloc::vec::Vec<alloc::string::String>)>>(&v27);
}