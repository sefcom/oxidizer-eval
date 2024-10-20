__int64 __fastcall uu_mkdir::exec(__int128 *a1, unsigned __int8 a2, unsigned int a3, unsigned __int8 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  unsigned int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 dir; // rbx
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r15
  void (__fastcall **v19)(__int64); // rax
  void (__fastcall *v20)(__int64); // rsi
  __int64 v22; // [rsp+0h] [rbp-138h] BYREF
  void (__fastcall **v23)(__int64); // [rsp+8h] [rbp-130h]
  unsigned int v24; // [rsp+10h] [rbp-128h]
  unsigned int v25; // [rsp+14h] [rbp-124h]
  __int128 v26; // [rsp+18h] [rbp-120h] BYREF
  __int64 v27; // [rsp+28h] [rbp-110h]
  __int128 v28; // [rsp+30h] [rbp-108h] BYREF
  __int64 v29; // [rsp+40h] [rbp-F8h] BYREF
  char v30[8]; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-E8h]
  __int64 v32; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-D8h]
  __int128 v34; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+90h] [rbp-A8h]
  _QWORD v37[2]; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v38[4]; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD v39[12]; // [rsp+D8h] [rbp-60h] BYREF

  v25 = a3;
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v36 = a1[3];
  v35 = v6;
  v34 = v5;
  v33 = v4;
  v24 = a2;
  v7 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = core::iter::adapters::flatten::and_then_or_clear((char *)&v34 + 8);
      if ( v10 )
        goto LABEL_7;
      v11 = *((_QWORD *)&v33 + 1);
      if ( !*((_QWORD *)&v33 + 1) || *((_QWORD *)&v33 + 1) == (_QWORD)v34 )
        break;
      *((_QWORD *)&v33 + 1) += 24LL;
      v8 = *(_QWORD *)(v11 + 8);
      v9 = *(_QWORD *)(v11 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v8, 48LL, 8LL, v9);
      *((_QWORD *)&v34 + 1) = v8;
      *(_QWORD *)&v35 = v8 + 48 * v9;
    }
    v10 = core::iter::adapters::flatten::and_then_or_clear((char *)&v35 + 8);
    if ( !v10 )
      return 0LL;
LABEL_7:
    v12 = ((__int64 (__fastcall *)(__int64))v33)(v10);
    if ( !v12 )
      return 0LL;
    if ( !*((_QWORD *)&v36 + 1) )
      core::panicking::panic_const::panic_const_sub_overflow(&off_10D7F0);
    --*((_QWORD *)&v36 + 1);
    if ( !*(_QWORD *)(v12 + 8)
      || *(__int64 *)(v12 + 16) < 0
      || (std::sys::os_str::bytes::Slice::to_owned(&v26), v29 = v27, v28 = v26, !*((_QWORD *)&v26 + 1))
      || v27 < 0
      || (uucore::features::fs::dir_strip_dot_for_creation(v30), !v31)
      || v32 < 0 )
    {
      core::panicking::panic_nounwind(aUnsafePrecondi, 162LL);
    }
    dir = uu_mkdir::create_dir(v31, v32, v24, v7, 0LL, v25);
    v15 = v14;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v26, v30);
    if ( *((_QWORD *)&v26 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v32, v26, *((_QWORD *)&v26 + 1), v27);
    if ( dir )
    {
      v22 = dir;
      v23 = (void (__fastcall **)(__int64))v15;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, (*(__int64 (__fastcall **)(__int64))(v15 + 96))(dir));
      v16 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v17 = *(_QWORD *)(v16 + 8);
      v18 = *(_QWORD *)(v16 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v17, 1LL, 1LL, v18);
      v37[0] = v17;
      v37[1] = v18;
      v38[0] = v37;
      v38[1] = <&T as core::fmt::Display>::fmt;
      v38[2] = &v22;
      v38[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v39[0] = &unk_10D978;
      v39[1] = 3LL;
      v39[4] = 0LL;
      v39[2] = v38;
      v39[3] = 2LL;
      std::io::stdio::_eprint(v39);
      v19 = v23;
      if ( *v23 )
      {
        (*v23)(v22);
        v19 = v23;
      }
      v20 = v19[1];
      if ( v20 )
        _rust_dealloc(v22, v20, v19[2]);
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(&v26, &v28);
    if ( *((_QWORD *)&v26 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v29, v26, *((_QWORD *)&v26 + 1), v27);
  }
}
