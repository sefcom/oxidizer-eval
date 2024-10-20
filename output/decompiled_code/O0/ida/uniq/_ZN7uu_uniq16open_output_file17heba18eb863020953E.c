__int64 *__fastcall uu_uniq::open_output_file(__int64 *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 (__fastcall **v5)(); // r14
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v9; // [rsp+8h] [rbp-70h] BYREF
  __int128 v10; // [rsp+10h] [rbp-68h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  _DWORD v12[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+38h] [rbp-40h]
  __int128 v15; // [rsp+48h] [rbp-30h]
  __int64 v16[4]; // [rsp+58h] [rbp-20h] BYREF

  if ( !a2 || a3 == 1 && *a2 == 45 )
  {
    v16[0] = std::io::stdio::stdout();
    v11 = std::io::stdio::Stdout::lock(v16);
    v4 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *(_QWORD *)v4 = v11;
    v5 = &off_11CD58;
LABEL_13:
    v6 = 0LL;
    goto LABEL_14;
  }
  v9 = 0x1B600000000LL;
  LODWORD(v10) = 16777472;
  WORD2(v10) = 1;
  std::fs::OpenOptions::_open(v12, &v9, a2, a3);
  if ( !v12[0] )
  {
    LODWORD(v5) = v12[1];
    goto LABEL_10;
  }
  v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
         v13,
         a2,
         a3);
  v5 = &anon_83d8d7daf74a767102df91c4d2be5f63_10_llvm_17956670198652840951;
  if ( !v4 )
  {
LABEL_10:
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, 0x2000LL, 0LL);
    if ( v9 )
      alloc::raw_vec::handle_error(v10, *((_QWORD *)&v10 + 1));
    v14 = v10;
    *(_QWORD *)&v15 = 0LL;
    BYTE8(v15) = 0;
    HIDWORD(v15) = (_DWORD)v5;
    v4 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v7 = v14;
    *(_OWORD *)(v4 + 16) = v15;
    *(_OWORD *)v4 = v7;
    v5 = &off_11CD08;
    goto LABEL_13;
  }
  v6 = 1LL;
LABEL_14:
  a1[1] = v4;
  a1[2] = (__int64)v5;
  *a1 = v6;
  return a1;
}
