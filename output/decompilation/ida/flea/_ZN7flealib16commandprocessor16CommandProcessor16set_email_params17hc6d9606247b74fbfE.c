__int64 __fastcall flealib::commandprocessor::CommandProcessor::set_email_params(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  char **v9; // rdx
  __int64 v10; // rdi
  _BYTE v11[8]; // [rsp+8h] [rbp-140h] BYREF
  _QWORD *v12; // [rsp+10h] [rbp-138h]
  unsigned __int64 v13; // [rsp+18h] [rbp-130h]
  __int128 v14; // [rsp+20h] [rbp-128h] BYREF
  __int128 v15; // [rsp+30h] [rbp-118h]
  __int128 v16; // [rsp+40h] [rbp-108h]
  __int128 v17; // [rsp+50h] [rbp-F8h]
  __int128 v18; // [rsp+60h] [rbp-E8h]
  __int128 v19; // [rsp+70h] [rbp-D8h]
  __int128 v20; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+90h] [rbp-B8h]
  __int128 v22; // [rsp+A0h] [rbp-A8h]
  __int128 v23; // [rsp+B0h] [rbp-98h]
  __int128 v24; // [rsp+C0h] [rbp-88h]
  __int128 v25; // [rsp+D0h] [rbp-78h]
  _QWORD v26[2]; // [rsp+E8h] [rbp-60h] BYREF
  _BYTE v27[48]; // [rsp+F8h] [rbp-50h] BYREF
  __int16 v28; // [rsp+128h] [rbp-20h]

  <char as core::str::pattern::Pattern>::into_searcher(v27, a3, a4);
  v26[0] = 0LL;
  v26[1] = a4;
  v28 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v11, v26, &off_708700);
  if ( v13 != 5 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, aWrongNumberOfP, 26LL);
    goto LABEL_9;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, *v12, v12[1]);
  *(_QWORD *)&v15 = v21;
  v14 = v20;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 192);
  *(_QWORD *)(a2 + 208) = v15;
  *(_OWORD *)(a2 + 192) = v14;
  v6 = v13;
  if ( v13 < 2 )
  {
    v9 = &off_708718;
    v10 = 1LL;
    goto LABEL_16;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, v12[2], v12[3]);
  *(_QWORD *)&v15 = v21;
  v14 = v20;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 216);
  *(_QWORD *)(a2 + 232) = v15;
  *(_OWORD *)(a2 + 216) = v14;
  v6 = v13;
  if ( v13 < 3 )
  {
    v9 = &off_708730;
    v10 = 2LL;
    goto LABEL_16;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, v12[4], v12[5]);
  *(_QWORD *)&v15 = v21;
  v14 = v20;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 120);
  *(_QWORD *)(a2 + 136) = v15;
  *(_OWORD *)(a2 + 120) = v14;
  v6 = v13;
  if ( v13 < 4 )
  {
    v9 = &off_708748;
    v10 = 3LL;
    goto LABEL_16;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, v12[6], v12[7]);
  *(_QWORD *)&v15 = v21;
  v14 = v20;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 144);
  *(_QWORD *)(a2 + 160) = v15;
  *(_OWORD *)(a2 + 144) = v14;
  v6 = v13;
  if ( v13 < 5 )
  {
    v9 = &off_708760;
    v10 = 4LL;
LABEL_16:
    core::panicking::panic_bounds_check(v10, v6, v9);
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, v12[8], v12[9]);
  *(_QWORD *)&v15 = v21;
  v14 = v20;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 168);
  *(_QWORD *)(a2 + 184) = v15;
  *(_OWORD *)(a2 + 168) = v14;
  confy::store(&v14, aFleaConf, 9LL, 0LL, v7, a2 + 24);
  if ( (_DWORD)v14 != 10 )
  {
    v25 = v19;
    v24 = v18;
    v23 = v17;
    v22 = v16;
    v21 = v15;
    v20 = v14;
    <T as alloc::string::SpecToString>::spec_to_string(a1, &v20);
    core::ptr::drop_in_place<confy::ConfyError>(&v20);
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v11);
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, aOk_0, 2LL);
LABEL_9:
  *(_QWORD *)(a1 + 16) = v21;
  *(_OWORD *)a1 = v20;
  return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v11);
}