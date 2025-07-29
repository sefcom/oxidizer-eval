__int64 __fastcall flealib::commandprocessor::CommandProcessor::set_ftp_params(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r8
  char **v11; // rdx
  __int64 v12; // rdi
  _BYTE v13[8]; // [rsp+8h] [rbp-140h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-138h]
  unsigned __int64 v15; // [rsp+18h] [rbp-130h]
  __int128 v16; // [rsp+20h] [rbp-128h] BYREF
  __int128 v17; // [rsp+30h] [rbp-118h]
  __int128 v18; // [rsp+40h] [rbp-108h]
  __int128 v19; // [rsp+50h] [rbp-F8h]
  __int128 v20; // [rsp+60h] [rbp-E8h]
  __int128 v21; // [rsp+70h] [rbp-D8h]
  __int128 v22; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+90h] [rbp-B8h]
  __int128 v24; // [rsp+A0h] [rbp-A8h]
  __int128 v25; // [rsp+B0h] [rbp-98h]
  __int128 v26; // [rsp+C0h] [rbp-88h]
  __int128 v27; // [rsp+D0h] [rbp-78h]
  _QWORD v28[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v29[48]; // [rsp+F0h] [rbp-58h] BYREF
  __int16 v30; // [rsp+120h] [rbp-28h]

  <char as core::str::pattern::Pattern>::into_searcher(v29, a3, a4);
  v28[0] = 0LL;
  v28[1] = a4;
  v30 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v13, v28, &off_708700);
  if ( v15 != 3 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v22, aWrongNumberOfP, 26LL);
    goto LABEL_7;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v22, *v14, v14[1]);
  *(_QWORD *)&v17 = v23;
  v16 = v22;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 72);
  *(_QWORD *)(a2 + 88) = v17;
  *(_OWORD *)(a2 + 72) = v16;
  v6 = v15;
  if ( v15 < 2 )
  {
    v11 = &off_708778;
    v12 = 1LL;
    goto LABEL_12;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v22, v14[2], v14[3]);
  v7 = a2 + 24;
  *(_QWORD *)&v17 = v23;
  v16 = v22;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 24);
  *(_QWORD *)(a2 + 40) = v17;
  *(_OWORD *)(a2 + 24) = v16;
  v6 = v15;
  if ( v15 < 3 )
  {
    v11 = &off_708790;
    v12 = 2LL;
LABEL_12:
    core::panicking::panic_bounds_check(v12, v6, v11);
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v22, v14[4], v14[5]);
  *(_QWORD *)&v17 = v23;
  v16 = v22;
  core::ptr::drop_in_place<alloc::string::String>(a2 + 48);
  *(_QWORD *)(a2 + 64) = v17;
  *(_OWORD *)(a2 + 48) = v16;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v22, aFiles, 5LL);
  *(_QWORD *)&v17 = v23;
  v16 = v22;
  v8 = a2 + 96;
  core::ptr::drop_in_place<alloc::string::String>(v8);
  *(_QWORD *)(v8 + 16) = v17;
  *(_OWORD *)v8 = v16;
  confy::store(&v16, aFleaConf, 9LL, 0LL, v9, v7);
  if ( (_DWORD)v16 != 10 )
  {
    v27 = v21;
    v26 = v20;
    v25 = v19;
    v24 = v18;
    v23 = v17;
    v22 = v16;
    <T as alloc::string::SpecToString>::spec_to_string(a1, &v22);
    core::ptr::drop_in_place<confy::ConfyError>(&v22);
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v13);
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v22, aOk_0, 2LL);
LABEL_7:
  *(_QWORD *)(a1 + 16) = v23;
  *(_OWORD *)a1 = v22;
  return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v13);
}